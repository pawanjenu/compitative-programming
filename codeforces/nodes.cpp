#include <bits/stdc++.h> 
using namespace std; 
  
const int N = 6; 
  
// variables used to store data globally 
int count1[N]; 
int count2[N];
  
// adjacency list representation of tree 
vector<int> adj[N]; 
  
// function to calculate no. of nodes in subtree 
void numberOfNodes(int s, int e) 
{ 
    vector<int>::iterator u; 
    count1[s] = 1; 
  cout <<"main-"<<s<<" "<<e<<" 1st one"<<endl;
    for (auto u:adj[s]) { 
          //cout <<"its heeeeeeee"<<endl;
        // condition to omit reverse path 
        // path from children to parent 
        if (u == e) {
            cout <<"ended for-"<<u<<" "<<s<<endl;
            continue; 
        }
        // recursive call for DFS 
        numberOfNodes(u, s); 
          
        // update count[] value of parent using  
        // its children
        //if(count1[u]%2)
        cout <<"s-"<<s<<" u-"<<u<<endl;
            cout <<"before "<<s<<" "<<u<<" "<<count1[s]<<" "<<count1[u]<<endl;
            
            if(1+count1[u]%2)
                count1[s] ++; 
            else
                count1[s]= count1[u];
            
            cout <<"after "<<s<<" "<<u<<" "<<count1[s]<<" "<<count1[u]<<endl;
            
            // if(count1[s]%2)
            //     count2[s]+=count2[u]+1;

            // else
            //     count2[s]+=count2[u];
            // if(count1[u]%2)
            //     count2[u]++;
            // if(count2[s]%2)
            //     count2[s] += count2[u]+1;
            // else
            //     count2[s] += count2[u];
            // cout<<"count of-"<<s<<" "<<count2[s]<<" "<<"count of -"<<u<<" "<<count2[u]<<endl<<endl;
    } 
} 

void numberOfNodessss(int s, int e) 
{ 
    vector<int>::iterator u; 
    // count1[s] = 1; 
  cout <<"main-"<<s<<" "<<e<<" 2nd one"<<endl;
    for (auto u:adj[s]) { 
         
        if (u == e) {
            cout <<"ended for-"<<u<<" "<<s<<endl;
            continue; 
        }
        // recursive call for DFS 
        numberOfNodessss(u, s); 
          
        // update count[] value of parent using  
        // its children
        //if(count1[u]%2)
            cout <<u<<" "<<count1[u];
            // cout <<"before "<<s<<" "<<u<<" "<<count1[s]<<" "<<count1[u]<<endl;
            if(count1[u]%2)
                count2[s]++;
            cout<<" s-"<<s<<" "<<count2[s]<<endl;

            // count1[s] += count1[u]; 
            // cout <<"after "<<s<<" "<<u<<" "<<count1[s]<<" "<<count1[u]<<endl;
            
            // if(count1[s]%2)
            //     count2[s]+=count2[u]+1;

            // else
            //     count2[s]+=count2[u];
            // if(count1[u]%2)
            //     count2[u]++;
            // if(count2[s]%2)
            //     count2[s] += count2[u]+1;
            // else
            //     count2[s] += count2[u];
            // cout<<"count of-"<<s<<" "<<count2[s]<<" "<<"count of -"<<u<<" "<<count2[u]<<endl<<endl;
    } 
} 

// function to add edges in graph 
void addEdge(int a, int b) 
{ 
    adj[a].push_back(b); 
    adj[b].push_back(a); 
} 
  
// function to print result 
void printNumberOfNodes() 
{ 
    for (int i = 1; i < N; i++) { 
        cout << "\nNodes in subtree of " << i; 
        cout << ": " << count1[i]; 
    } 
} 
void printNumberOfNodesss() 
{ 
    for (int i = 1; i < N; i++) { 
        cout << "\nNodes in subtree of " << i; 
        cout << ": " << count2[i]; 
    } 
} 
  
// driver function 
int main() 
{ 
    // insertion of nodes in graph 
    addEdge(1, 2); 
    addEdge(1, 3); 

    addEdge(2, 4); 
    addEdge(3, 5); 
    // addEdge(5, 6);
    // addEdge(5, 7);
    // addEdge(4, 8);   

    // call to perform dfs calculation 
    // making 1  as root of tree 
    numberOfNodes(1, 0); 
    // cout<<"jytgbfbfvb"<<endl;
    // numberOfNodessss(1,0);      
    // print result 
    printNumberOfNodes(); 
    printNumberOfNodesss();
    return 0; 
}