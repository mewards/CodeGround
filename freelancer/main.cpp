//
//  main.cpp
//  freelancer
//
//  Created by Sin Prisa, Sin Pausa. on 2017. 3. 30..
//  Copyright © 2017년 wooil. All rights reserved.
//
#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	setbuf(stdout, NULL);

	int T;
	int test_case;
    
	scanf("%d", &T);	// Codeground 시스템에서는 C++에서도 scanf 함수 사용을 권장하며, cin을 사용하셔도 됩니다.
	for(test_case = 1; test_case <= T; test_case++) {
		// 이 부분에서 알고리즘 프로그램을 작성하십시오. 기본 제공된 코드를 수정 또는 삭제하고 본인이 코드를 사용하셔도 됩니다.
        int N;
        scanf("%d", &N);
        int P[N];
        int Q[N];
        for(int i=0; i<N; i++){
        	scanf("%d", P[i]);
        }
        for(int i=0; i<N; i++){
        	scanf("%d", Q[i]);
        }
        int S[N];
		S[0]=max(P[0], Q[0]);
		S[1] =max(Q[1], S[0] + P[1]);
//        max(S[0]+Q[2], S[1]+P[2]) -> S[2]
        for(int k=2; k<N; k++){
        	S[k] = max(S[k-2]+Q[k], S[k-1] + P[k]);
        }
        
        
		// 이 부분에서 정답을 출력하십시오. Codeground 시스템에서는 C++에서도 printf 사용을 권장하며, cout을 사용하셔도 됩니다.
		printf("Case #%d\n", test_case);
        
	}

	return 0;	// 정상종료 시 반드시 0을 리턴해야 합니다.
}

int max(int a, int b){
	return a>b? a : b;
}