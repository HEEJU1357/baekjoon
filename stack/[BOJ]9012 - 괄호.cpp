#include<iostream>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

const int MAX_STACK_SIZE = 10000;

class ArrayStack {
    int top;
    char data[MAX_STACK_SIZE];
public:
    ArrayStack() { top = -1; }
    ~ArrayStack() {}
    bool isEmpty() { return top == -1; }
    bool isFull() { return top == MAX_STACK_SIZE; }
    int stackcnt() {
        return top + 1;
    }
    void push(char e) {
        data[++top] = e;
    }
    char pop() {
        if (isEmpty()) return -1;
        return data[top--];//top이 --되어 현재 top이 한칸 아래의 데이터를 가리키므로 데이터 반환 후 삭제한 것으로 볼 수 있음.
    }
    char peek() {
        if (isEmpty()) return -1;
        return data[top];
    }
};
int main() {


    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        char ch[51];

        ArrayStack as;
        string ans = "YES";
        cin >> ch;
        int len = strlen(ch);
        for (int j = 0; j < len; j++)
        {
            if (ch[j] == '(') as.push(ch[j]);
            else if (ch[j] == ')') {
                if (as.pop() != '(') {
                    ans = "NO";
                    break;
                }
            }
        }

        if (!as.isEmpty()) cout << "NO" << "\n";
        else cout << ans << "\n";

    }
}