                          /*Showing all elements in an array*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
                        /*Finding the largest number from an array*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m=a[0];
    int pos=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
            pos=i;
        }
    }
    cout<<"Largest number is:  "<<m<<endl;
    cout<<"The position is:   "<<pos+1<<endl;
}
                   /*calculation of the roots of a quadratic equation*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,x,x1,x2;
    cin>>a>>b>>c;
    float d=(b*b)-(4*a*c);
    if(d<0)
    {
        cout<<"The solution will be a complex number"<<endl;
    }
    else if(d==0)
    {
        x=(-b)/(2*a);
        cout<<"root 1 will be:  "<<x<<endl;
        cout<<"root 2 will be:  "<<x<<endl;
    }
    else
    {
        x1=((-b)+sqrt(d))/(2*a);
        x2=((-b)-sqrt(d))/(2*a);
        cout<<"root 1 will be:  "<<x1<<endl;
        cout<<"root 2 will be:  "<<x2<<endl;
    }
}
                 /*Insertion of an element to an array in a specefic position*/
#include <bits/stdc++.h>
using namespace std;
void insertAtPosition(int arr[], int& n, int element, int position) 
{
    if (position < 0 || position > n) {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = n; i > position; --i) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    n++;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int e,p;
    cout<<"Enter the element:  ";
    cin>>e;
    cout<<"Enter the position:  ";
    cin>>p;
    insertAtPosition(a, n, e, p);
    cout << "After insertion: ";
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
    return 0;
}
               /*Deletion of an element from a specefic position in an array*/
#include <bits/stdc++.h>
using namespace std;
void deleteElement(int arr[], int &n, int pos)
{
    if (pos < 0 || pos >= n) {
        cout << "Position is invalid." << endl;
        return;
    }

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

int main() {
    int n, pos;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout << "Position of the element: ";
    cin >> pos;
    int p=pos-1;
    deleteElement(a, n, p);
    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
                                /*Linear search algorithm*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x,flag,pos=0;
    cout<<"Enter the element to find: ";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            flag=1;
            pos=i;
            break;
        }
        else
        {
            flag=2;
        }
    }
    if(flag==1)
    {
        cout<<"The element "<<x<<" is found"<<" at position "<<pos+1<<endl;
    }
    else
    {
        cout<<"The element "<<x<<" is not found"<<endl;
    }
}