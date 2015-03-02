/** \file labainf.cpp*/


#include <iostream>
#include <ctime>
using namespace std;


int first, last;
/// funkciya sortirovki
void quicksort(int *mas, int first, int last)
{
int mid, count;
int f=first, l=last;
mid=mas[(f+l) / 2]; /// vichislenie opornogo elementa
do
{
while (mas[f]<mid) f++;
while (mas[l]>mid) l--;
if (f<=l) ///perestonovka elementov
{
count=mas[f];
mas[f]=mas[l];
mas[l]=count;
f++;
l--;
}
} while (f<l);
if (first<l) quicksort(mas, first, l);
if (f<last) quicksort(mas, f, last);
}
//������� �������
void main()
{
setlocale(LC_ALL,"Rus");
int n;
cout<<"����� n:"<<'\n';
cin>>n;
int *A=new int[n];
cout<<"����� ������"<<'\n';
for (int i=0; i<n; i++)
{
	cin>>A[i];
}
srand(time(NULL));
cout<<"�������� ������: ";
for (int i=0; i<n; i++)
  {
   cout<<A[i]<<" ";
  }
first=0; last=n-1;
quicksort(A, first, last);
cout<<endl<<"��������������� ������: ";
for (int i=0; i<n; i++) cout<<A[i]<<" ";
delete []A;
system("pause>>void");
}