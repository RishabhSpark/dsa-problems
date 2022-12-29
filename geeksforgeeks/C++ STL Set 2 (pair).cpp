void add_pair(vector<pair<string,pair<int,int> > > &A, string str, int x, int y)
{
     // Your code here
     A.push_back({str, {x,y}});
}

/* Returns the size of the vector A */
int get_size(vector<pair<string,pair<int,int> > > &A)
{
     // Your code here
     return A.size();
}

/* Prints space separated values of vector A */
void print_values(vector<pair<string,pair<int,int> > > &A)
{
     // Your code here
     for(auto x:A){
         cout<<x.first<<" "<<x.second.first<<" "<<x.second.second<<" ";
     }
}

/* Sorts the vector A based on value x and y*/
void sort_pair(vector<pair<string,pair<int,int> > > &A)
{
     // Your code here
     sort(
         A.begin(),
         A.end(), 
         [](pair<string,pair<int,int>> &p1, pair<string,pair<int,int>> &p2){
             return p1.second < p2.second;
         }
         );
}