// Q.1

// #include <iostream>
// using namespace std;
// int main() {
// 	int i=0;
// 	i=i+1;
// 	cout<<i;
// 	/*print i \*///i=i+1;
// 	cout<<++i;
// }

// Q.2

// #include <iostream>
// using namespace std;
// int main() {
// 	short i=2300, j=4322;
// 	cout<<"i+j="<<-(i+j);
// }

// Q.3

// #include <iostream>
// using namespace std;
// int main() {
// 		int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n; ++j) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// Q.4

// #include <iostream>
// using namespace std;
// int main(){
// 	int n;
// 	cin >> n;
// 	bool isPrime = true;
//   for(int i=2;i<n;i++){
//       if(n%i == 0){
//           isPrime = false; 
//           break;
//       }  
//   }
//    if(isPrime){
// 		cout<<"Prime"<<endl;	
// 	}
// 	else{
// 		cout<<"Not Prime"<<endl;	
// 	}
	
//   return 0;
// }

// Q.5

// #include <iostream>
// using namespace std;
// int main() {
// 	float l, b;
//     cin>>l>>b;
// 	float P;
//     P = 2*(l+b);
// 	//printf("Perimeter=", P);
//     cout<<"Perimeter = "<<P;
// }

// Q.6

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;++i){
//         for(int j=i+1;j<=n;j++){
//             if(j==i+1 || j == n || i == 0){
//                 cout<<j;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Q.7

// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cin>>n;
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n - i; j++) {
//       printf("  ");
//     }
//     for (int j = i; j < 2*i; j++) {
//       printf("%d ", j);
//     }
//     int ele = 2 * ( i - 1);
//     for (int j = 1; j <= i - 1; j++) {
//       printf("%d ", ele--);
//     }
//     printf("\n");
//   }
//   return 0;
// }

// Q.8

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//          int k=0;
//         for (int j=0; j<n*2-1; ++j) {
//             if(j<n-i-1){
//                 cout<<" ";
//             }
//             else if(k < 2*i+1){
//                 if(k==0 || k == 2*i || i == n - 1){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//                  k++;
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// GURU

#include <iostream>
using namespace std;

int main()
{
   int m,n,r;
    cin >> r;
   for(m=0;m<=r;m++)
   {
     for(n=1;n<=r-m;n++)
     cout<<"   ";
     for(n=1;n<=2*m-1;n++)
       cout<<" * ";
     cout<<endl;
   }
   for(m=r-1;m>=1;m--)
   {
     for(n=1;n<=r-m;n++)
     cout<<"   ";
     for(n=1;n<=2*m-1;n++)
       cout<<" * ";
     cout<<endl;;
   }
}
