//LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
/*
위 항목에 항목에 있는 case WM_PAINT를 수정 시 사용 가능
단, 이미 적혀 있는 내용은 함부로 건드리지 말 것.
//TODO: 여기에 hdc를 사용하는 그리기 코드를 추가합니다...
이 밑에 그릴 내용 적을 것
*/

case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc = BeginPaint(hWnd, &ps);
            // TODO: 여기에 hdc를 사용하는 그리기 코드를 추가합니다...

            //사각형 찍기
            Rectangle(hdc, 100, 100, 500, 500);

            //원
            Ellipse(hdc, 100, 100, 500, 500);

            //선 - moveto lineto 세트
            MoveToEx(hdc, 100, 100, 0); //시작점
            LineTo(hdc, 500, 500);      //종료점

            //점 1개 Pixel
            SetPixel(hdc, 600, 500, RGB(255, 0, 0));//빨간색 점 찍기



            EndPaint(hWnd, &ps);
        }
