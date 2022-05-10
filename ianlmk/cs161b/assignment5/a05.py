
#def sort(arr):

if __name__ == '__main__':
  n = int(input())
  arr = map(int, input().split())
  nums = set(arr)

  for x in range(n):
    print('{}'.format(list(arr[x])))
