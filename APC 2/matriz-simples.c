int main(){
  int num[3][3] = {
{1, 0, 2},
{0, 1, 1},
{1, 3, 2},
};

for (int x = 0; x < 3; x++) {
  for (int y = 0; y < 3; y++) {
    printf("%d\t", num[x][y]);
  }
  printf("\n");
}
}
