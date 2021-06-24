#include <iostream> 
#include<map>
#include<vector>

using namespace std;
class node
{public:
    int d;
    node*left;
    node*right;
    node(int data)
    {
        d=data;
        left=right=NULL;
    }
};
void verticalprint(int da,node*root,map<int,vector<int>>&m)
{
    if(root==NULL)
    return ;
    m[da].push_back(root->d);
    verticalprint(da-1,root->left,m);
     verticalprint(da+1,root->right,m);
     return;

}
int main()
{
    node*root=new node(1);
    root->left= new node(2);
    root->right= new node(3);
   root->left->left= new node(4);
   root->left->right= new node(5); 
    root->right->left= new node(6);
     root->right->right= new node(7);
      root->right->right->right= new node(8);

      map<int,vector<int>> m;
      int d;
      verticalprint(d,root,m);
      for(auto it:m)
      {
          cout<<it.first<<" =";
          for(auto p:it.second)
          {
              cout<<p<<endl;
          }
      }

    return 0;
}
