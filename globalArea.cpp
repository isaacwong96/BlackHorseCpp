#include<iostream>
using namespace std;

//ȫ�ֱ���
int g_a = 10;
int g_b = 10;
const int c_g_a = 10;
const int c_g_b = 10;
int main(){
    //ȫ����
    //������ͨ�ֲ�����
    int a = 10;
    int b = 10;
    //��̬����
    static int s_a = 10;
    static int s_b = 10;
    //����
    //const����ȫ�ֱ���
    const int c_l_a = 10;
    const int c_l_b = 10;


    cout<<"l_a:\t"<<(int)&a<<endl;
    cout<<"l_b:\t"<<(int)&b<<endl;

    cout<<"c_l_a:\t"<<(int)&c_l_a<<endl;
    cout<<"c_l_b:\t"<<(int)&c_l_b<<endl;

    cout<<"g_a:\t"<<(int)&g_a<<endl;
    cout<<"g_t:\t"<<(int)&g_b<<endl;

    cout<<"c_g_a:\t"<<(int)&c_g_a<<endl;
    cout<<"c_g_b:\t"<<(int)&c_g_b<<endl;

    cout<<"s_a:\t"<<(int)&s_a<<endl;
    cout<<"s_b:\t"<<(int)&s_b<<endl;

    //�ַ�������
    cout<<"string:\t"<<(int)&"HelloWorld"<<endl;
}
