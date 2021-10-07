// 210. Course Schedule II
class Solution {
public:
    vector<int> findOrder(int N, vector<vector<int>>& arr) {
      vector<vector<int> > graph(N);
        vector<int> ans;
        for(vector<int> ar : arr){
            graph[ar[1]].push_back(ar[0]);
        }
        return kahnsAlgo(N, graph, ans);  
    }
    
     vector<int> kahnsAlgo(int N, vector<vector<int>> &graph, vector<int>& ans)
{
    vector<int> indegree(N, 0);
    for (int i = 0; i < N; i++)
        for (int e : graph[i])
            indegree[e]++;

    queue<int> que;

    for (int i = 0; i < N; i++)
        if (indegree[i] == 0)
            que.push(i);

    int level = 0;
    while (que.size() != 0)
    {
        int size = que.size();
        while (size-- > 0)
        {
            int rvtx = que.front();
            que.pop();
            ans.push_back(rvtx);
            for (int e : graph[rvtx])
            {
                if (--indegree[e] == 0)
                    que.push(e);
            }
        }

        level++;
    }

    if(ans.size() == N){
     //reverse(ans.begin(), ans.end());
    return ans;   
    }
         return {};
    
}

};
