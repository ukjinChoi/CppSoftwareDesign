# 지침 15: 타입 또는 연산 추가를 위한 디자인

## 절차적 해책
### ex1 
기본 Shape class와 Circle, Square class와 각 class의 Draw classes.
### ex2
기본 Shape class에서 Triangle class 추가.
Triangle class가 추가되므로써, Triangle class, Draw 관련 class가 추가되는 것 외에
기존의 DrawAllShapes.cpp, DrawAllShapes.h, Shape.h 파일이 각각 변경되어야만 한다.


