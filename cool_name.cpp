#include<bits/stdc++.h>
using namespace std;

// int a=1,b=2,c=3,d=4,e=5,f=6,g=7,h=8,i=9,j=10,k=11,l=12,m=13,n=14,o=15,p=16,q=17,r=18,s=19,t=20,u=21,v=22,w=23,x=24,y=25,z=26;
int main(){
    int t;
    cin>>t;
    while(t--){
        char str[200],ch;
        int ii,power=0,kt;
        cin>>str;
        int len = strlen(str);
    for( ii=0; ii<len; ii++)
    {
        for(int jj=0;jj<(len-1);jj++)
        {
            if(str[jj]>str[jj+1])
            {
                ch = str[jj];
                str[jj] = str[jj+1];
                str[jj+1] = ch;
            }
        }
    }
        for(ii=0;ii<len;ii++){
            if(str[ii]=='a')
             kt=(ii+1)*1;
             if(str[ii]=='b')
             kt=(ii+1)*2;
             if(str[ii]=='c')
             kt=(ii+1)*3;
             if(str[ii]=='d')
             kt=(ii+1)*4;
             if(str[ii]=='e')
             kt=(ii+1)*5;
             if(str[ii]=='f')
             kt=(ii+1)*6;
             if(str[ii]=='g')
             kt=(ii+1)*7;
             if(str[ii]=='h')
             kt=(ii+1)*8;
             if(str[ii]=='i')
             kt=(ii+1)*9;
             if(str[ii]=='j')
             kt=(ii+1)*10;
             if(str[ii]=='k')
             kt=(ii+1)*11;
             if(str[ii]=='l')
             kt=(ii+1)*12;
             if(str[ii]=='m')
             kt=(ii+1)*13;
             if(str[ii]=='n')
             kt=(ii+1)*14;
             if(str[ii]=='o')
             kt=(ii+1)*15;
             if(str[ii]=='p')
             kt=(ii+1)*16;
             if(str[ii]=='q')
             kt=(ii+1)*17;
             if(str[ii]=='r')
             kt=(ii+1)*18;
             if(str[ii]=='s')
             kt=(ii+1)*19;
             if(str[ii]=='t')
             kt=(ii+1)*20;
             if(str[ii]=='u')
             kt=(ii+1)*21;
             if(str[ii]=='v')
             kt=(ii+1)*22;
             if(str[ii]=='w')
             kt=(ii+1)*23;
             if(str[ii]=='x')
             kt=(ii+1)*24;
             if(str[ii]=='y')
             kt=(ii+1)*25;
             if(str[ii]=='z')
             kt=(ii+1)*26;
         power=power+kt;
        }
        cout<<power<<endl;
    }
}