/*
"Copyright (c)  2017 GANGADHAR KORRAPATI"

MIT License

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
/*InsertionSort*/

#include<stdio.h>
void sort(int*,int);
int main(int argc, char const *argv[]){
	int a[20],i,n;
		printf("\nEnter number of elements(<20):");
		scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter element %d:",i+1);
		scanf("%d",&a[i]);
	}
	sort(a,n);
	for(i=0;i<n;i++){
		printf("\nElement %d:%d",i+1,a[i]);
	}
	return 0;
}
void sort(int a[],int n){
	int j,key;
	for(j=2;j<n;j++){
		key=a[j];
		int i=j-1;
		while(i && a[i]>key){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}
}
