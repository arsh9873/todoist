// Example program
#include <iostream>
#include <string>
//find hcf and lcm
using namespace std;
int main()
{
int n1,n2,hcf,lcm;
cout<<"\neneter your 2 nums";
cin>>n1>>n2;
int b,s;
     if(n1>n2)
    {s=n2;
    b=n1;
    }
    else
    {b=n2;
    s=n1;
    }
if(n1==n2)
{
hcf=n1;    
lcm=n1;
}
else if( n1%n2 == 0 )
    {
    hcf=n2;
    lcm=n1;
    }
else if(n2%n1 == 0)
    {
    hcf=n1;
    lcm=n2;
    }
else
    {
    int found=0;
        for(int i=2;i<=b;i++)
            {
                if((b%i)==0 && (s%i)==0)
                    {
                        hcf=i;
                        found=1;
                    }
            }
        if(found==0)
        {hcf=1;
        }
            
    }
cout<<"hcf:"<<hcf;
if(hcf==1)
lcm=n1*n2;
else
    {
    for(int i=s;i<=(n1*n2);i=i+s)
        {
          if(i%b==0)
            {
                lcm=i;
                break;
            }
        }
    }
cout<<endl<<"lcm:"<<lcm;
}
