class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
        {
            return true;
        }
       else if(p==NULL && q!=NULL || q==NULL && p!=NULL)
        {
         return false;   
        }

        
        bool l = isSameTree(p->left,q->left);
        bool r = isSameTree(p->right,q->right);
        bool value = p->val == q->val;
        if(l&&r&&value)
        {
            return true;
        }
        else
        {
            return false;
        }
       
            return false;
    
            
    }
};
for more simplification

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
        {
            return true;
        }
       else if(p==NULL && q!=NULL || q==NULL && p!=NULL)
        {
         return false;   
        }
// for more simplification
        
        else if(p->val == q->val)
        {
           if(isSameTree(p->left,q->left))
           {
               return isSameTree(p->right,q->right);
           }
            
        }
       
    return false;
    
            
    }
};