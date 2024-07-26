# 지침 15: 타입 또는 연산 추가를 위한 디자인

## 절차적 해결책
### ex1 
기본 Shape class와 Circle, Square class와 각 class의 Draw classes.
### ex2
기본 Shape class에서 Triangle class 추가.
Triangle class가 추가되므로써, Triangle class, Draw 관련 class가 추가되는 것 외에
기존의 DrawAllShapes.cpp, DrawAllShapes.h, Shape.h 파일이 각각 변경되어야만 한다.

## 객체 지향 해결책
절차적 해결책과 달리 draw를 class 내부로 삽입한다.
[절차적 해결책](#절차적-해결책)에서 생성된 Draw\[Square/Circle/Triangle] class 관련 파일이 삭제되었다.
DrawAllShapes 함수가 훨신 간단해졌으며 단순히 class를 추가함으로써 draw 기능을 가진 도형을 쉽게 추가할 수 있게 되었다.
