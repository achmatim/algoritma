#include <iostream.h>
#include <conio.h>

void tampilkan_larik(int data[], int n)
{
 int i;
 for (i=1;i<=n;i++)
 cout<<data[i]<<" ";
 cout<<"\n";
}

int partisi (int data[], int awal, int akhir)
{
 int x,i,j,simpan;

 //x=data[awal];
 i=awal;
 j=akhir;

   while(1)
   {
   while(data[i]<data[awal])
   i=i+1;

    while(data[j]>data[awal])
     j=j-1;

    if (i<j)
    {
    //tukarkan data
   simpan=data[i];
    data[i]=data[j];
   data[j]=simpan;
    }
   else
      return j;
   }
}

void quick_sort(int data[], int awal, int akhir)
{
 int q;
 if(awal<akhir)
 {
  q=partisi(data,awal,akhir);
  quick_sort(data,awal,q);
  quick_sort(data, q+1,akhir);
 }
}

int main()
{
 int i,j,n,data[100];

   cout<<"masukkan banyak data= ";cin>>n;
   for(i=1;i<=n;i++)
   {
    cout<<"data ke-"<<i<<" = ";cin>>data[i];
   }

 cout<<"Data sebelum diurut: "<<endl;
 for(j=1;j<=n;j++)
 {
  cout<<data[j]<<" ";
 }
 quick_sort(data,1,n);

 //hasil pengurutan
 cout<<endl;
 cout<<endl;
 cout<<"hasil pengurutan:\n";
 tampilkan_larik(data,n);
 getch();
}

