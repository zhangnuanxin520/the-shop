#ifndef _PRODUCT_H
#define _PRODUCT_H
#include<iostream>
using namespace std;
class Goods                    //声明基类
{
public:                        //基类公用成员
	Goods(){}
	Goods(double p,string pa,double s,int cn);//构造函数
	void set();                //为类更改现有类函数，与构造函数累世，不过不创建新类
	void setPrice(double &);   //设计价格
	void setStorage(double &); //设定库存
	void getGoods(double &);   //取出货物，库存更新
	void setContainer(int &);  //设定所属货柜
	double sumPrice();         //获得总价格（单价*库存量）
	void showPrice();          //显示单价
	void showStorge();         //显示库存量   
	void showAddr();           //显示产地
	void showContainer();      //显示所属货柜
	void display();            //显示所有属性信息
protected:
	static string name;        //货物名称，声明为静态变量，直接在类体外初始化
	double price;              //单价
	string productAddr;        //产地
	double storge;             //库存量
	int containerNum;          //所属货柜
};
string Goods::name="Goods";
Goods::Goods(double p,string pa,double s,int cn):price(p),productAddr(pa),storge(s),containerNum(cn){}
void set(){}
void Goods::setPrice(double &p){}
void Goods::setStorage(double &s){}
void Goods::getGoods(double &){};
void Goods::setContainer(int &cn){};
double sumPrice(){ return 1;}
void Goods::showAddr(){}
void Goods::showStorge(){}
void Goods::showPrice(){}
void Goods::display(){}

class Shirt:public Goods
{
public:
	Shirt(){cloth="*",size="*",price=0,productAddr="*",storge=0,containerNum=-1;}  
                                                               //默认初始化
	void set(string cl,string si,double p,string pa,double st,int cn);
	                                                           //对所有成员的修改
	void setPrice(double &);                                   //设定价格
	void setStorage(double &);                                 //设定库存量
	void getGoods(double &);                                   //取货物，修改库存
	void setContainer(int &);                                  //设定所属货柜
	double sumPrice();                                         //求总价值
	void showAddr();                                           //设定产地
	void showStorge();                                         //显示库存量
	void showPrice();                                          //显示价格
	void showContainer();                                      //显示所属货柜
	void display();                                            //货物所有信息显示
protected:
	string cloth;                                              //子类Shirt增加的成员
	string size;
	static string name;                                        //静态成员，标示类名
};
string Shirt::name="Shirt";
void Shirt::set(string cl,string si,double p,string pa,double st,int cn)
{
	cloth=cl;
	size=si;
	price=p;
	productAddr=pa;
	storge=st;
	containerNum=cn;
}
void Shirt::setPrice(double &s)
{
  price=s;
}
void Shirt::setStorage(double &s)
{
  storge+=s;
}
void Shirt::getGoods(double &g)
{
  double s;
  if(g<=storge) storge-=g;
  else {cout<<"请重新输入：";cin>>s;getGoods(s);}
}
void Shirt::setContainer(int &cn)
{
  containerNum=cn;
}
double Shirt::sumPrice()
{
  return storge*price;
}
void Shirt::showAddr()
{
  	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<productAddr<<endl;
}
void Shirt::showStorge()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<storge<<endl;
}
void Shirt::showPrice()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<price<<endl;
}
void Shirt::showContainer()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<containerNum<<endl;
}
void Shirt::display()
{
	cout<<"产品名    布料      尺寸      单价(元)  产地           库存(件)  所属货柜"<<endl;
	cout.width(10);
	cout.setf(ios::left);
	cout<<name;
	cout.width(10);
	cout.setf(ios::left);
	cout<<cloth;
	cout.width(10);
	cout.setf(ios::left);
	cout<<size;
	cout.width(10);
	cout.setf(ios::left);
	cout<<price;
	cout.width(15);
	cout.setf(ios::left);
	cout<<productAddr;
	cout.width(10);
	cout.setf(ios::left);
	cout<<storge;
	cout.width(10);
	cout.setf(ios::left);
	cout<<containerNum<<endl;
}

//********************************************************************************

class Shoe:public Goods
{
public:
	Shoe(){leather="*",size="*",price=0,productAddr="*",storge=0,containerNum=-1;}
	//Shirt(string cl,string si,double p,string pa,double st,int cn);
	void set(string l,string si,double p,string pa,double st,int cn);
	void setPrice(double &);
	void setStorage(double &);
	void getGoods(double &);
	void setContainer(int &);
	double sumPrice();
	void showAddr();
	void showStorge();
	void showPrice();
	void showContainer();
	void display();
protected:
	string leather;
	string size;
	static string name;
};
string Shoe::name="Shoe";
void Shoe::set(string l,string si,double p,string pa,double st,int cn)
{
	leather=l;
	size=si;
	price=p;
	productAddr=pa;
	storge=st;
	containerNum=cn;
}
void Shoe::setPrice(double &s)
{
  price=s;
}
void Shoe::setStorage(double &s)
{
  storge+=s;
}
void Shoe::getGoods(double &g)
{
  double s;
  if(g<=storge) storge-=g;
  else {cout<<"请重新输入：";cin>>s;getGoods(s);}
}
void Shoe::setContainer(int &cn)
{
  containerNum=cn;
}
double Shoe::sumPrice()
{
  return storge*price;
}
void Shoe::showAddr()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<productAddr<<endl;
}
void Shoe::showStorge()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<storge<<endl;
}
void Shoe::showPrice()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<price<<endl;
}
void Shoe::showContainer()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<containerNum<<endl;
}
void Shoe::display()
{
	cout<<"产品名    皮料      尺寸      单价(元)  产地           库存(件)  所属货柜"<<endl;
	cout.width(10);
	cout.setf(ios::left);
	cout<<name;
	cout.width(10);
	cout.setf(ios::left);
	cout<<leather;
	cout.width(10);
	cout.setf(ios::left);
	cout<<size;
	cout.width(10);
	cout.setf(ios::left);
	cout<<price;
	cout.width(15);
	cout.setf(ios::left);
	cout<<productAddr;
	cout.width(10);
	cout.setf(ios::left);
	cout<<storge;
	cout.width(10);
	cout.setf(ios::left);
	cout<<containerNum<<endl;
}

//**********************************************************************************
class Hat:public Goods
{
public:
	Hat(){cloth="*",style="*",size="*",price=0,productAddr="*",storge=0,containerNum=-1;}
	void set(string cl,string sy,string si,double p,string pa,double st,int cn);
	void setPrice(double &);
	void setStorage(double &);
	void getGoods(double &);
	void setContainer(int &);
	double sumPrice();
	void showAddr();
	void showStorge();
	void showPrice();
	void showContainer();
	void display();
protected:
	string cloth;
	string style;
	string size;
	static string name;
};
string Hat::name="Hat";
void Hat::set(string cl,string sy,string si,double p,string pa,double st,int cn)
{
	cloth=cl;
	style=sy;
	size=si;
	price=p;
	productAddr=pa;
	storge=st;
	containerNum=cn;
}
void Hat::setPrice(double &s)
{
  price=s;
}
void Hat::setStorage(double &s)
{
  storge+=s;
}
void Hat::getGoods(double &g)
{
  double s;
  if(g<=storge) storge-=g;
  else {cout<<"请重新输入：";cin>>s;getGoods(s);}
}
void Hat::setContainer(int &cn)
{
  containerNum=cn;
}
double Hat::sumPrice()
{
  return storge*price;
}
void Hat::showAddr()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<productAddr<<endl;
}
void Hat::showStorge()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<storge<<endl;
}
void Hat::showPrice()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<price<<endl;
}
void Hat::showContainer()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<containerNum<<endl;
}
void Hat::display()
{
	cout<<"产品名    布料      样式      尺寸      单价(元)  产地           库存(件)  所属货柜  "<<endl;
	cout.width(10);
	cout.setf(ios::left);
	cout<<name;
	cout.width(10);
	cout.setf(ios::left);
	cout<<cloth;
	cout.width(10);
	cout.setf(ios::left);
	cout<<style;
	cout.width(10);
	cout.setf(ios::left);
	cout<<size;
	cout.width(10);
	cout.setf(ios::left);
	cout<<price;
	cout.width(15);
	cout.setf(ios::left);
	cout<<productAddr;
	cout.width(10);
	cout.setf(ios::left);
	cout<<storge;
	cout.width(10);
	cout.setf(ios::left);
	cout<<containerNum<<endl;
}

//*************************************************************************************
class Trousers:public Goods
{
public:
	Trousers(){cloth="*",size="*",price=0,productAddr="*",storge=0,containerNum=-1;}
	void set(string cl,string si,double p,string pa,double st,int cn);
	void setPrice(double &);
	void setStorage(double &);
	void getGoods(double &);
	void setContainer(int &);
	double sumPrice();
	void showAddr();
	void showStorge();
	void showPrice();
	void showContainer();
	void display();
protected:
	string cloth;
	string size;
	static string name;
};
string Trousers::name="Trousers";
void Trousers::set(string cl,string si,double p,string pa,double st,int cn)
{
	cloth=cl;
	size=si;
	price=p;
	productAddr=pa;
	storge=st;
	containerNum=cn;
}
void Trousers::setPrice(double &s)
{
  price=s;
}
void Trousers::setStorage(double &s)
{
  storge+=s;
}
void Trousers::getGoods(double &g)
{
  double s;
  if(g<=storge) storge-=g;
  else {cout<<"请重新输入：";cin>>s;getGoods(s);}
}
void Trousers::setContainer(int &cn)
{
  containerNum=cn;
}
double Trousers::sumPrice()
{
  return storge*price;
}
void Trousers::showAddr()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<productAddr<<endl;
}
void Trousers::showStorge()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<storge<<endl;
}
void Trousers::showPrice()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<price<<endl;
}
void Trousers::showContainer()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<containerNum<<endl;
}
void Trousers::display()
{
	cout<<"产品名    布料      尺寸      单价      产地           库存量    所属货柜"<<endl;
	cout.width(10);
	cout.setf(ios::left);
	cout<<name;
	cout.width(10);
	cout.setf(ios::left);
	cout<<cloth;
	cout.width(10);
	cout.setf(ios::left);
	cout<<size;
	cout.width(10);
	cout.setf(ios::left);
	cout<<price;
	cout.width(15);
	cout.setf(ios::left);
	cout<<productAddr;
	cout.width(10);
	cout.setf(ios::left);
	cout<<storge;
	cout.width(10);
	cout.setf(ios::left);
	cout<<containerNum<<endl;
}

//*************************************************************************
class Fridge:public Goods
{
public:
	Fridge(){type="*",style="*",color="*",size="*",price=0,productAddr="*",storge=0,weight=0,containerNum=-1;}
	void set(string ty,string sy,string co,string si,double p,string pa,double st,double w,int cn);
	void setPrice(double &);
	void setStorage(double &);
	void getGoods(double &);
	void setContainer(int &);
	double sumPrice();
	void showAddr();
	void showStorge();
	void showPrice();
	void showContainer();
	void display();
protected:
	string type;
	string style;
	string color;
	string size;
	double weight;
	static string name;
};
string Fridge::name="Fridge";
void Fridge::set(string ty,string sy,string co,string si,double p,string pa,double st,double w,int cn)
{
	type=ty;
	style=sy;
	color=co;
	size=si;
	price=p;
	productAddr=pa;
	storge=st;
	weight=w;
	containerNum=cn;
}
void Fridge::setPrice(double &s)
{
  price=s;
}
void Fridge::setStorage(double &s)
{
  storge+=s;
}
void Fridge::getGoods(double &g)
{
  double s;
  if(g<=storge) storge-=g;
  else {cout<<"请重新输入：";cin>>s;getGoods(s);}
}
void Fridge::setContainer(int &cn)
{
  containerNum=cn;
}
double Fridge::sumPrice()
{
  return storge*price;
}
void Fridge::showAddr()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<productAddr<<endl;
}
void Fridge::showStorge()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<storge<<endl;
}
void Fridge::showPrice()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<price<<endl;
}
void Fridge::showContainer()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<containerNum<<endl;
}
void Fridge::display()
{
	cout<<"产品名    制冷类型  样式      颜色      尺寸      单价(元)  产地           库存(件)  重量(kg)  所属货柜"<<endl;
	cout.width(10);
	cout.setf(ios::left);
	cout<<name;
	cout.width(10);
	cout.setf(ios::left);
	cout<<type;
	cout.width(10);
	cout.setf(ios::left);
	cout<<style;
	cout.width(10);
	cout.setf(ios::left);
	cout<<color;
	cout.width(10);
	cout.setf(ios::left);
	cout<<size;
	cout.width(10);
	cout.setf(ios::left);
	cout<<price;
	cout.width(15);
	cout.setf(ios::left);
	cout<<productAddr;
	cout.width(10);
	cout.setf(ios::left);
	cout<<storge;
	cout.width(10);
	cout.setf(ios::left);
	cout<<weight;
	cout.width(10);
	cout.setf(ios::left);
	cout<<containerNum<<endl;
}

//*********************************************************
class TV:public Goods
{
public:
	TV(){style="*",color="*",size="*",price=0,productAddr="*",storge=0,weight=0,containerNum=-1;}
	void set(string sy,string co,string si,double p,string pa,double st,double w,int cn);
	void setPrice(double &);
	void setStorage(double &);
	void getGoods(double &);
	void setContainer(int &);
	double sumPrice();
	void showAddr();
	void showStorge();
	void showPrice();
	void showContainer();
	void display();
protected:
	string style;
	string color;
	string size;
	double weight;
	static string name;
};
string TV::name="TV";
void TV::set(string sy,string co,string si,double p,string pa,double st,double w,int cn)
{
	style=sy;
	color=co;
	size=si;
	price=p;
	productAddr=pa;
	storge=st;
	weight=w;
	containerNum=cn;

}
void TV::setPrice(double &s)
{
  price=s;
}
void TV::setStorage(double &s)
{
  storge+=s;
}
void TV::getGoods(double &g)
{
  double s;
  if(g<=storge) storge-=g;
  else {cout<<"请重新输入：";cin>>s;getGoods(s);}
}
void TV::setContainer(int &cn)
{
  containerNum=cn;
}
double TV::sumPrice()
{
  return storge*price;
}
void TV::showAddr()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<productAddr<<endl;
}
void TV::showStorge()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<storge<<endl;
}
void TV::showPrice()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<price<<endl;
}
void TV::showContainer()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<containerNum<<endl;
}
void TV::display()
{
	cout<<"产品名    样式      颜色      尺寸      单价(元)  产地           库存(件)  重量(kg)  所属货柜"<<endl;
	cout.width(10);
	cout.setf(ios::left);
	cout<<name;
	cout.width(10);
	cout.setf(ios::left);
	cout<<style;
	cout.width(10);
	cout.setf(ios::left);
	cout<<color;
	cout.width(10);
	cout.setf(ios::left);
	cout<<size;
	cout.width(10);
	cout.setf(ios::left);
	cout<<price;
	cout.width(15);
	cout.setf(ios::left);
	cout<<productAddr;
	cout.width(10);
	cout.setf(ios::left);
	cout<<storge;
	cout.width(10);
	cout.setf(ios::left);
	cout<<weight;
	cout.width(10);
	cout.setf(ios::left);
	cout<<containerNum<<endl;
}
//******************************************************************
class Cupboard:public Goods
{
public:
	Cupboard(){timber="*",color="*",size="*",price=0,productAddr="*",storge=0,containerNum=-1;}
	void set(string ti,string co,string si,double p,string pa,double st,int cn);
	void setPrice(double &);
	void setStorage(double &);
	void getGoods(double &);
	void setContainer(int &);
	double sumPrice();
	void showAddr();
	void showStorge();
	void showPrice();
	void showContainer();
	void display();
protected:
	string timber;
	string color;
	string size;
	static string name;
};
string Cupboard::name="Cupboard";
void Cupboard::set(string ti,string co,string si,double p,string pa,double st,int cn)
{
	timber=ti;
	color=co;
	size=si;
	price=p;
	productAddr=pa;
	storge=st;
	containerNum=cn;
}
void Cupboard::setPrice(double &s)
{
  price=s;
}
void Cupboard::setStorage(double &s)
{
  storge+=s;
}
void Cupboard::getGoods(double &g)
{
  double s;
  if(g<=storge) storge-=g;
  else {cout<<"请重新输入：";cin>>s;getGoods(s);}
}
void Cupboard::setContainer(int &cn)
{
  containerNum=cn;
}
double Cupboard::sumPrice()
{
  return storge*price;
}
void Cupboard::showAddr()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<productAddr<<endl;
}
void Cupboard::showStorge()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<storge<<endl;
}
void Cupboard::showPrice()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<price<<endl;
}
void Cupboard::showContainer()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<containerNum<<endl;
}
void Cupboard::display()
{
	cout<<"产品名    木料      颜色      尺寸      单价(元)  产地           库存(件)  所属货柜"<<endl;
	cout.width(10);
	cout.setf(ios::left);
	cout<<name;
	cout.width(10);
	cout.setf(ios::left);
	cout<<timber;
	cout.width(10);
	cout.setf(ios::left);
	cout<<color;
	cout.width(10);
	cout.setf(ios::left);
	cout<<size;
	cout.width(10);
	cout.setf(ios::left);
	cout<<price;
	cout.width(15);
	cout.setf(ios::left);
	cout<<productAddr;
	cout.width(10);
	cout.setf(ios::left);
	cout<<storge;
	cout.width(10);
	cout.setf(ios::left);
	cout<<containerNum<<endl;
}
//******************************************************************************
class Closet:public Goods
{
public:
	Closet(){timber="*",color="*",size="*",price=0,productAddr="*",storge=0,containerNum=-1;}
	void set(string ti,string co,string si,double p,string pa,double st,int cn);
	void setPrice(double &);
	void setStorage(double &);
	void getGoods(double &);
	void setContainer(int &);
	double sumPrice();
	void showAddr();
	void showStorge();
	void showPrice();
	void showContainer();
	void display();
protected:
	string timber;
	string color;
	string size;
	static string name;
};
string Closet::name="Closet";
void Closet::set(string ti,string co,string si,double p,string pa,double st,int cn)
{
	timber=ti;
	color=co;
	size=si;
	price=p;
	productAddr=pa;
	storge=st;
	containerNum=cn;
}
void Closet::setPrice(double &s)
{
  price=s;
}
void Closet::setStorage(double &s)
{
  storge+=s;
}
void Closet::getGoods(double &g)
{
  double s;
  if(g<=storge) storge-=g;
  else {cout<<"请重新输入：";cin>>s;getGoods(s);}
}
void Closet::setContainer(int &cn)
{
  containerNum=cn;
}
double Closet::sumPrice()
{
  return storge*price;
}
void Closet::showAddr()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<productAddr<<endl;
}
void Closet::showStorge()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<storge<<endl;
}
void Closet::showPrice()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<price<<endl;
}
void Closet::showContainer()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<containerNum<<endl;
}
void Closet::display()
{
	cout<<"产品名    木料      颜色      尺寸      单价(元)  产地           库存(件)  所属货柜"<<endl;
	cout.width(10);
	cout.setf(ios::left);
	cout<<name;
	cout.width(10);
	cout.setf(ios::left);
	cout<<timber;
	cout.width(10);
	cout.setf(ios::left);
	cout<<color;
	cout.width(10);
	cout.setf(ios::left);
	cout<<size;
	cout.width(10);
	cout.setf(ios::left);
	cout<<price;
	cout.width(15);
	cout.setf(ios::left);
	cout<<productAddr;
	cout.width(10);
	cout.setf(ios::left);
	cout<<storge;
	cout.width(10);
	cout.setf(ios::left);
	cout<<containerNum<<endl;
}
//******************************************************************************
class Sofa:public Goods
{
public:
	Sofa(){timber="*",leather="*",color="*",size="*",price=0,productAddr="*",storge=0,containerNum=-1;}
	void set(string ti,string l,string co,string si,double p,string pa,double st,int cn);
	void setPrice(double &);
	void setStorage(double &);
	void getGoods(double &);
	void setContainer(int &);
	double sumPrice();
	void showAddr();
	void showStorge();
	void showPrice();
	void showContainer();
	void display();
protected:
	string timber;
	string leather;
	string color;
	string size;
	static string name;
};
string Sofa::name="Sofa";
void Sofa::set(string ti,string l,string co,string si,double p,string pa,double st,int cn)
{
	timber=ti;
	leather=l;
	color=co;
	size=si;
	price=p;
	productAddr=pa;
	storge=st;
	containerNum=cn;
}
void Sofa::setPrice(double &s)
{
  price=s;
}
void Sofa::setStorage(double &s)
{
  storge+=s;
}
void Sofa::getGoods(double &g)
{
  double s;
  if(g<=storge) storge-=g;
  else {cout<<"请重新输入：";cin>>s;getGoods(s);}
}
void Sofa::setContainer(int &cn)
{
  containerNum=cn;
}
double Sofa::sumPrice()
{
  return storge*price;
}
void Sofa::showAddr()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<productAddr<<endl;
}
void Sofa::showStorge()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<storge<<endl;
}
void Sofa::showPrice()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<price<<endl;
}
void Sofa::showContainer()
{
     cout.width(10);
	 cout.setf(ios::left);
	 cout<<name;
	 cout.width(10);
	 cout.setf(ios::left);
	 cout<<containerNum<<endl;
}
void Sofa::display()
{
	cout<<"产品名    皮料    木料    颜色    尺寸     单价(元)  产地     库存(件)  所属货柜"<<endl;
	cout.width(10);
	cout.setf(ios::left);
	cout<<name;
	cout.width(10);
	cout.setf(ios::left);
	cout<<timber;
	cout.width(10);
	cout.setf(ios::left);
	cout<<leather;
	cout.width(10);
	cout.setf(ios::left);
	cout<<color;
	cout.width(10);
	cout.setf(ios::left);
	cout<<size;
	cout.width(8);
	cout.setf(ios::left);
	cout<<price;
	cout.width(15);
	cout.setf(ios::left);
	cout<<productAddr;
	cout.width(10);
	cout.setf(ios::left);
	cout<<storge;
	cout.width(10);
	cout.setf(ios::left);
	cout<<containerNum<<endl;
}

#endif
