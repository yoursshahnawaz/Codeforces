//207. Course Schedule
class Solution {
public:
    bool canFinish(int N, vector<vector<int>>& arr) {
        vector<vector<int> > graph(N);
        for(vector<int> ar : arr){
            graph[ar[0]].push_back(ar[1]);
        }
        return kahnsAlgo(N, graph);
        
    }
    
    bool kahnsAlgo(int N, vector<vector<int>> &graph)
{
    vector<int> indegree(N, 0);
    for (int i = 0; i < N; i++)
        for (int e : graph[i])
            indegree[e]++;

    queue<int> que;
    int count = 0;

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

            count++;
            for (int e : graph[rvtx])
            {
                if (--indegree[e] == 0)
                    que.push(e);
            }
        }

        level++;
    }

    return count == N;
}

};
