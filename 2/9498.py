#시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B, 70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.

Sc=int(input())

if Sc >=90 and Sc<=100:
  print("A")
elif Sc >=80 and Sc<90:
  print("B")
elif Sc >=70 and Sc<80:
  print("C")
elif Sc >=60 and Sc<70:
  print("D")
else:
  print("F")
  
