class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size(); 

        if(n%2 == 0) return true ; 

        vector<vector<int>> res(n, vector<int>(n)); 

        for(int i = 0; i < n; i++)
        {
            res[i][i] = nums[i]; 
        }

        for(int s = 1; s < n; s++)
        {
            for(int i = 0; i + s < n; i++)
            {
                int j = i + s; 
                res[i][j] = max(nums[i] - res[i+1][j], nums[j] - res[i][j-1]); 

            }
        }
        return res[0][n-1] >= 0; 
    }
};


//On vous donne un tableau d'entiers nums. Deux joueurs jouent à un jeu avec ce tableau : le joueur 1 et le joueur 2.
//Le joueur 1 et le joueur 2 jouent chacun leur tour, le joueur 1 commençant le premier. Les deux joueurs commencent le jeu avec un score de 0. À chaque tour, le joueur prend l'un des nombres de chaque extrémité du tableau (c'est-à-dire nums[0] ou nums[nums.length - 1]), ce qui réduit la taille du tableau de 1. Le joueur ajoute le nombre choisi à son score. Le jeu se termine lorsqu'il n'y a plus d'éléments dans le tableau.
//Retourne true si le joueur 1 peut gagner la partie. Si les scores des deux joueurs sont égaux, le joueur 1 est toujours le gagnant et vous devez également renvoyer true. Vous pouvez supposer que les deux joueurs jouent de manière optimale.

