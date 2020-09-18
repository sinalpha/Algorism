list_ = [0,0,0,0,0,0]
list_[0],list_[1],list_[2],list_[3],list_[4],list_[5] = map(int,input().split())
list_1 = []
for a in range(0, 16):

    sum1 = list_[5] + list_[0] + list_[4]
    list_1.append(list_[5])
    for b in [4, 3, 2, 1, 0]:
        list_[b+1] = list_[b]

    if sum1 % 2 == 1:
        list_[0] = 1
    else:
        list_[0] = 0

print(list_1)
