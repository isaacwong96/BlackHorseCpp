#include<iostream>
using namespace std;

//new�Ļ����﷨
int * func(){
    //�ڶ���������������
    //new���ص��Ǹ��������͵�ָ��
    int * p = new int(10);
    return p;
}
void test01(){
    int * p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    //�����������ɳ���Ա�����٣�����Ա�����ͷ�
    //������ͷŶ������ݣ���delete
    //vs��delete���������*p��
    delete p;
    cout<<*p<<endl;
    cout<<*p<<endl;
    cout<<*p<<endl;
}
void test02(){
    //�����￪������
    int * arr = new int[10];
    for(int i=0; i<10; i++){
        arr[i] = i + 100;
    }
    for(int i=0; i<10; i++){
        cout<<arr[i]<<endl;
    }
    //�ͷŶ�������
    //�ͷ�����ʱҪ��[]
    delete[] arr;
}
int main(){
    test01();
    test02();
}
