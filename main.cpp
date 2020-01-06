#include<string>
#include<iostream>
#include"product.h"
using namespace std;


Shirt shirt;
Shoe shoe;
Hat hat;
Trousers trousers;
Fridge fridge;
TV tv;
Cupboard cupboard;
Closet closet;
Sofa sofa;

 void  mymain()
{   	
	void addGoods();
	void showGoods();
    void intoContainer();
    void outContainer();
    void setPrice();
    void manageContainer();
    void storgeCount();
    void sumMoney();
    void productAddr();
    while(true){
		system("cls");
		cout<<"*****************欢迎来到商场销进存系统*****************"<<endl;
		cout<<"                     0.新商品的录入"<<endl;
		cout<<"                     1.所有商品信息"<<endl;
		cout<<"                     2.商品的增加"<<endl;
		cout<<"                     3.商品的出库"<<endl;
		cout<<"                     4.商品的调价"<<endl;
		cout<<"                     5.所属货柜的管理"<<endl;
		cout<<"                     6.库存的统计"<<endl;
		cout<<"                     7.总价格的计算"<<endl;
		cout<<"                     8.产地的统计"<<endl;
		cout<<"                     9.退出"<<endl;
		cout<<"请输入：";
		int c;
		cin>>c;
		switch(c){
		case 0:addGoods();break;
		case 1:showGoods();break;
		case 2:intoContainer();break;
		case 3:outContainer();break;
		case 4:setPrice();break;
		case 5:manageContainer();break;
		case 6:storgeCount();break;
		case 7:sumMoney();break;
		case 8:productAddr();break;
		case 9:exit(0);
		}
    }
}

void addGoods()
{   
    void addShirt();
    void addShoe();
    void addHat();
    void addTrousers();
    void addFridge();
    void addTV();
    void addCupboard();
    void addCloset();
    void addSofa();
	while(true){
		cout<<"*********************商品种类*****************"<<endl;
		cout<<"                     0.衬衫"<<endl;
		cout<<"                     1.鞋子"<<endl;
		cout<<"                     2.帽子"<<endl;
		cout<<"                     3.裤子"<<endl;
		cout<<"                     4.冰箱"<<endl;
		cout<<"                     5.电视"<<endl;
		cout<<"                     6.立柜"<<endl;
		cout<<"                     7.壁橱"<<endl;
		cout<<"                     8.沙发"<<endl;
		cout<<"                     9.返回"<<endl;
		cout<<"请输入：";
		int g;
		cin>>g;
		switch(g){
		case 0:addShirt();break;
		case 1:addShoe();break;
		case 2:addHat();break;
		case 3:addTrousers();break;
		case 4:addFridge();break;
		case 5:addTV();break;
		case 6:addCupboard();break;
		case 7:addCloset();break;
		case 8:addSofa();break;
		case 9:mymain();break;
		}
	}
 
}
void showGoods()
{
  while(true){
	    system("cls");
		cout<<"*********************商品种类*****************"<<endl;
		cout<<"                     0.衬衫"<<endl;
		cout<<"                     1.鞋子"<<endl;
		cout<<"                     2.帽子"<<endl;
		cout<<"                     3.裤子"<<endl;
		cout<<"                     4.冰箱"<<endl;
		cout<<"                     5.电视"<<endl;
		cout<<"                     6.立柜"<<endl;
		cout<<"                     7.壁橱"<<endl;
		cout<<"                     8.沙发"<<endl;
		cout<<"                     9.返回"<<endl;
		cout<<"请输入：";
		int g;
		cin>>g;
		switch(g){
		case 0:shirt.display();cout<<"按回车继续：";cin.get();cin.get();break;
		case 1:shoe.display();cout<<"按回车继续：";cin.get();cin.get();break;
		case 2:hat.display();cout<<"按回车继续：";cin.get();cin.get();break;
		case 3:trousers.display();cout<<"按回车继续：";cin.get();cin.get();break;
		case 4:fridge.display();cout<<"按回车继续：";cin.get();cin.get();break;
		case 5:tv.display();cout<<"按回车继续：";cin.get();cin.get();break;
		case 6:cupboard.display();cout<<"按回车继续：";cin.get();cin.get();break;
		case 7:closet.display();cout<<"按回车继续：";cin.get();cin.get();break;
		case 8:sofa.display();cout<<"按回车继续：";cin.get();cin.get();break;
		case 9:mymain();break;
		}
	}
}
void addShirt()
{
	string cloth,size,productAddr;
    double price,storge;
	int containerNum;
	cout<<"商品名称：shirt"<<endl;
	cout<<"请输入布料cloth：";
	cin>>cloth;
	cout<<"请输入尺寸size：";
	cin>>size;
	cout<<"请输入价格price：";
	cin>>price;
	cout<<"请输入产地productAddr：";
	cin>>productAddr;
	cout<<"请输入数量storge：";
	cin>>storge;
	cout<<"请输入所属货柜（0-9):";
	cin>>containerNum;
	shirt.set(cloth,size,price,productAddr,storge,containerNum);
}
void addShoe()
{
    string leather,size,productAddr;
    double price,storge;
	int containerNum;
	cout<<"商品名称：Shoe"<<endl;
	cout<<"请输入皮料leather：";
	cin>>leather;
	cout<<"请输入尺寸size：";
	cin>>size;
	cout<<"请输入价格price：";
	cin>>price;
	cout<<"请输入产地productAddr：";
	cin>>productAddr;
	cout<<"请输入数量storge：";
	cin>>storge;
	cout<<"请输入所属货柜（0-9):";
	cin>>containerNum;
	shoe.set(leather,size,price,productAddr,storge,containerNum);
}
void addHat()
{
    string cloth,style,size,productAddr;
    double price,storge;
	int containerNum;
	cout<<"商品名称：Hat"<<endl;
	cout<<"请输入布料cloth：";
	cin>>cloth;
	cout<<"请输入样式（平顶或尖顶）style：";
	cin>>style;
	cout<<"请输入尺寸size：";
	cin>>size;
	cout<<"请输入价格price：";
	cin>>price;
	cout<<"请输入产地productAddr：";
	cin>>productAddr;
	cout<<"请输入数量storge：";
	cin>>storge;
	cout<<"请输入所属货柜（0-9):";
	cin>>containerNum;
	hat.set(cloth,style,size,price,productAddr,storge,containerNum);
}
void addTrousers()
{
    string cloth,size,productAddr;
    double price,storge;
	int containerNum;
	cout<<"商品名称：Trousers"<<endl;
	cout<<"请输入布料cloth：";
	cin>>cloth;
	cout<<"请输入尺寸size：";
	cin>>size;
	cout<<"请输入价格price：";
	cin>>price;
	cout<<"请输入产地productAddr：";
	cin>>productAddr;
	cout<<"请输入数量storge：";
	cin>>storge;
	cout<<"请输入所属货柜（0-9):";
	cin>>containerNum;
	trousers.set(cloth,size,price,productAddr,storge,containerNum);
}
void addFridge()
{
    string type,style,color,size,productAddr;
    double price,storge,weight;
	int containerNum;
	cout<<"商品名称：Fridege"<<endl;
	cout<<"请输入制冷类型type：";
	cin>>type;
	cout<<"请输入样式（二门或三门）style：";
	cin>>style;
	cout<<"请输入颜色color:";
	cin>>color;
	cout<<"请输入尺寸size：";
	cin>>size;
	cout<<"请输入价格price：";
	cin>>price;
	cout<<"请输入产地productAddr：";
	cin>>productAddr;
	cout<<"请输入数量storge：";
	cin>>storge;
	cout<<"请输入重量weight：";
	cin>>weight;
	cout<<"请输入所属货柜（0-9):";
	cin>>containerNum;
	fridge.set(type,style,color,size,price,productAddr,storge,weight,containerNum);
}
void addTV()
{
    string style,color,size,productAddr;
    double price,storge,weight;
	int containerNum;
	cout<<"商品名称：TV"<<endl;
	cout<<"请输入样式(彩色或黑白）style：";
	cin>>style;
	cout<<"请输入颜色color:";
	cin>>color;
	cout<<"请输入尺寸size：";
	cin>>size;
	cout<<"请输入价格price：";
	cin>>price;
	cout<<"请输入产地productAddr：";
	cin>>productAddr;
	cout<<"请输入数量storge：";
	cin>>storge;
	cout<<"请输入重量weight：";
	cin>>weight;
	cout<<"请输入所属货柜（0-9):";
	cin>>containerNum;
	tv.set(style,color,size,price,productAddr,storge,weight,containerNum);
}
void addCupboard()
{
    string timber,color,size,productAddr;
    double price,storge;
	int containerNum;
	cout<<"商品名称：Cupboard"<<endl;
	cout<<"请输入木料timber：";
	cin>>timber;
	cout<<"请输入颜色color:";
	cin>>color;
	cout<<"请输入尺寸size：";
	cin>>size;
	cout<<"请输入价格price：";
	cin>>price;
	cout<<"请输入产地productAddr：";
	cin>>productAddr;
	cout<<"请输入数量storge：";
	cin>>storge;
	cout<<"请输入所属货柜（0-9):";
	cin>>containerNum;
	cupboard.set(timber,color,size,price,productAddr,storge,containerNum);
}
void addCloset()
{
    string timber,color,size,productAddr;
    double price,storge;
	int containerNum;
	cout<<"商品名称：Closet"<<endl;
	cout<<"请输入木料timber：";
	cin>>timber;
	cout<<"请输入颜色color:";
	cin>>color;
	cout<<"请输入尺寸size：";
	cin>>size;
	cout<<"请输入价格price：";
	cin>>price;
	cout<<"请输入产地productAddr：";
	cin>>productAddr;
	cout<<"请输入数量storge：";
	cin>>storge;
	cout<<"请输入所属货柜（0-9):";
	cin>>containerNum;
	closet.set(timber,color,size,price,productAddr,storge,containerNum);
}
void addSofa()
{
    string timber,leather,color,size,productAddr;
    double price,storge;
	int containerNum;
	cout<<"商品名称：Cupboard"<<endl;
	cout<<"请输入木料timber：";
	cin>>timber;
	cout<<"请输入皮料leather：";
	cin>>leather;
	cout<<"请输入颜色color:";
	cin>>color;
	cout<<"请输入尺寸size：";
	cin>>size;
	cout<<"请输入价格price：";
	cin>>price;
	cout<<"请输入产地productAddr：";
	cin>>productAddr;
	cout<<"请输入数量storge：";
	cin>>storge;
	cout<<"请输入所属货柜（0-9):";
	cin>>containerNum;
	sofa.set(timber,leather,color,size,price,productAddr,storge,containerNum);
}

void intoContainer()
{	
     while(true){
	    cout<<"          产品名    库存量(件)"<<endl;
		cout.width(10);
        cout.setf(ios::left);
        cout<<"0.衬衫";
	    shirt.showStorge();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"1.鞋子";
        shoe.showStorge();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"2.帽子";
        hat.showStorge();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"3.裤子";
        trousers.showStorge();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"4.冰箱";
        fridge.showStorge();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"5.电视";
        tv.showStorge();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"6.立柜";
        cupboard.showStorge();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"7.壁橱";
        closet.showStorge();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"8.沙发";
        sofa.showStorge();
		cout<<"9.返回 "<<endl;
		cout<<"请输入：";
		int g;
		double s;
		cin>>g;
		switch(g){
		case 0:{cout<<"新加数：";cin>>s;shirt.setStorage(s);};break;
		case 1:{cout<<"新加数：";cin>>s;shoe.setStorage(s);};break;
		case 2:{cout<<"新加数：";cin>>s;hat.setStorage(s);};break;
		case 3:{cout<<"新加数：";cin>>s;trousers.setStorage(s);};break;
		case 4:{cout<<"新加数：";cin>>s;fridge.setStorage(s);};break;
		case 5:{cout<<"新加数：";cin>>s;tv.setStorage(s);};break;
		case 6:{cout<<"新加数：";cin>>s;cupboard.setStorage(s);};break;
		case 7:{cout<<"新加数：";cin>>s;closet.setStorage(s);};break;
		case 8:{cout<<"新加数：";cin>>s;sofa.setStorage(s);};break;
		case 9:mymain();break;
		}
	  }
}
void outContainer()
{
  while(true){
	    cout<<"          产品名    库存量(件)"<<endl;
		cout.width(10);
        cout.setf(ios::left);
        cout<<"0.衬衫";
	    shirt.showStorge();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"1.鞋子";
        shoe.showStorge();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"2.帽子";
        hat.showStorge();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"3.裤子";
        trousers.showStorge();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"4.冰箱";
        fridge.showStorge();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"5.电视";
        tv.showStorge();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"6.立柜";
        cupboard.showStorge();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"7.壁橱";
        closet.showStorge();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"8.沙发";
        sofa.showStorge();
		cout<<"9.返回 "<<endl;
		cout<<"请输入：";
		int g;
		double s;
		cin>>g;
		switch(g){
		case 0:{cout<<"出货量（<=村存量）：";cin>>s;shirt.getGoods(s);};break;
		case 1:{cout<<"出货量（<=村存量）：";cin>>s;shoe.getGoods(s);};break;
		case 2:{cout<<"出货量（<=村存量）：";cin>>s;hat.getGoods(s);};break;
		case 3:{cout<<"出货量（<=村存量）：";cin>>s;trousers.getGoods(s);};break;
		case 4:{cout<<"出货量（<=村存量）：";cin>>s;fridge.getGoods(s);};break;
		case 5:{cout<<"出货量（<=村存量）：";cin>>s;tv.getGoods(s);};break;
		case 6:{cout<<"出货量（<=村存量）：";cin>>s;cupboard.getGoods(s);};break;
		case 7:{cout<<"出货量（<=村存量）：";cin>>s;closet.getGoods(s);};break;
		case 8:{cout<<"出货量（<=村存量）：";cin>>s;sofa.getGoods(s);};break;
		case 9:mymain();break;
		}
	  }
}
void setPrice()
{
  while(true){
	    cout<<"          产品名    价格(元)"<<endl;
		cout.width(10);
        cout.setf(ios::left);
        cout<<"0.衬衫";
	    shirt.showPrice();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"1.鞋子";
        shoe.showPrice();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"2.帽子";
        hat.showPrice();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"3.裤子";
        trousers.showPrice();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"4.冰箱";
        fridge.showPrice();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"5.电视";
        tv.showPrice();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"6.立柜";
        cupboard.showPrice();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"7.壁橱";
        closet.showStorge();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"8.沙发";
        sofa.showPrice();
		cout<<"9.返回 "<<endl;
		cout<<"请输入：";
		int g;
		double p;
		cin>>g;
		switch(g){
		case 0:{cout<<"新价格：";cin>>p;shirt.setPrice(p);};break;
		case 1:{cout<<"新价格：";cin>>p;shoe.setPrice(p);};break;
		case 2:{cout<<"新价格：";cin>>p;hat.setPrice(p);};break;
		case 3:{cout<<"新价格：";cin>>p;trousers.setPrice(p);};break;
		case 4:{cout<<"新价格：";cin>>p;fridge.setPrice(p);};break;
		case 5:{cout<<"新价格：";cin>>p;tv.setPrice(p);};break;
		case 6:{cout<<"新价格：";cin>>p;cupboard.setPrice(p);};break;
		case 7:{cout<<"新价格：";cin>>p;closet.setPrice(p);};break;
		case 8:{cout<<"新价格：";cin>>p;sofa.setPrice(p);};break;
		case 9:mymain();break;
		}
	  }
}
void manageContainer()
{
   while(true){
	    cout<<"          产品名    所属货柜号"<<endl;
		cout.width(10);
        cout.setf(ios::left);
        cout<<"0.衬衫";
	    shirt.showContainer();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"1.鞋子";
        shoe.showContainer();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"2.帽子";
        hat.showContainer();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"3.裤子";
        trousers.showContainer();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"4.冰箱";
        fridge.showContainer();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"5.电视";
        tv.showContainer();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"6.立柜";
        cupboard.showContainer();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"7.壁橱";
        closet.showContainer();
		cout.width(10);
        cout.setf(ios::left);
        cout<<"8.沙发";
        sofa.showContainer();
		cout<<"9.返回 "<<endl;
		cout<<"请输入：";
		int g;
		int cn;
		cin>>g;
		switch(g){
		case 0:{cout<<"所属货柜更改（0-9）：";cin>>cn;shirt.setContainer(cn);};break;
		case 1:{cout<<"所属货柜更改（0-9）：";cin>>cn;shoe.setContainer(cn);};break;
		case 2:{cout<<"所属货柜更改（0-9）：";cin>>cn;hat.setContainer(cn);};break;
		case 3:{cout<<"所属货柜更改（0-9）：";cin>>cn;trousers.setContainer(cn);};break;
		case 4:{cout<<"所属货柜更改（0-9）：";cin>>cn;fridge.setContainer(cn);};break;
		case 5:{cout<<"所属货柜更改（0-9）：";cin>>cn;tv.setContainer(cn);};break;
		case 6:{cout<<"所属货柜更改（0-9）：";cin>>cn;cupboard.setContainer(cn);};break;
		case 7:{cout<<"所属货柜更改（0-9）：";cin>>cn;closet.setContainer(cn);};break;
		case 8:{cout<<"所属货柜更改（0-9）：";cin>>cn;sofa.setContainer(cn);};break;
		case 9:mymain();break;
		}
	  }
}
void storgeCount()
{
    cout<<"产品名    库存量(件)"<<endl;
	shirt.showStorge();
    shoe.showStorge();
    hat.showStorge();
    trousers.showStorge();
    fridge.showStorge();
    tv.showStorge();
    cupboard.showStorge();
    closet.showStorge();
    sofa.showStorge();
    cout<<"按回车继续：";
    cin.get();
    cin.get();
} 
void sumMoney()
{
  cout<<"产品名    总价格(元)"<<endl;
  cout.width(10);
  cout.setf(ios::left);
  cout<<"衬衫";
  cout.width(10);
  cout.setf(ios::left);
  cout<<shirt.sumPrice()<<endl;
   cout.width(10);
  cout.setf(ios::left);
  cout<<"鞋子";
  cout.width(10);
  cout.setf(ios::left);
  cout<<shoe.sumPrice()<<endl;
   cout.width(10);
  cout.setf(ios::left);
  cout<<"帽子";
  cout.width(10);
  cout.setf(ios::left);
  cout<<hat.sumPrice()<<endl;
   cout.width(10);
  cout.setf(ios::left);
  cout<<"裤子";
  cout.width(10);
  cout.setf(ios::left);
  cout<<trousers.sumPrice()<<endl;
    cout.width(10);
  cout.setf(ios::left);
  cout<<"冰箱";
  cout.width(10);
  cout.setf(ios::left);
  cout<<fridge.sumPrice()<<endl;
   cout.width(10);
  cout.setf(ios::left);
  cout<<"电视";
  cout.width(10);
  cout.setf(ios::left);
  cout<<tv.sumPrice()<<endl;
   cout.width(10);
  cout.setf(ios::left);
  cout<<"立柜";
  cout.width(10);
  cout.setf(ios::left);
  cout<<cupboard.sumPrice()<<endl;
   cout.width(10);
  cout.setf(ios::left);
  cout<<"壁橱";
  cout.width(10);
  cout.setf(ios::left);
  cout<<closet.sumPrice()<<endl;
  cout.width(10);
  cout.setf(ios::left);
  cout<<"沙发";
  cout.width(10);
  cout.setf(ios::left);
  cout<<sofa.sumPrice()<<endl;
  cout<<"按回车继续：";
  cin.get();
  cin.get();
}
void productAddr()
{
	cout<<"产品名    产地"<<endl;
    shirt.showAddr();
    shoe.showAddr();
    hat.showAddr();
    trousers.showAddr();
    fridge.showAddr();
    tv.showAddr();
    cupboard.showAddr();
    closet.showAddr();
    sofa.showAddr();
    cout<<"按回车继续：";
    cin.get();
    cin.get();
}

int main()
{
  mymain();
  return 0;
}

   
