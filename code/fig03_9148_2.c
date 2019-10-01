   printf("Entering while loop\n");
   while ( grade != -1 ) {
      printf("start while, grade=%d\n", grade);
      total = total + grade;
      counter = counter + 1;
      printf("total=%d, count=%d\n", total, count);
      /* get next grade from user */
      printf( "Enter grade, -1 to end: " );
      scanf("%d", &grade);
   } /* end while */
   printf("Exit while loop\n");
