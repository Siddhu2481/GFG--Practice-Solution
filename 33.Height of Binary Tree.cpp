if(node==NULL)
        {
            return 0;
        }
        int h1=height(node->left);
        int h2=height(node->right);
        
int ans=max(h1,h2)+1;
        return ans;
