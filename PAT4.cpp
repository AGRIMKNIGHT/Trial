#include <iostream>
using namespace std;
class team
{
public:
string teamname;
int score[5];
void set(int);
void sort(int);
void get(int);
friend class MyMethod;
};
void team::set(int n)
{
cout<<"Enter Team name:";
cin>>teamname;
for (int i=0;i<n;i++)
{
cout<<"Enter score of player"<<(i+1)<<":";
cin>>score[i];
}
}
void team::sort(int n)
{
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++) 
{ 
if(score[i]>score[j])
{
int temp = score[i];
score[i] = score[j];
score[j] = temp;
}
}
}
}
void team::get(int n)
{
for (int i=0;i<n;i++)
cout<<score[i]<<endl;
}
class MyMethod
{
public:
void max(team,int);
void min(team);
void average(team,int);
};
void MyMethod::max(team t,int n)
{
cout<<"Hi"<<endl;
for (int i=0;i<n;i++)
cout<<t.score[i]<<endl;
cout<<"Maximum: "<<t.score[n-1]<<endl;
}
void MyMethod::min(team t)
{
cout<<"Minimum: "<<t.score[0]<<endl;
}
void MyMethod::average(team t,int n)
{
int sum=0;
for (int i=0;i<n;i++)
{
sum+=t.score[i];
}
cout<<t.teamname<<" Average score: "<<(float(sum)/(n))<<endl;
}
int main()
{
int n;
cout<<"Enter n value:";
cin>>n;
team o;
o.set(n);
o.get(n);
o.sort(n);
o.get(n);
MyMethod h;
h.max(o,n);
h.min(o);
h.average(o,n);
return 0;
}