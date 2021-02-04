#include<bits/stdc++.h>
#include<conio.h>
#include "sdata.h"
using namespace std;
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
        a.ipt();
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
        cout<<"Roll.No \t\t Name \t\t class \t\t section"<<endl;
        ifstream fe("data.txt");
        fe.read((char *)&a,sizeof(a));
        if(!fe)
        {
            cout<<"No Data Available"<<endl;
        }
        else
        {
         while(!fe.eof())
        {
        a.pnt();
        fe.read((char *)&a,sizeof(a));
        }
        fe.close();
        }
        system("pause");
        break;
        }
    case 3:
        {
        system("cls");
        if(!fe)
        {
            cout<<"No Data Available"<<endl;
        }
        else
        {
         cout<<"Enter The Roll.no Number to Modify the Details : ";
        cin>>v;
        ofstream ofs;
        ifstream fe("data.txt");
        fe.read((char *)&a,sizeof(a));
        ofs.open("temp.txt", ios::app);
        while(!fe.eof())
            {
            if(!(a.id==v))
            {

                ofs.write((char*)&a,sizeof(a));
            }
            else
            {
                a.ipt();
                ofs.write((char *)&a,sizeof(a));

            }
            fe.read((char *)&a,sizeof(a));
            }
            ofs.close();
            fe.close();
            remove("data.txt");
            rename("temp.txt", "data.txt");
        cout<<"!!!!!!!Done!!!!!"<<endl;
        }
        system("pause");
        break;
        }
    case 4:
        {
        system("cls");
         if(!fe)
        {
            cout<<"No Data Available"<<endl;
        }
        else
        {
         cout<<"Enter The Roll.no Number to Delete the Details : ";
        cin>>v;
        ofstream ofs;
        ifstream fe("data.txt");
        fe.read((char *)&a,sizeof(a));
        ofs.open("temp.txt", ios::app);
        while(!fe.eof())
            {
            if(!(a.id==v))
            {

                ofs.write((char*)&a,sizeof(a));
            }
            else
            {
                a.pnt();

            }
            fe.read((char *)&a,sizeof(a));
            }
            ofs.close();
            fe.close();
            remove("data.txt");
            rename("temp.txt", "data.txt");
        cout<<"!!!!!!!Done!!!!!"<<endl;
        }
        system("pause");
        break;
        }
    case 5:
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"\t\tTHANK YOU FOR CHOOSING US !!!!!";
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        return 0;
        break;
    }

    }
}
