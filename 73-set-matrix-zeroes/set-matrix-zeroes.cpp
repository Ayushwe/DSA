class Solution {
public:
//    void markRow(vector<vector<int>> &matrix, int n, int m, int i) {
//     // set all non-zero elements as -1 in the row i:
//     for (int j = 0; j < m; j++) {
//         if (matrix[i][j] != 0) {
//             matrix[i][j] = -1;
//         }
//     }
// }

// void markcol(vector<vector<int>> &matrix, int n, int m, int j) {
//     // set all non-zero elements as -1 in the row i:
//     for (int i = 0; i < n; i++) {
//         if (matrix[i][j] != 0) {
//             matrix[i][j] = -1;
//         }
//     }
// }
    // void setZeroes(vector<vector<int>>& matrix) {
    //     int m=matrix.size(), n=matrix[0].size();
    //     for(int i=0;i<m;i++){
    //         for(int j=0;j<n;j++){
    //             if(matrix[m][n]==0){
    //              markRow(matrix, n, m, i);
    //             markcol(matrix, n, m, j);
    //             }
    //         }
    //     }
         // Finally, mark all -1 as 0:
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {
    //         if (matrix[i][j] == -1) {
    //             matrix[i][j] = 0;
    //         }
    //     }
    // }
    // }

    // better approach
    // void setZeroes(vector<vector<int>>& matrix) {
    //     int m=matrix.size(), n=matrix[0].size();
    //     vector<int> rows(m,1),cols(n,1);
    //     for(int i=0;i<m;i++){
    //         for(int j=0;j<n;j++){
    //             if(matrix[m][n]==0){
    //             rows[i]=0;
	// 			cols[j]=0;
    //             }
    //         }
    //     }
    //      for(int i=0;i<m;i++){
    //         for(int j=0;j<n;j++){
    //             if(rows[i] || cols[j]){
    //             matrix[i][j]=0;
    //             }
    //         }
    //     }
    // }

    // optimal approach
    void setZeroes(vector<vector<int>>& matrix) {
    int m =matrix.size();
        int n = matrix[0].size();
        int x =1;
        int y =1;
        for(int j=0;j<n;j++)
        {
            if(matrix[0][j]==0)x=0;
            
        }
        
        for(int i=0;i<m;i++)
        {
            if(matrix[i][0]==0)y=0;
        }
       
            
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        
        
         for(int j=1;j<n;j++)
        {
           if(matrix[0][j]==0)
           {
               for(int i=1;i<m;i++)
                   matrix[i][j]=0;
           }
        }
        
        for(int i=1;i<m;i++)
        {
            if(matrix[i][0]==0)
            {
                for(int j=0;j<n;j++)
                    matrix[i][j]=0;
            }
        }
        
         if(x==0)
        {      
             for(int j=0;j<n;j++)
            matrix[0][j]=0;
        
        }
        if(y==0)
        {
            for(int i=0;i<m;i++)
            {
                matrix[i][0]=0;
            }
        }
    }
};