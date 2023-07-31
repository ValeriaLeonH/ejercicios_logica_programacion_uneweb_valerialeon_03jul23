int main(){
     int arr5[5] = {-4, 5, 2, 1, 5};

  int total_x = 17;
  int min_value = -4;
  int x = -4;
  int y = 0;
  
  int longitud = sizeof(arr5) / sizeof(arr5[0]);
  
    for (int i = min_value; i < total_x; i++) {
    y = x;
    for (int j = 0; j < longitud; j++) {
      y += arr5[j];
      if (y < 1)
      {
        printf("%d", x + 1);
        return 0;
      }
    }
    x--;
  }

  return 0;
}