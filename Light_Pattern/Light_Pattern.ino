void setup() {



  for (int i = 2; i <= 9; i++) {
    for (int m = 2; m <= 9; m++) {
      for (int l = 2; l <= 9; l++) {
        pinMode(i, OUTPUT);
        pinMode(l, OUTPUT);
        pinMode(m, OUTPUT);
      }

    }
  }
}


void loop() {




  for (int n = 20; n <= 40; n = n + 40) {



    for (int m = 2; m <= 9; m++)
    {
      digitalWrite(m, HIGH);
      delay(n);
      digitalWrite(m, LOW);
      delay(n);
    }
    for (int m = 2; m <= 9; m++)
    {
      digitalWrite(m, LOW);
      delay(n);
      digitalWrite(m, HIGH);
      delay(n);
    }

    delay(n + 100);
    for (int m = 9; m >= 2; m--)
    {
      digitalWrite(m, HIGH);
      delay(n);
      digitalWrite(m, LOW);
      delay(n);
    }
    delay(n + 100);
    for (int m = 9; m >= 2; m--)
    {
      digitalWrite(m, LOW);
      delay(n);
      digitalWrite(m, HIGH);
      delay(n);
    }
    for (int m = 5; m >= 2; m--)
    {
      digitalWrite(m, HIGH);
      delay(n);
      digitalWrite(m, LOW);
      delay(n);
    }

    for (int m = 6; m <= 9; m++)
    {
      digitalWrite(m, HIGH);
      delay(n);
      digitalWrite(m, LOW);
      delay(n);
    }
    for (int m = 2; m <= 9; m = m + 2)
    {
      digitalWrite(m, LOW);
      delay(n);
      digitalWrite(m, HIGH);
      delay(n);
    }
    for (int m = 3; m <= 9; m = m + 2)
    {
      digitalWrite(m, LOW);
      delay(n);
      digitalWrite(m, HIGH);
      delay(n);
    }
    for (int m = 9; m >= 3; m = m - 2)
    {
      digitalWrite(m, LOW);
      delay(  n);
      digitalWrite(m, HIGH);
      delay(n);
    }
    for (int m = 8; m >= 3; m = m - 2)
    {
      digitalWrite(m, LOW);
      delay(n);
      digitalWrite(m, HIGH);
      delay(n);
    }
    for (int m = 2; m <= 9; m++)
    {
      digitalWrite(m, HIGH);
      digitalWrite(m + 1, HIGH);
      delay(n);
      digitalWrite(m, LOW);
      digitalWrite(m + 1, LOW);
      delay(n);
    }
    for (int m = 9; m >= 2; m--)
    {
      digitalWrite(m, LOW);
      digitalWrite(m - 1, LOW);
      delay(n);
      digitalWrite(m, HIGH);
      digitalWrite(m - 1, HIGH);
      delay(n);
    }
    for (int j = 4; j > 0; j = j - 1) {

      digitalWrite(5 + j, LOW);
      digitalWrite(6 - j, LOW);
      delay(n);
      digitalWrite(5 + j, HIGH);
      digitalWrite(6 - j, HIGH);
      delay(n);
    }
    for (int j = 4; j > 0; j = j - 1) {


      digitalWrite(5 + j, HIGH);
      digitalWrite(6 - j, HIGH);
      delay(n);
      digitalWrite(5 + j, LOW);
      digitalWrite(6 - j, LOW);
      delay(n);
    }
    for (int j = 1; j < 5; j = j + 1) {


      digitalWrite(5 + j, LOW);
      digitalWrite(6 - j, LOW);
      delay(n);
      digitalWrite(5 + j, HIGH);
      digitalWrite(6 - j, HIGH);
      delay(n);
    }
    for (int j = 4; j > 0; j = j - 1) {
      digitalWrite(5 + j, LOW);
      digitalWrite(6 - j, LOW);
      delay(n);
    }



    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);



      
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);

    delay(400);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);




    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(400);

    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);


    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);

    delay(400);

    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);



      
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);

    delay(400);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);




    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(400);

    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);


    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);

    delay(400);

    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);




      
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);

    delay(400);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);




    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(400);

    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);


    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);

    delay(400);

    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);






      
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);

    delay(400);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);




    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(400);

    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);


    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);

    delay(400);

    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);




      
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);

    delay(400);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);




    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(400);

    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);


    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);

    delay(400);

    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);







      
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);

    delay(400);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);




    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    delay(400);

    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);


    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);

    delay(400);

    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);









































    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    delay(400);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);

    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    delay(400);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);

    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    delay(400);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);

    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    delay(400);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    delay(400);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);

    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    delay(400);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);

    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    delay(200);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    delay(200);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    delay(200);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    delay(200);






  }

}
