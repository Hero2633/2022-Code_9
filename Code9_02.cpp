#define  _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
#include<string>
using namespace std;
class Base
{
public:
	void Top()
	{
		cout << "��ҳ�����ࡢѡ�񡭡�" << endl;
	}
	void Lfet()
	{
		cout << "Java��C/C++��Python����" << endl;
	}
	void Down()
	{
		cout << "��������������ϵ��ʽ����" << endl;
	}
};
//class Java
//{
//public:
//	void Top()
//	{
//		cout << "��ҳ�����ࡢѡ�񡭡�" << endl;
//	}
//	void Lfet()
//	{
//		cout << "Java��C/C++��Python����" << endl;
//	}
//	void Down()
//	{
//		cout << "��������������ϵ��ʽ����" << endl;
//	}
//	void Special()
//	{
//		cout << "Javaѧϰ���ϡ���" << endl;
//	}
//};
//class Python
//{
//public:
//	void Top()
//	{
//		cout << "��ҳ�����ࡢѡ�񡭡�" << endl;
//	}
//	void Lfet()
//	{
//		cout << "Java��C/C++��Python����" << endl;
//	}
//	void Down()
//	{
//		cout << "��������������ϵ��ʽ����" << endl;
//	}
//	void Special()
//	{
//		cout << "Pythonѧϰ���ϡ���" << endl;
//	}
//};
//class Cpp
//{
//public:
//	void Top()
//	{
//		cout << "��ҳ�����ࡢѡ�񡭡�" << endl;
//	}
//	void Lfet()
//	{
//		cout << "Java��C/C++��Python����" << endl;
//	}
//	void Down()
//	{
//		cout << "��������������ϵ��ʽ����" << endl;
//	}
//	void Special()
//	{
//		cout << "C++ѧϰ���ϡ���" << endl;
//	}
//};////////δʹ�ü̳м�������ʾһ�����������
/////////ʹ�ü̳м�������ʾһ���������
//class Java : public Base
//{
//public:
//	void Special()
//	{
//		cout << "Javaѧϰ���ϡ���" << endl;
//	}
//};
//class Python : public Base
//{
//public:
//	void Special()
//	{
//		cout << "Pythonѧϰ���ϡ���" << endl;
//	}
//};
//class Cpp : public Base
//{
//public:
//	void Special()
//	{
//		cout << "C++ѧϰ���ϡ���" << endl;
//	}
//};
//void test1()//ʹ�ü̳м����Ͳ�ʹ�ü̳м���ʵ�ʴﵽ��Ч��һ��������ʹ�ü̳м�������ٴ����ظ������̳��﷨��class ���ࣺ�̳з�ʽ��public/protected/private�� ����
//{
//	Java ja;
//	ja.Top();
//	ja.Lfet();
//	ja.Special();
//	ja.Down();
//	cout << "----------------------------------" << endl;
//	Python py;
//	py.Top();
//	py.Lfet();
//	py.Special();
//	py.Down();
//	cout << "----------------------------------" << endl;
//	Cpp cpp;
//	cpp.Top();
//	cpp.Lfet();
//	cpp.Special();
//	cpp.Down();
//}
//int main()
//{
//	test1();
//	return 0;
//}
//class Father
//{
//public:
//	Father()
//	{
//		cout << "Father���캯������" << endl;
//		wife_name = "��������";
//		bank_card_password = "123456";
//		Small_movies = "���������";
//	}
//	~Father()
//	{	cout << "Father������������" << endl;
//	}
//	string wife_name;
//protected:
//	string bank_card_password;
//private:
//	string Small_movies;
//	
//};
////�̳У��������г�Ա���ᱻ�̳�
//class Son1 :public Father//������ʽ�̳У����๫����Ա��������Ա�����������Բ��䣬˽������Ҳ�ᱻ�̳е��Ǳ������Ὣ�����أ������޷����ʸ����˽�����ԣ�
//{
//public:
//	string My_name;
//	Son1()
//	{
//		My_name = "Son1";
//	}
//	void ShowFather()
//	{
//		cout << "�ô��:" << My_name << endl;
//		cout << "���׵�����:" << wife_name<<endl;
//		cout << "���׵����п�����:" << bank_card_password << endl;
//		//cout << "���׵�С��Ӱ:" << Small_movies;//�����˽�г�Ա�ᱻ���������أ���������̳���Ҳ�޷����ʣ�
//	}
//
//};
//void test1()//������ʽ�̳�
//{
//	Son1 p;
//	p.ShowFather();
//	//cout << "���׵�����:" << p.wife_name << endl;
//	//cout << "���׵����п�����:" << p.bank_card_password << endl;//�����������ڱ���Ȩ�ޣ���Ȼ�޷����������
//}
//class Son2 :protected Father//������ʽ�̳У������еĹ�����Ա��������Ա�����������ֱ������ԣ�˽�г�ԱҲ�ᱻ����̳У����ǻᱻ���������أ������޷����ʣ���
//{
//public:
//	string My_name;
//	Son2()
//	{
//		cout << "Son2���캯������" << endl;
//		My_name = "Son2";
//		bank_card_password = "666666";
//	}
//	void ShowFather()
//	{
//		cout << "�ô��:" << My_name << endl;
//		cout << "���׵�����:" << wife_name << endl;
//		cout << "���׵����п�����:" << bank_card_password << endl;
//		//cout << "���׵�С��Ӱ:" << Small_movies;//�����˽�г�Ա�ᱻ���������أ���������̳���Ҳ�޷����ʣ�
//	}
//	~Son2()
//	{
//		cout << "Son2������������" << endl;
//	}
//};
//void test2()
//{
//	Son2 p;
//	p.ShowFather();
//	//cout << "���׵�����:" << p.wife_name << endl;//�������ԣ������޷�����
//	//cout << "���׵����п�����:" << p.bank_card_password << endl;//�����������ڱ���Ȩ�ޣ���Ȼ�޷����������
//}
//class Son3 :private Father//˽�з�ʽ�̳�//(�����й�����Ա��������Ա������������˽�����ԣ�����˽�г�ԱҲ�ᱻ�̳У����Ǳ������Ὣ�����أ������з��ʲ��ˣ�)
//{
//public:
//	string My_name;
//	Son3()
//	{
//		My_name = "Son3";
//		bank_card_password = "Son3 666";
//	}
//	void ShowFather()
//	{
//		cout << "�ô��:" << My_name << endl;
//		cout << "���׵�����:" << wife_name << endl;
//		cout << "���׵����п�����:" << bank_card_password << endl;
//		//cout << "���׵�С��Ӱ:" << Small_movies;//�����˽�г�Ա�ᱻ���������أ���������̳���Ҳ�޷����ʣ�
//	}
//
//};
//void test3()
//{
//	Son3 p;
//	p.ShowFather();
//	//cout << "���׵�����:" << p.wife_name << endl;//˽�����ԣ������޷�����
//	//cout << "���׵����п�����:" << p.bank_card_password << endl;//������������˽��Ȩ�ޣ���Ȼ�޷����������
//}
//class tmp
//{
//public:
//	int m_A;
//	int m_B;
//	int M_C;
//
//};
//int main()//���Լ̳з�ʽ��
//{
//	//test1();
//	///test2();
//	//test3();
//	//Son2 p;
//	//cout << "sizeof(Son2):" << sizeof(p) << endl;//4��string�Ĵ�С(ÿ������Ķ��󣬶���Ӧһ������ĸ��࣬���಻����)��ͬʱҲ֤���������ȷ�̳��˸���˽�г�Ա��
//	//cout << "i\'love" << endl;
//	//cout << sizeof(tmp) << endl;
//	Son2 p;//�̳У��ȷ����������Ĺ��죬�ڷ����������Ĺ��죻�������෴��
//	return 0;
//}
//
//class Father
//{
//public:
//	static void func()
//	{
//		cout << "Father:func()" << endl;
//	}
//	Father()
//	{
//		//cout << "Father���캯������" << endl;
//		wife_name = "��������";
//		bank_card_password = "123456";
//		Small_movies = "���������";
//	}
//	~Father()
//	{
//		//cout << "Father������������" << endl;
//	}
//	static string wife_name;
//protected:
//	string bank_card_password;
//private:
//	string Small_movies;
//
//};
////�̳У��������г�Ա���ᱻ�̳�
//string Father::wife_name=" ";
//class Son1 :public Father//������ʽ�̳У����๫����Ա��������Ա�����������Բ��䣬˽������Ҳ�ᱻ�̳е��Ǳ������Ὣ�����أ������޷����ʸ����˽�����ԣ�
//{
//public:
//	static string wife_name;
//	Son1()
//	{
//		wife_name = "Son1";
//	}
//	void ShowFather()
//	{
//		cout << "�ô��:" << wife_name << endl;
//		cout << "���׵�����:" << wife_name << endl;
//		cout << "���׵����п�����:" << bank_card_password << endl;
//		//cout << "���׵�С��Ӱ:" << Small_movies;//�����˽�г�Ա�ᱻ���������أ���������̳���Ҳ�޷����ʣ�
//	}
//	static void func()
//	{
//		cout << "Son1:func()" << endl;
//	}
//
//};//����͸�������
//string Son1::wife_name=" ";
//int main()
//{
//	Son1 p;
//	cout << "ͨ����������" << endl;
//	cout << "Son1��wife_name:" << p.wife_name<<endl;
//	cout << "Father��wife_name:" << p.Father::wife_name << endl;//������͸�������������£����������Զ����ظ���ͬ����Ա������������������Ҫ���ʸ����Ա����ͨ�����ϸ���������ķ�ʽ�����з���
//	p.func();
//	p.Father::func();
//	return 0;
//}
//int main()//��̬��Ա����
//{
//	Son1 p;
//	/*cout << "ͨ����������" << endl;
//	cout << "Son1:wife_name >:" << p.wife_name << endl;
//	cout << "Father:wife_name >:" << p.Father::wife_name << endl;
//	cout << "---------------------------------" << endl;
//	cout << "ͨ����������" << endl;
//	cout << "Son1:wife_name >:" << Son1::wife_name << endl;
//	cout << "Father:wife_name >:" << Father::wife_name << endl;
//	cout << "Father:wife_name >:" << Son1::Father::wife_name << endl;*/
//	cout << "ͨ����������" << endl;
//	p.func();
//	p.Father::func();
//	cout << "---------------------------------" << endl;
//	cout << "ͨ����������" << endl;
//	Son1::func();
//	Son1::Father::func();
//
//	return 0;
//}
//class Father1
//{
//public:
//	int m_age;
//	Father1()
//	{
//		m_age = 1;
//	}
//
//};
//class Father2
//{
//public:
//	int m_age;
//	Father2()
//	{
//		m_age = 2;
//	}
//};
//class Son:public Father1,public Father2
//{
//public:
//	int m_age;
//	Son()
//	{
//		m_age = 0;
//	}
//};
//int main()
//{
//	Son p;
//	p.m_age = 10;
//	p.Father1::m_age = 20;
//	p.Father2::m_age = 30;
//	cout << p.m_age << endl;
//	cout << p.Father1::m_age << endl;
//	cout << p.Father2::m_age << endl;
//	return 0;
//}
//���μ̳�
//class Animal
//{
//public:
//	int m_age;
//	Animal()
//	{
//		m_age = 10;
//	}
//};
//class Camel:public Animal
//{
//public:
//	double weight;
//	Camel()
//	{
//		weight = 3.16;
//	}
//};
//class Sheep:public Animal
//{
//public:
//	double height;
//	Sheep()
//	{
//		//m_age = 10;
//		height = 666.6;
//	}
//};
//class Alpaca:public virtual Sheep,public virtual Camel
//{
//public:
//	Alpaca()
//	{}
//};
//int main()
//{
//	Alpaca p;
//	Sheep p1;
//	cout << p.Camel::m_age << endl;
//	cout << p.Sheep::m_age<<endl;
//	cout << p.height<<endl;
//	cout << p.weight<<endl;
//cout<<	sizeof(p);
//	//cout<<p1.m_age;
//	//cout << sizeof(Sheep);
//	//cout << p.Sheep::height;
//}