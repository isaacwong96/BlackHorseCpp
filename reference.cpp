#include<iostream>
using namespace std;

//��Ҫ���ؾֲ�����������
int& test01(){
   int a = 10;//�ֲ���������������е�ջ��
   return a;
}

//�����ĵ��ÿ�����Ϊ��ֵ
int& test02(){
   static int a = 10;//�ֲ���������������е�ջ��
   return a;
}

int main(){
    //2.4 ��������������ֵ
    //int &ref1 = test01();
    //cout<<"ref1="<<ref1<<endl;//VS���һ�λᱣ��������ȷ��
    //cout<<"ref1="<<ref1<<endl;

    int &ref2 = test02();
    cout<<"ref2="<<ref2<<endl;//VS���һ�λᱣ��������ȷ��
    test02() = 1000;//��������ķ���ֵ�����ã�������������ÿ�����Ϊ��ֵ
    cout<<"ref2="<<ref2<<endl;
}
