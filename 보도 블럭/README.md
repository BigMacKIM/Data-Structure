Data Structure                                             Lab02 보도블록                                               DHLEE

보도블록

` `보행자를 위한 보행도로에는 대부분 격자모양의 벽돌을 설치한다. 때론 보도의 중간 중간에 다른![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.001.png)

물체들이 있어서 벽돌을 설치하지 말아야할 경우도 생긴다. 다음 그림은 일상에서 볼 수 있는 벽돌이 물체를 비켜 설치된 모습이다.

![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.002.png)

그림 1. 보도블록 설치 모습

이런 실제적인 모습을 그림2 처럼 메쉬형태로 나타내면 점선으로 된 물체를 피해 벽돌이 깔려진 것을

나타낸 것이다.

![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.003.png)

그림2. 보도블록이 물체를 제외한 영역에 깔린 모양

![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.004.png)번째 수평방향으로 벽돌을 [과 ](https://www.codecogs.com/eqnedit.php?latex=h%5E%7BL%7D_%7Bi%7D#0)[이라](https://www.codecogs.com/eqnedit.php?latex=h%5E%7BR%7D_%7Bi%7D#0) 하자. 왼쪽편에 있는 의 [수는](https://www.codecogs.com/eqnedit.php?latex=h%5E%7BL%7D_%7Bi%7D#0) 왼쪽에서 수평방향으로 오른쪽으로![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.005.png)![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.006.png)![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.005.png) 연속해서 나타나는 벽돌수를 뜻한다. 오른쪽에 있는 는 [오른쪽](https://www.codecogs.com/eqnedit.php?latex=h%5E%7BR%7D_%7Bi%7D#0)에 왼쪽으로 연속해서![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.006.png) 깔린 벽돌수이다. 이 때 0은 중간에 아무런 물체가 없어서 벽돌이 다 깔린 것을 의미한다. 위 그림에서[ =](https://www.codecogs.com/eqnedit.php?latex=h%5E%7BL%7D#0)**[7 3 1 1 1 2 2]**이고[ =](https://www.codecogs.com/eqnedit.php?latex=h%5E%7BR%7D#0)**[-1 3 2 1 1 1 2]** 이다. 이렇게 주어질 때 ![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.007.png)![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.008.png)![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.009.png)

번째 수직방향의 연속된 벽돌수를 [와 ](https://www.codecogs.com/eqnedit.php?latex=v%5E%7BT%7D_%7Bj%7D#0)[라 한](https://www.codecogs.com/eqnedit.php?latex=v%5E%7BB%7D_%7Bj%7D#0)다. 각각은 위에서 연속된 벽돌수, 아래에서 수직방향으로![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.010.png)![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.011.png) 연속된 벽돌수를 나타낸다. 수평방향으로 연속된 벽돌수가 각각 주어지면 수직방향의 연속된 벽돌수를 찾아서 출력하는 것이다. 위의 예에서 =**[7[ 2 ](https://www.codecogs.com/eqnedit.php?latex=v%5E%7BT%7D#0)2 1 2 3 7]**과![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.012.png)

![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.013.png)=**[-1 2 0 0 0 1 -1]** 구할 수 있다. 여기서[ 와](https://www.codecogs.com/eqnedit.php?latex=h%5E%7BR%7D_%7Bi%7D#0)[ 값](https://www.codecogs.com/eqnedit.php?latex=v%5E%7BB%7D_%7Bj%7D#0)이**-1**이 의미하는 것은 왼쪽에서 수평방향,![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.006.png)![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.011.png) 아래쪽에서 수직방향에 물체가 없다는 것을 의미한다. 다음의 예를 보면, 같은 입력 ![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.008.png) =**[3 2 2]**이고 ![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.009.png)[=](https://www.codecogs.com/eqnedit.php?latex=h%5E%7BR%7D#0)**[0 0 0]** 에 대해 한가지 이상의 경우가 나올 수 있다. 이 때는 가장 작은 물체가 있는 (a)경우를 따른다.

![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.014.png)

다음 예시와 같이 C, U, O 등의 모양으로 벽돌을 감싸고 있는 물체는 존재하지 않는다고 가정한다.

![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.015.jpeg) ![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.016.png) ![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.017.jpeg)

**(ㄱ) (ㄴ)                                              (ㄷ)**

**[입출력]** 표준 입출력을 사용한다. 입력 파일에는 수평(horizontal) 방향으로 깔린 왼쪽에서 연속된 벽돌수

![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.008.png)가 첫번째 줄에 모두 주어지고 오른쪽에서 연속된 벽돌수가 두번째 줄에 모두 주어진다. 그 줄의 수는 최대 100이며 마지막은 숫자 -9로 표시되어 있다. 여러분은 이것을 읽어 앞에서 설명한 바와 같이 왼쪽에서 오른쪽으로 각 세로줄에 위에서 아래 방향으로 연속되게 배치할 벽돌의 수를 순서대로 출력하고 그 끝은 입력 데이터와 같이 -9로 표시해야 한다. 그리고 그 다음줄에는 왼쪽에서 오른쪽으로 각 세로줄에 아래에서 위로 연속되게 배치할 벽돌의 수를 순서대로 출력하고 마지막은 -9로 출력한다.

입력 데이터의 조건은[ 이며](https://www.codecogs.com/eqnedit.php?latex=-1%20%5Cle%20h%5E%7BL%7D_%7Bi%7D%2C%20h%5E%7BR%7D_%7Bi%7D%2C%20v%5E%7BL%7D_%7Bi%7D%2C%20v%5E%7BR%7D_%7Bi%7D%5Cle%201%2C000#0)[ 이다](https://www.codecogs.com/eqnedit.php?latex=1%5Cle%20i%20%5Cle%20100#0).![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.018.png)![](Aspose.Words.d7aa05f7-6629-492b-94dc-0b632c533a28.019.png)



|**[예제]**|
| - |
|**입력 stdin**|**출력 stdout**|
|**7 3 1 1 1 2 2 -9 -1 3 2 1 1 1 2 -9**|**7 2 2 1 2 3 7 -9 -1 2 0 0 0 1 -1 -9**|
|**3 2 2 -9 0 0 0 -9**|**3 3 1 0 -9 -1 -1 0 0 -9**|
**[제한조건]** 프로그램의 이름은 pa02\_block.{py,c,cpp}이다. 제출 횟수는 최대 15번이며 허용 시간은

데이터 당 제한 시간은 1초, 허용가능 코드의 최대 크기는 5,000 bytes 이다. 문제 풀이 마감시간은 2022년 9월22일 **24:00** 이다. 제출한 프로그램에 대한 풀이(방법과 코드설명)를 작성하여 2022년 9월23일 24:00까지 NESPA “풀이게시판”에 제출해야 한다. 제출한 프로그램 풀이과정은 마감이 지나면 공개된다.
