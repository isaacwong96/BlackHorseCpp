#include<iostream>

using namespace std;

struct Student{
    string name;
    int age;
    int score;

}s3;  //Def 3

struct Teacher{
    int id;
    string name;
    int age;
    Student stu;
};

void printStudent1(Student s){
    s.age = 100;
    cout<<"ֵ���ݺ����д�ӡ��"<<s.age<<endl;
}
//�ɼ����ڴ�ռ����ģ����Ḵ���µĸ��������п��ܻ�ı�ԭ���ݣ�
//���Բ������ݵ�ʱ���Ƽ���const
void printStudent2(Student *p){
    p->age = 100;
    cout<<"��ַ���ݺ����д�ӡ��"<<p->age<<endl;
}

int main(){
    //Def 1
    //struct Student s1;
    //struct����ʡ��
    Student s1;
    s1.name = "����";
    s1.age = 18;
    s1.score = 100;
    cout<<"����:"<<s1.name<<"����:"<<s1.age<<"����:"<<s1.score<<endl;

    //Def 2
    //struct Student s2 = {"����", 19, 80};
    Student s2 = {"����", 19, 80};
    cout<<"����:"<<s2.name<<"����:"<<s2.age<<"����:"<<s2.score<<endl;

    //Def 3
    s3.name = "����";
    s3.age = 20;
    s3.score = 60;
    cout<<"����:"<<s3.name<<"����:"<<s3.age<<"����:"<<s3.score<<endl;

////////////////////////////////////////////////////////////////////////////////////
    //�ṹ������
    cout<<"�ṹ������"<<endl;
    struct Student stuArray[3] =
    {
        {"����", 18, 100},
        {"����", 28, 99},
        {"����", 38, 66}
    };
    //���ṹ��������Ԫ�ظ�ֵ
    stuArray[2].name = "����";

    //�����ṹ������
    for(int i=0; i<3; i++){
        cout<<"������"<<stuArray[i].name<<endl;
    }
////////////////////////////////////////////////////////////////////////////////////
    //�ṹ��ָ�롣����->
    cout<<"�ṹ��ָ��"<<endl;
    Student s = {"����", 18, 100};
    Student *p = &s;

    cout << p->name<<endl;
////////////////////////////////////////////////////////////////////////////////////
    cout<<"�ṹ���Ƕ��"<<endl;
    Teacher t;
    t.id = 10000;
    t.name = "����";
    t.age = 50;
    t.stu.name = "С��";
    t.stu.age = 20;
    t.stu.score = 60;
    cout<<t.name<<t.stu.name<<endl;
////////////////////////////////////////////////////////////////////////////////////
    cout<<"�ṹ��������"<<endl;
    Student s_para;
    s_para.name = "����";
    s_para.age = 20;
    s_para.score = 85;

    printStudent1(s_para);
    printStudent2(&s_para);
    cout<<"main�������ӡ��"<<s_para.age<<endl;
}
