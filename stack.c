#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
  stack[++top] = value;
}

int pop() {
  return stack[top--];
}

int peek() {
  return stack[top];
}


void find_greatest_to_left(int arr[], int n) {
  int i;
  printf("Greatest elements to the left of each element:\n");
  for (i = 0; i < n; i++) {
    while (top != -1 && peek() <= arr[i]) {
      pop();
    }
    if (top == -1) {
      printf("-1 ");
    } else {
      printf("%d ", peek());
    }
    push(arr[i]);
  }
}


void find_greatest_to_right(int arr[], int n) {
  int i;
  printf("Greatest elements to the right of each element:\n");
  for (i = n - 1; i >= 0; i--) {
    while (top != -1 && peek() <= arr[i]) {
      pop();
    }
    if (top == -1) {
      printf("-1 ");
    } else {
      printf("%d ", peek());
    }
    push(arr[i]);
  }
}



void find_smallest_to_right(int arr[], int n) {
  int i;
  printf("Smallest elements to the right of each element:\n");
  for (i = n - 1; i >= 0; i--) {
    while (top != -1 && peek() >= arr[i]) {
      pop();
    }
    if (top == -1) {
      printf("-1 ");
    } else {
      printf("%d ", peek());
    }
    push(arr[i]);
  }
}


void find_smallest_to_left(int arr[], int n) {
  int i;
  printf("Smallest elements to the left of each element:\n");
  for (i = 0; i < n; i++) {
    while (top != -1 && peek() >= arr[i]) {
      pop();
    }
    if (top == -1) {
      printf("-1 ");
    } else {
      printf("%d ", peek());
    }
    push(arr[i]);
  }
}



// Valid parenthesis(python)
def isValid(self, s: str) -> bool:
        while s:
            if '()' in s:
                s = s.replace('()', '')
            elif '[]' in s:
                s = s.replace('[]', '')
            elif '{}' in s:
                s = s.replace('{}', '')
            else:
                return  False         
        return True

