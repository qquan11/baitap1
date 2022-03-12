#include<iostream>
using namespace std;
void xuatten(char ch1[], intn)
{
	int i=0;
	while (ch1[i] != '' && ch1[i] != '\0')
	{
	cout << ch1[i];
	i++;
}
}
void xuatmssv(char ch1[], intn)
{
	int i=0;
	int vt=0;
	while (ch1[i] != '\0')
{
	i++;
	if (ch[i] == '')
	vt=i;
}
while (ch1[vt] != '\0')
{
	cout <<"ch1[vt]";
	vt++
}
int main()
{
	char ten[50];
	cout << "nhap ten";
	cin.getline(ten,50);
	cout << "mssv:";
	xuatten(ten, 50);
	cout<<"\n ten la:";
	xuatmssv(ten,50);
}
