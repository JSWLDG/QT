#include <QApplication> // 헤더 파일 qt 어플리케이션의 시발점
#include <QLabel>       // 헤더 파일 텍스트나 이미지를 사용하게 해주는 인터페이스 위젯
int main(int argc, char* argv[]) {
    QApplication app(argc, argv); // app객체를 초기화 , 초기화 시 생성자가 호출
    QLabel * label = new QLabel("Hello World"); // label은 QLabel class의 주소
    label -> setWindowTitle("My App"); // label포인터의 setWindowTitle 의 값 설정
    label -> resize(400, 400);
    label -> show();
    return app.exec(); // 이벤트 루프가 끝나면 return으로 종료
}
