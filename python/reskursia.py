#factorial

def get_factorical1(num):
    ans = 1
    for i in range(1, num+1):
        ans*=i
        
    return ans

def get_factorical2(num):
    ans = 1
    while num > 1:
        ans*=num
        num-=1

    return ans

def get_factorial3(num):
    if num == 0:
        return True
    return get_factorial3(num-1) * num


def get_nums(num):
    if num > 0:
        get_nums(num-1)
        print(num)


print(get_nums(5))