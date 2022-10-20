stack<int> st;
        st.push(-1);
        
        vector<int> ans;
        
        for(int i=0; i<n; i++)
        {
            while(st.top() >= a[i])
                st.pop();
            
            ans.push_back(st.top());
            
            if(i != n && a[i] < a[i+1])
                st.push(a[i]);
        }
        
        return ans;
