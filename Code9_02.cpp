#define  _CRT_SECURE_NO_WARNINGS 0
#include<iostream>
#include<string>
using namespace std;
class Base
{
public:
	void Top()
	{
		cout << "首页、分类、选择……" << endl;
	}
	void Lfet()
	{
		cout << "Java、C/C++、Python……" << endl;
	}
	void Down()
	{
		cout << "帮助、交流、联系方式……" << endl;
	}
};
//class Java
//{
//public:
//	void Top()
//	{
//		cout << "首页、分类、选择……" << endl;
//	}
//	void Lfet()
//	{
//		cout << "Java、C/C++、Python……" << endl;
//	}
//	void Down()
//	{
//		cout << "帮助、交流、联系方式……" << endl;
//	}
//	void Special()
//	{
//		cout << "Java学习资料……" << endl;
//	}
//};
//class Python
//{
//public:
//	void Top()
//	{
//		cout << "首页、分类、选择……" << endl;
//	}
//	void Lfet()
//	{
//		cout << "Java、C/C++、Python……" << endl;
//	}
//	void Down()
//	{
//		cout << "帮助、交流、联系方式……" << endl;
//	}
//	void Special()
//	{
//		cout << "Python学习资料……" << endl;
//	}
//};
//class Cpp
//{
//public:
//	void Top()
//	{
//		cout << "首页、分类、选择……" << endl;
//	}
//	void Lfet()
//	{
//		cout << "Java、C/C++、Python……" << endl;
//	}
//	void Down()
//	{
//		cout << "帮助、交流、联系方式……" << endl;
//	}
//	void Special()
//	{
//		cout << "C++学习资料……" << endl;
//	}
//};////////未使用继承技术来表示一个广告栏……
/////////使用继承技术来表示一个广告栏；
//class Java : public Base
//{
//public:
//	void Special()
//	{
//		cout << "Java学习资料……" << endl;
//	}
//};
//class Python : public Base
//{
//public:
//	void Special()
//	{
//		cout << "Python学习资料……" << endl;
//	}
//};
//class Cpp : public Base
//{
//public:
//	void Special()
//	{
//		cout << "C++学习资料……" << endl;
//	}
//};
//void test1()//使用继承技术和不使用继承技术实际达到的效果一样，但是使用继承技术会减少代码重复量，继承语法：class 子类：继承方式（public/protected/private） 父类
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
//		cout << "Father构造函数调用" << endl;
//		wife_name = "友利奈绪";
//		bank_card_password = "123456";
//		Small_movies = "妈妈的朋友";
//	}
//	~Father()
//	{	cout << "Father析构函数调用" << endl;
//	}
//	string wife_name;
//protected:
//	string bank_card_password;
//private:
//	string Small_movies;
//	
//};
////继承：父类所有成员都会被继承
//class Son1 :public Father//公共方式继承（父类公共成员、保护成员在子类中属性不变，私有属性也会被继承但是编译器会将其隐藏，我们无法访问父类的私有属性）
//{
//public:
//	string My_name;
//	Son1()
//	{
//		My_name = "Son1";
//	}
//	void ShowFather()
//	{
//		cout << "好大儿:" << My_name << endl;
//		cout << "父亲的妻子:" << wife_name<<endl;
//		cout << "父亲的银行卡密码:" << bank_card_password << endl;
//		//cout << "父亲的小电影:" << Small_movies;//父类的私有成员会被编译器隐藏，就算子类继承了也无法访问；
//	}
//
//};
//void test1()//公共方式继承
//{
//	Son1 p;
//	p.ShowFather();
//	//cout << "父亲的妻子:" << p.wife_name << endl;
//	//cout << "父亲的银行卡密码:" << p.bank_card_password << endl;//在子类中属于保护权限，自然无法在类外访问
//}
//class Son2 :protected Father//保护方式继承，父类中的公共成员、保护成员在子类中体现保护属性（私有成员也会被子类继承，但是会被编译器隐藏，子类无法访问））
//{
//public:
//	string My_name;
//	Son2()
//	{
//		cout << "Son2构造函数调用" << endl;
//		My_name = "Son2";
//		bank_card_password = "666666";
//	}
//	void ShowFather()
//	{
//		cout << "好大儿:" << My_name << endl;
//		cout << "父亲的妻子:" << wife_name << endl;
//		cout << "父亲的银行卡密码:" << bank_card_password << endl;
//		//cout << "父亲的小电影:" << Small_movies;//父类的私有成员会被编译器隐藏，就算子类继承了也无法访问；
//	}
//	~Son2()
//	{
//		cout << "Son2析构函数调用" << endl;
//	}
//};
//void test2()
//{
//	Son2 p;
//	p.ShowFather();
//	//cout << "父亲的妻子:" << p.wife_name << endl;//保护属性，类外无妨访问
//	//cout << "父亲的银行卡密码:" << p.bank_card_password << endl;//在子类中属于保护权限，自然无法在类外访问
//}
//class Son3 :private Father//私有方式继承//(父类中公共成员、保护成员在子类中体现私有属性（父类私有成员也会被继承，但是编译器会将其隐藏，子类中访问不了）)
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
//		cout << "好大儿:" << My_name << endl;
//		cout << "父亲的妻子:" << wife_name << endl;
//		cout << "父亲的银行卡密码:" << bank_card_password << endl;
//		//cout << "父亲的小电影:" << Small_movies;//父类的私有成员会被编译器隐藏，就算子类继承了也无法访问；
//	}
//
//};
//void test3()
//{
//	Son3 p;
//	p.ShowFather();
//	//cout << "父亲的妻子:" << p.wife_name << endl;//私有属性，类外无妨访问
//	//cout << "父亲的银行卡密码:" << p.bank_card_password << endl;//在子类中属于私有权限，自然无法在类外访问
//}
//class tmp
//{
//public:
//	int m_A;
//	int m_B;
//	int M_C;
//
//};
//int main()//测试继承方式；
//{
//	//test1();
//	///test2();
//	//test3();
//	//Son2 p;
//	//cout << "sizeof(Son2):" << sizeof(p) << endl;//4个string的大小(每个具体的对象，都对应一个具体的父类，父类不共享)（同时也证明了子类的确继承了父类私有成员）
//	//cout << "i\'love" << endl;
//	//cout << sizeof(tmp) << endl;
//	Son2 p;//继承：先发生父类对象的构造，在发生子类对象的构造；析构则相反；
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
//		//cout << "Father构造函数调用" << endl;
//		wife_name = "友利奈绪";
//		bank_card_password = "123456";
//		Small_movies = "妈妈的朋友";
//	}
//	~Father()
//	{
//		//cout << "Father析构函数调用" << endl;
//	}
//	static string wife_name;
//protected:
//	string bank_card_password;
//private:
//	string Small_movies;
//
//};
////继承：父类所有成员都会被继承
//string Father::wife_name=" ";
//class Son1 :public Father//公共方式继承（父类公共成员、保护成员在子类中属性不变，私有属性也会被继承但是编译器会将其隐藏，我们无法访问父类的私有属性）
//{
//public:
//	static string wife_name;
//	Son1()
//	{
//		wife_name = "Son1";
//	}
//	void ShowFather()
//	{
//		cout << "好大儿:" << wife_name << endl;
//		cout << "父亲的妻子:" << wife_name << endl;
//		cout << "父亲的银行卡密码:" << bank_card_password << endl;
//		//cout << "父亲的小电影:" << Small_movies;//父类的私有成员会被编译器隐藏，就算子类继承了也无法访问；
//	}
//	static void func()
//	{
//		cout << "Son1:func()" << endl;
//	}
//
//};//子类和父类重名
//string Son1::wife_name=" ";
//int main()
//{
//	Son1 p;
//	cout << "通过对象名：" << endl;
//	cout << "Son1下wife_name:" << p.wife_name<<endl;
//	cout << "Father下wife_name:" << p.Father::wife_name << endl;//在子类和父类重名的情况下，编译器会自动隐藏父类同名成员（包括函数）：如想要访问父类成员可以通过加上父类作用域的方式来进行防蚊
//	p.func();
//	p.Father::func();
//	return 0;
//}
//int main()//静态成员重名
//{
//	Son1 p;
//	/*cout << "通过对象名：" << endl;
//	cout << "Son1:wife_name >:" << p.wife_name << endl;
//	cout << "Father:wife_name >:" << p.Father::wife_name << endl;
//	cout << "---------------------------------" << endl;
//	cout << "通过类型名：" << endl;
//	cout << "Son1:wife_name >:" << Son1::wife_name << endl;
//	cout << "Father:wife_name >:" << Father::wife_name << endl;
//	cout << "Father:wife_name >:" << Son1::Father::wife_name << endl;*/
//	cout << "通过对象名：" << endl;
//	p.func();
//	p.Father::func();
//	cout << "---------------------------------" << endl;
//	cout << "通过类型名：" << endl;
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
//菱形继承
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