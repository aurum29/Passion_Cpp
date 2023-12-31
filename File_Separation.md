**User**: 
제가 M1 맥북 사용중인데 Cpp 파일을 분리하면
clang: error: linker command failed with exit code 1 (use -v to see invocation)
라는 에러가 발생하네요
아키텍쳐64의 심볼을 찾을수가 없다라는 말도 뜹니다
이것때문에 며칠째 너무 힘드네요

**Assistant**: 
이 오류는 보통 컴파일 과정에서 발생하는 링킹 단계에서 발생합니다. 여러 cpp 파일을 분리하여 사용할 때, 각 cpp 파일은 개별적으로 컴파일이 되며 이후에 링킹 단계에서 하나의 실행 가능한 프로그램으로 합쳐집니다. 이 과정에서 "clang: error: linker command failed with exit code 1 (use -v to see invocation)" 오류는 특정 심볼(함수나 변수 등)을 찾지 못했을 때 발생합니다.

"아키텍쳐64의 심볼을 찾을 수 없다"라는 메시지가 뜬다면, 이는 64비트 아키텍쳐에서 사용해야 하는 특정 심볼이 코드에서 찾아지지 않았음을 나타내는 메시지입니다.

이를 해결하기 위해서는 다음과 같은 점들을 고려해 보시는 것이 좋을 것 같습니다.

1. 함수나 변수 선언이 올바르게 되었는지 확인해 보세요. 함수 선언이 cpp 파일에만 존재하고 헤더 파일에는 존재하지 않는다면 이런 오류가 발생할 수 있습니다.

2. 컴파일 과정에서 모든 파일이 올바르게 포함되었는지 확인해 보세요. `g++` 나 `clang` 명령을 실행할 때 모든 cpp 파일을 명시해야 합니다. 예를 들면, `g++ main.cpp util.cpp -o program` 처럼 사용해야 합니다.

3. 만약 프로젝트에서 라이브러리를 사용하고 있다면, 라이브러리가 올바르게 링크되었는지 확인해 보세요. 링크하는 라이브러리의 버전이 잘못되었거나, 라이브러리가 아예 링크되지 않았다면 이런 오류가 발생할 수 있습니다.

4. Apple의 M1 칩은 ARM 아키텍처를 사용하므로, 만약 x86_64 아키텍처용 라이브러리를 사용하고 있다면 이런 오류가 발생할 수 있습니다. 이런 경우에는 ARM 아키텍처를 지원하는 라이브러리를 찾아 사용해야 합니다.

이러한 문제들을 해결하기 위해서는 코드를 정확히 확인하고, 필요한 경우에는 프로젝트의 빌드 설정을 조정해야 할 수도 있습니다.

**User**: 
g++ main.cpp util.cpp -o program를 사용해서 컴파일을 했더니, program이라는 이름의 파일이 나왔어.
근데 어떻게 실행시키는지 모르겠어

**Assistant**: 
컴파일이 성공적으로 완료되었다면, 이제 생성된 실행파일을 실행할 수 있습니다. `program`이라는 이름의 실행파일을 실행하기 위해서는 터미널에서 다음과 같이 입력하면 됩니다:
```bash
./program
```

여기서 ./는 현재 디렉토리를 의미하며, program은 방금 컴파일하여 생성한 실행 파일의 이름입니다.
그런데, 만약 실행 권한이 없는 경우에는 실행 권한을 추가해주어야 합니다. 실행 권한을 추가하기 위해서는 다음과 같이 입력합니다: