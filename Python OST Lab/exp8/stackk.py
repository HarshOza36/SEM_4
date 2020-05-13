from collections import deque
newStack = deque()
while True:
    print('\nStack operations:')
    print('1.Push\n2.Pop\n3.Peep\n4.Display\n5.Exit')
    ch = int(input('Select a choice: '))
    if ch == 1:
        n = int(input('Enter no. of elements: '))
        for i in range(n):
            element = int(input('Enter an element: '))
            newStack.append(element)
    elif ch == 2:
        if len(newStack) != 0:
            print('Element poped from stack: ', newStack.pop())
        else:
            print('Stack Underflow')
    elif ch == 3:
        if len(newStack) != 0:
            print('Peep', newStack[-1])
        else:
            print('Stack Underflow')
    elif ch == 4:
        if len(newStack) != 0:
            print(newStack)
        else:
            print('Stack Underflow')
    elif ch == 5:
        break
    else:
        print('Enter a valid choice.')
