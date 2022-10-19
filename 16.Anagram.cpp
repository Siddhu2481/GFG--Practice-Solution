if(a.size()!=b.size()){

            return 0;

        }

        unordered_map<char,int>m;

        for(int i=0;i<a.size();i++){

            m[a[i]]++;

            m[b[i]]--;

        }

        for(auto it:m){

            if(it.second!=0){

                return 0;

            }

        }

     return 1;
