int i=0;
          while(i<n)
          {
              if(i+k<n)
              {
                  reverse(arr.begin()+i,arr.begin()+i+k);
              }
              else{
                  reverse(arr.begin()+i,arr.end());
              }
              i+=k;
          }
          
