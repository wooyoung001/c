#include <stdio.h>
#include <locale.h>

int main(void) {
    // 콘솔 로케일 설정 (한글 출력 가능)
    setlocale(LC_ALL, "");

    // 한글 출력.\02_
    wprintf(L"홍길동\n홍 길 동\n홍  길  동");

    return 0;
}