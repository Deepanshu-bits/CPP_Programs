#include<iostream>
#define endl '\n'
using namespace std;
#define int long long int
#define mod 1000000007
int t;
int n, m;
bool flag;
bool visited[101][101];
char arr[101][101];
char arr1[101][101];
int dfs1(int row, int col)
{
     if(row < 0 || row >= n || col < 0 || col >=m) 
    return 0;
     visited[row][col] = true;
     int A[]= {0,0, -1,1};
    int B[] ={-1,1,0,0};
    int ans = INT_MAX;

    for(int i = 0; i<4; i++)
    {
        int r = row + A[i];
        int c = col + B[i];
        if(r < 0 || c < 0 || r >= n || c >= m) return 0;
        if(visited[r][c] == true) continue;
        if(arr[r][c] == '1') continue;

        if(arr[r][c] == '0' || arr[r][c] == 'A')
        {
            int x = dfs1(r, c);
            ans = min(x, ans);
        }
         if(arr[r][c] == 'X')
        {

            
            arr[r][c] = '0';
            int x = dfs1(r, c);
           if(x != INT_MAX) x++;
            ans = min(x, ans);
            arr[r][c] = 'X';
        }
        
    }
    return ans;


}
bool dfs(int row, int col)
{
    if(row < 0 || row >= n || col < 0 || col >=m) 
    return false;
   visited[row][col] = true;
    int A[]= {0,0, -1,1};
    int B[] ={-1,1,0,0};

    
    for(int i = 0; i<4; i++)
    {
        int r = row + A[i];
        int c = col + B[i];
        if(r < 0 || c < 0 || r >= n || c >= m) continue;
        if(visited[r][c] == true) continue;
        if(arr[r][c] == '1') continue;

        if(arr[r][c] == '0')
        {
            bool x = dfs(r, c);
            if(x) return true;
        }
         if(arr[r][c] == 'X')
        {

            
            arr[r][c] = '0';
            int x = dfs(r, c);
            if(x) return true;
           
            arr[r][c] = 'X';
        }
        if(arr[r][c] == 'B')
        {
            return true;
        }

    }
    return false;

}
 int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
    t = 1;
  while(t--)
  {
  
        cin>>n>>m;
        
        int row, col;
        int brow, bcol;
        for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++) {
            cin>>arr[i][j];
            if(arr[i][j] == 'A')
            row = i, col = j;
            if(arr[i][j] == 'B')
            brow = i, bcol = j;
            arr1[i][j] = arr[i][j];
        }
        memset(visited, false, sizeof(visited));
        dfs(row, col);
        int count = 0;
        for(int i = 0; i<n; i++)
        {
            for(int j= 0; j< m; j++)
            {
                if(arr[i][j] != arr1[i][j]) count++;
            }
          
        }
        //cout<<count<<endl;
        memset(visited, false, sizeof(visited));
        int x  = dfs1(brow, bcol);
        cout<<count + x<<endl;



  }
}