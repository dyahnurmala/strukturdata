#include<iostream>
using namespace std;
template<typename type>

class Tree{
    
    struct Node{
        type data;
        Node* left;
        Node* right;
        
        Node(type d){
            this->data = d;
            this->left = this->right = nullptr;
        }
    };
public:
    Node* Root=nullptr;
    
    Tree(){
        Node* m =new Node('M');
        Node* e =new Node('E');
        Node* l =new Node('L');
        Node* a =new Node('A');
        Node* i =new Node('I');
        Node* b =new Node('B');
        Node* o =new Node('O');
        Node* u =new Node('U');
        Node* d =new Node('D');
        m->left=e; m->right=l;
        e->left=a; e->right=i;
        l->left=b; l->right=o;
        a->right=u;
        o->left=d;
        
        Root=m;
    }
    
    void preorder(Node* ptr){
        if(ptr!=nullptr){
            cout<<" "<<ptr->data;
            preorder(ptr->left);
            preorder(ptr->right);
        }
    }
    
    void inorder(Node* ptr){
        if(ptr!=nullptr){
            inorder(ptr->left);
            cout<<" "<<ptr->data;
            inorder(ptr->right);
        }
    }
    
    void postorder(Node* ptr){
        if(ptr!=nullptr){
            postorder(ptr->left);
            postorder(ptr->right);
            cout<<" "<<ptr->data;
        }
    }
};
int main(){
    Tree<char> obj;
    if(obj.Root==nullptr)
    cout<<"Tree is empty!!";
    else{
    cout<<"\nPreorder Traversal\t:\t";
    obj.preorder(obj.Root);
    cout<<"\ninorder Traversal\t:\t";
    obj.inorder(obj.Root);
    cout<<"\nPostorder Traversal\t:\t";
    obj.postorder(obj.Root);
    }
    return 0;
}