#include <iostream>

using namespace std;

int main()
{
   int n,num,rem,rev=0;
   cout<<"Enter the number"<<endl;
   cin>>num;
   n=num;
   do{
       rem=num%10;
       rev=(rev*10)+rem;
       num=num/10;
   }while(num !=0);
   cout<<"print the reverse number:"<<rev<<endl;
   if(n==rev)
   cout<<"number is palindrom :"<<n<<endl;
   else
   cout<<"number is not palindrom :"<<n<<endl;
    return 0;
}
