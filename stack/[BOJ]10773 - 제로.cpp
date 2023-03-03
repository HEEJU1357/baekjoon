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
        return data[top--];//top�� --�Ǿ� ���� top�� ��ĭ �Ʒ��� �����͸� ����Ű�Ƿ� ������ ��ȯ �� ������ ������ �� �� ����.
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