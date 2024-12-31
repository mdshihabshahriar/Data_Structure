#include<bits/stdc++.h>
using namespace std;
class Student
{
    public :
        string name;
        int marks;
        Student(string name,int marks)
        {
            this->name = name;
            this->marks = marks;
        }
};
class cmp
{
    public :
        bool operator()(Student a, Student b)
        {
            if(a.name > b.name) return true;
            else if(a.name < b.name) return false;
            else
            {
                if(a.marks < b.marks) return true;
                else return false;
            }
        }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Student,vector<Student>,cmp> pq;
    for (int i = 0; i < n; i++)
    {
        string name;
        int marks;
        cin >> name >>  marks;
        Student obj(name,marks);
        pq.push(obj);
    }
    while(!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().marks << endl;
        pq.pop();
    }
    return 0;
}
