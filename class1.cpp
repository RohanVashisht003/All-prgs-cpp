#include<iostream>
#include<cstring>
using namespace std;

class tv
{
    int price;
    public:
    char *n;
    int size;


    /*void inputdata(char a[],int p,int s)
    {
        strcpy(n,a);
        price=p;
        size=s;
    }*/


void print()
{
    cout<<"Name of TV"<<" "<<n<<endl;
    cout<<"Price of TV"<<" "<<price<<endl;
    cout<<"Size of TV"<<" "<<size<<endl;
}


/*void updateprice(int updatedprice)
{
    price=updatedprice;
}*/

tv()
{
    cout<<"I am in constructor"<<endl;
}

tv(char a[],int pri, int siz)
{
    cout<<"In parameterized constructor"<<endl;
    int len=strlen(a);
    n=new char[len+1];
    strcpy(n,a);
    price=pri;
    size=siz;
}

//copy const
tv(tv &D)
{
    cout<<"In copy const"<<endl;
    strcpy(n,D.n);
    price=D.price;
    size=D.size;
}

};


int main()
{

    tv A("Intex",45666,32);
    //tv B("intel",2808,21);
   // tv B;
   // tv C;
   // A.inputdata("Intex T-32",20000, 32);
   // A.updateprice(39000);
   // B.inputdata("Samsung",34000,50);
    A.print();
    //B.print();
    cout<<sizeof(A)<<endl;
    //tv  C(B);
   //C.print();



}

