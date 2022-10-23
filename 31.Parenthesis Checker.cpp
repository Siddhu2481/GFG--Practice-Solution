stack<char> st;
         for(int i=0;i<x.length();i++)
         {
             char top=st.empty() ? '0':st.top();
             if(top=='{' && x[i]=='}'){
                 st.pop();
             }
             else if(top=='(' && x[i]==')')
             {
                 st.pop();
             }
             else if(top=='[' && x[i]==']'){
                 st.pop();
             }
             else{
                 st.push(x[i]);
             }
         }
         return st.empty();
       
