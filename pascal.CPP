#include<conio.h>
#include<iostream.h>

//factorial calculating function
long int fact(int n){
 long int factorial=1;
 for(int i=1;i<=n;i++)
  factorial*=i;
 return factorial;
}

//function to calculate digits in the no.
int calcdig(long int n){
 int temp=n,count=0;
 do{
  temp=temp/10;
  count++;
 }while(temp);
 return count;
}

//to give proper indentation
void indentation(int n){
 for(int j=0;j<n;j++)
  cout<<" ";
}

void main(){
 clrscr();
 int pascdig;
 long int pascval;
 int n;
 cout<<"Enter the value for number of rows you want in Pascal's Triangle:"<<endl;
 cin>>n;
 int digits=calcdig(fact(n)/(fact(n/2)*fact(n/2)));//maximum digits in the value which is shown in the pascal triangle for proper indentation
 clrscr();
 for(int i=0;i<=n;i++){

  indentation(digits*(n-i));

  for(int j=0;j<=i;j++){

   pascval=fact(i)/(fact(i-j)*fact(j));//value of pascal's triangle
   pascdig=calcdig(pascval);//digits in the value which is shown in the pascal triangle for proper indentation

   indentation(digits);

   cout<<pascval;

   indentation(digits-pascdig);

  }
  for(int k=0;k<digits&&k<2;k++)
   cout<<endl;
 }

 getch();

}
