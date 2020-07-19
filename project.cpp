#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int i=0;
class student
{
public:
    string name,cls,sec;
    int id;
    void ipt(int i)
    {
        cout<<"Name : ";
        cin>>name;
        cout<<"class : ";
        cin>>cls;
        cout<<"section : ";
        cin>>sec;
        id=i;
    }
    void pnt()
    {
        cout<<id<<"\t\t"<<name<<"\t\t"<<cls<<"\t\t"<<sec<<endl;
    }
};
int main()
{
    int v,vv;
    student a;
    ofstream fe;
    while(1)
    {
    system("cls");
    cout<<"\t\t   ****************** Student Record System *******************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"\t1.ADD STUDENT"<<endl;
    cout<<"\t2.LIST STUDENT"<<endl;
    cout<<"\t3.MODIFY STUDENT"<<endl;
    cout<<"\t4.DELETE STUDENT"<<endl;
    cout<<"\t5.**EXIT**"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"Enter The Number To proceed : ";
    int n;
    char ff;
    string s;
    ff=getche();
    n=ff-'0';
    switch(n)
    {
    case 1:
        system("cls");
            cout<<"\t\t   ****************** Please Add the Students *******************"<<endl;
            fe.open("data.txt",ios::app);
        do
        {
        i++;
        a.ipt(i);
        fe.write((char *)&a,sizeof(a));
        cout<<"DO YOU WANT TO ADD MORE[Y || N] : ";
        cin>>s;
        }
        while(s=="Y" || s=="y");
        fe.close();
        break;
    case 2:
        {
         system("cls");
        cout<<"SI.NO \t\t Name \t\t class \t\t section"<<endl;
        ifstream fe("data.txt");
        fe.read((char *)&a,sizeof(a));
        while(!fe.eof())
        {
        a.pnt();
        fe.read((char *)&a,sizeof(a));
        }
        fe.close();
        system("pause");
        break;
        }
    case 3:
        {
        system("cls");
        cout<<"Enter The ID Number to Modify the Details : "<<endl;
        cin>>v;
        ifstream fe("data.txt",ios::in);
        fe.read((char *)&a,sizeof(a));
        while(!fe.eof())
        {
            if(a.id==v)
            {
             a.pnt();
            }
        fe.read((char *)&a,sizeof(a));
        }
        fe.close();
        break;
        }
    /*case 4:
        system("cls");
        cout<<"SI.NO \t\t Name \t\t class \t\t section"<<endl;;
        for(int j=0;j<i;j++)
        {
        cout<<j+1;
        cout<<"\t\t"<<a[j].name;
        cout<<"\t\t"<<a[j].cls;
        cout<<"\t\t"<<a[j].sec;
        cout<<endl;
        }
        int vvv;
        cout<<"Enter The Number to delete the contact : ";
        cin>>vvv;
        for(int j=vvv-1;j<i;j++)
        {
            a[j]=a[j+1];
        }
        i--;
        cout<<"Done!!!!!"<<endl;
        system("pause");
        break;*/
    case 5:
        cout<<"\t\tTHANK YOU FOR USING GK TECH !!!!!";
        return 0;
        break;
    }

    }
}
