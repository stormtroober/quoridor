#define N 17
struct player{
    int x;
    int y;
};
typedef struct player player;
int matrix_initialization(char **m);
void print_matrix(char **m,player *plr1,player *plr2);
void start(char **m,player *plr1,player *plr2);
int player1_move(char **m,player *plr1, player *plr2);
char border_boundaries(char **m,player *plr1, player *plr2,char move);
