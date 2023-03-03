#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

const int MAX_STACK_SIZE = 100000;

class ArrayStack {
    int top;
    int data[MAX_STACK_SIZE];
    int sum;
public:
    ArrayStack() { top = -1; }
    ~ArrayStack() {}

    void push(int e) {
        data[++top] = e;
    }
    int pop() {
        return data[top--];//top이 --되어 현재 top이 한칸 아래의 데이터를 가리키므로 데이터 반환 후 삭제한 것으로 볼 수 있음.
    }

    int display() {
        int sum = 0;
        for (int i = 0; i <= top; i++) { sum += data[i]; }
        return sum;
    }
};
int main() {
    int k;
    cin >> k;
    int num;
    ArrayStack as;

    for (int i = 0; i < k; i++)
    {
        cin >> num;
        if (num == 0) as.pop();
        else as.push(num);
    }

    cout << as.display();
}