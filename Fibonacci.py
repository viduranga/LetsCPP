import time

testVal = 25


def fibonacci(i):
    if i == 0:
        return 0
    elif i == 1:
        return 1
    else:
        return fibonacci(i-1) + fibonacci(i-2)


def main():

    start = time.perf_counter()
    result = fibonacci(testVal)
    stop = time.perf_counter()

    duration = (stop - start)*1000*1000
    print(f'result = {result}')
    print(f'duration = {int(duration)} microseconds')


if __name__ == '__main__':
    main()
