# 보도블록

[문제] 보행자를 위한 보행도로에는 대부분 격자모양의 벽돌을 설치한다. 때론 보도의 중간 중간에 다른 물체들이 있어서 벽돌을 설치하지 말아야할 경우도 생긴다. 다음 그림은 일상에서 볼 수 있는 벽돌이 물체를 비켜 설치된 모습이다.


![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 002](https://user-images.githubusercontent.com/111568619/192048290-59807051-c6ec-4267-a8e1-fc7689ab34f6.png)

그림 1. 보도블록 설치 모습


![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 001](https://user-images.githubusercontent.com/111568619/192048451-6793a628-306b-4d21-b343-187cb76941fb.png)

이런 실제적인 모습을 그림2 처럼 메쉬형태로 나타내면 점선으로 된 물체를 피해 벽돌이 깔려진 것을 나타낸 것이다.

![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 003](https://user-images.githubusercontent.com/111568619/192048328-038a2b3f-05da-4e18-8dce-c0046b24d73a.png)

그림2. 보도블록이 물체를 제외한 영역에 깔린 모양

![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 004](https://user-images.githubusercontent.com/111568619/192048489-10836098-e0dd-4b38-8afb-f82c7bd39d0f.png)
번째 수평방향으로 벽돌을 ![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 006](https://user-images.githubusercontent.com/111568619/192048620-f0b978ea-d1f7-4f06-8622-42b9e9f057a9.png)
과 ![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 005](https://user-images.githubusercontent.com/111568619/192048637-9e1e5087-c54b-4a4f-ba39-6b56e0acca37.png)
 이라 하자. 왼쪽편에 있는 ![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 005](https://user-images.githubusercontent.com/111568619/192048718-d354b0e8-0936-445a-b12a-e354a2a65de2.png)
 의 수는 왼쪽에서 수평방향으로 오른쪽으로 연속해서 나타나는 벽돌수를 뜻한다. 오른쪽에 있는![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 006](https://user-images.githubusercontent.com/111568619/192048754-2fc0f6f3-56f9-42cd-8d02-3ad2d5932c39.png)
 는 오른쪽에 왼쪽으로 연속해서 깔린 벽돌수이다. 이 때 0은 중간에 아무런 물체가 없어서 벽돌이 다 깔린 것을 의미한다. 위 그림에서 ![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 005](https://user-images.githubusercontent.com/111568619/192049016-0b37e5d1-bac2-47cc-b6dd-4b45bbd49a44.png) = **[7 3 1 1 1 2 2]** 이고 ![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 006](https://user-images.githubusercontent.com/111568619/192049058-90739929-78e1-4421-8961-75d2cd33f69b.png)
 =**[-1 3 2 1 1 1 2]** 이다. 이렇게 주어질 때 
![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 007](https://user-images.githubusercontent.com/111568619/192049146-a2473062-068f-4863-9d24-58cef65fa45d.png)번째 수직방향의 연속된 벽돌수를 ![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 010](https://user-images.githubusercontent.com/111568619/192049202-12f27fca-ef32-4974-b9b8-0112f8ed3847.png) 와 ![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 011](https://user-images.githubusercontent.com/111568619/192049226-8f3d587f-718c-4f63-9c42-09287cf0c8a9.png)
 라 한다. 각각은 위에서 연속된 벽돌수, 아래에서 수직방향으로 연속된 벽돌수를 나타낸다. 수평방향으로 연속된 벽돌수가 각각 주어지면 수직방향의 연속된 벽돌수를 찾아서 출력하는 것이다. 위의 예에서
 ![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 012](https://user-images.githubusercontent.com/111568619/192049444-3337e2e0-8375-4c8c-97ff-6636fafef4ef.png)
 **[7 2 2 1 2 3 7]** 과

![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 013](https://user-images.githubusercontent.com/111568619/192049463-423d062d-c37c-4f23-97bb-192f5c30710f.png)=**[-1 2 0 0 0 1 -1]** 구할 수 있다. 여기서 ![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 006](https://user-images.githubusercontent.com/111568619/192049956-18b324df-9791-4fff-ba77-004898b17074.png)
와 ![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 011](https://user-images.githubusercontent.com/111568619/192049985-19639657-6e7c-42c4-944d-51356a5e8847.png)
 값이 **-1**이 의미하는 것은 왼쪽에서 수평방향, 아래쪽에서 수직방향에 물체가 없다는 것을 의미한다. 다음의 예를 보면, 같은 입력 ![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 008](https://user-images.githubusercontent.com/111568619/192050236-03cefa70-c4d8-4f99-b5ba-85f283ac5403.png)
=**[3 2 2]**이고 ![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 009](https://user-images.githubusercontent.com/111568619/192050266-aa9ed074-0b3f-4c52-9742-6fe13d94a7b0.png)
=**[0 0 0]** 에 대해 한가지 이상의 경우가 나올 수 있다. 이 때는 가장 작은 물체가 있는 (a)경우를 따른다.

![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 014](https://user-images.githubusercontent.com/111568619/192049636-6cb39b4a-26d4-4c41-8031-28b17c7d255d.png)


다음 예시와 같이 C, U, O 등의 모양으로 벽돌을 감싸고 있는 물체는 존재하지 않는다고 가정한다.

![123](https://user-images.githubusercontent.com/111568619/192050633-95fa1f9e-9722-4152-b2a0-3ac61a65919a.png)


**[입출력]** 표준 입출력을 사용한다. 입력 파일에는 수평(horizontal) 방향으로 깔린 왼쪽에서 연속된 벽돌수

![](media/166c6e731dd24ed4218f70556bfc0888.png) 가 첫번째 줄에 모두 주어지고 오른쪽에서 연속된 벽돌수가 두번째 줄에 모두 주어진다. 그 줄의 수는 최대 100이며 마지막은 숫자 -9로 표시되어 있다. 여러분은 이것을 읽어 앞에서 설명한 바와 같이 왼쪽에서 오른쪽으로 각 세로줄에 위에서 아래 방향으로 연속되게 배치할 벽돌의 수를 순서대로 출력하고 그 끝은 입력 데이터와 같이 -9로 표시해야 한다. 그리고 그 다음줄에는 왼쪽에서 오른쪽으로 각 세로줄에 아래에서 위로 연속되게 배치할 벽돌의 수를 순서대로 출력하고 마지막은 -9로 출력한다.

입력 데이터의 조건은 ![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 018](https://user-images.githubusercontent.com/111568619/192050685-5a8eaa3a-8df3-4f59-8c18-7010dcdb94db.png)
 이며 ![Aspose Words d7aa05f7-6629-492b-94dc-0b632c533a28 019](https://user-images.githubusercontent.com/111568619/192050690-a620c8a6-568b-4dda-8782-845fc4fcdcf8.png)
이다.

# [예제]
![1233](https://user-images.githubusercontent.com/111568619/192050564-da69737b-7a2b-45e2-a100-699e711f7818.png)

