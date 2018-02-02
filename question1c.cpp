# abbas142lab4


#include<iostrem>
using namespace std;
class StackArr
{
             int stk[20];
             int top;
      public:
             StackArr()
              {
                top=-1;
              }
             void push(int x)
              {
                 if(top >  19)
                       {
                           cout <<"\n \nSTACK OVERFLOW !!!";
                           return;
                       }
                 stk[++top]=x;
                 cout <<"\nInserted " <<x<<endl;
               }
             void pop()
               {
                  if(top <0)
                   {
                         cout <<"\n \nSTACK UNDERFLOW !!!";
                         return;
                    }
                    cout <<"\nDeleted" <<stk[top--]<<endl;
                }
             void display()
               {
                   cout<<"\n \n";
                   if(top<0)
                    {
                            cout <<" EMPTY STACK !!!!";
                            return;
                    }
                    for(int i=top;i>=0;i--)
                    cout <<stk[i] <<" -> ";
                    cout<<"NULL";
                }
};
int main()
{
  StackArr SAR;
  SAR.push(12);
  SAR.push(23);
  SAR.push(34);
  SAR.display();
  SAR.pop();
  SAR.display();
  return 0;
