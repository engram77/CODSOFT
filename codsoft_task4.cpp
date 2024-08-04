#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task
{
    string details;
    bool done;
    Task(string deeds) : details(deeds), done(false){}
};
void add(vector<Task>& Tasks){
    string deeds;
    cout<<"Add your tasks here: "<<endl;
    getline(cin, deeds);
    Tasks.push_back(Task(deeds));
}
void view(const vector<Task>& Tasks){
    cout<<"\n your to-do list is: "<<endl;
    for(int i = 0; i<Tasks.size(); ++i){
        cout<<i+1<<", "<<(Tasks[i].done ? "[o]": "[] ")<<Tasks[i].details<<"\n";
    }
}

void completed(vector<Task>& Tasks){
    int n;
    cout<<"Enter the task number that are completed: ";
    cin>>n;
    cin.ignore();
    if (n>0 && n <= Tasks.size()){
        Tasks[n - 1].done = true;
    }else{
        cout<<"Invalid task number\n";
    }
}
void remove(vector<Task> & Tasks){
    int n;
    cout<<"Enter the task number to remove: ";
    cin>>n;
    cin.ignore();
    if(n>0 && n<= Tasks.size()){
        Tasks.erase(Tasks.begin()+ n-1);
    }else{
        cout<<"Invalid task number\n";
    }
    
}
int main(){
    vector<Task> Tasks;
    int a;
    while(true){
        cout<<"\n1. Add task\n";
        cout<<"\n2. view task\n";
        cout<<"\n3. Mark as done\n";
        cout<<"\n4. delete task\n";
        cout<<"\n5. exit\n";
        cout<<"Enter your choice: ";
        cout<<"\nPlease enter between 1 to 5.\n";
        cin>>a;
        cin.ignore();

        switch (a)
        {
        case 1:
            add(Tasks);
            break;
        case 2:
            view(Tasks);
            break;
        case 3:
            completed(Tasks);
            break;
        case 4:
            remove(Tasks);
            break;
        case 5:
            cout<<"Exit\n";
            break;
        
        default:
            cout<<"Invalid choice."<<endl;
            cout<<"Please enter between 1 to 5."<<endl;
            break;
        }
        if (a==5){
            break;
        }
    }
    
    return 0;
}