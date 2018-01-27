#include<iostream>
using namespace std;
int main()
{   int z;
    cin>>z;
    int n[1000],k[1000],s[1000];
  for(int i=0;i<z;i++)
  {
      cin>>n[i]>>k[i]>>s[i];
  }

for(int i=0;i<z;i++)
    {
    int t=1;
    int flag=1;
        if(((6*(n[i]-k[i]))>=k[i]))
        {
            while(flag==1)
            {
                if((( (t)  * (n[i]))  - ((s[i])*(k[i]))<0))
                    t++;
                    else
                    {
                        flag=-1;
                        cout<<t<<endl;
                    }
            }
        }
    else
    {
        cout<<-1<<endl;
    }
    }

return 0;
}
