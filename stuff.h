typedef struct{
  int weight;
  int value;
  char name[120];
  int item;
}knapsack;

void storeFile(char *, knapsack *);
void init(knapsack *);
