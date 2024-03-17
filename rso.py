def solve(Y: int, N: str) -> str:
    if len(N) > 50:
        return False
    elif "Cal " in N or "California " in N or "Berkeley " in n:
        if Y < 2010:
            return True
        else:
            return False
    else:
        return True

def main():
    T = int(input())
    for _ in range(T):
        Y = int(input())
        N = input()
        print('VALID' if solve(Y, N) else 'INVALID')

if __name__ == '__main__':
    main()
