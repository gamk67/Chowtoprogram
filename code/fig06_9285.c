int i, total;

  i = total = 0;
  while (num[i]) {
    total *= 10;
    total += (num[i] - '0');
    i++;
  }

  printf("%d  \n", total);
