#include<iostream>
using namespace std;

//ջ������ע������  ������Ҫ���ؾֲ������ĵ�ַ
//ջ���������ɱ����������ٺ��ͷ�

int* func()//�β�����Ҳ�����ջ��
{
    int a = 10;//�ֲ������������ջ����ջ�����ݺ���ִ�����Զ��ͷ�
    return &a;
}

int main(){
    int *p = func();
    cout<<*p<<endl;//�еı������ᱣ��һ�����ݣ������10
    cout<<*p<<endl;

    system("pause");
}
