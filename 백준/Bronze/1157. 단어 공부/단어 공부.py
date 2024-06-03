S = input() # mississipi
string = S.upper() # 대문자로 변환
listOfRepeat = [0]*26 # 반복횟수를 체크할 리스트
# a-z까지 몇번 반복했는지
for i in string :
    indexOfAlphabet = ord(i)-65 # 몇번째 인덱스의 알파벳인지 (A = 0 ,B = 1...)
    listOfRepeat[indexOfAlphabet] += 1 # 알파벳 하나씩 사용될 때마다 1씩 추가

if listOfRepeat.count(max(listOfRepeat)) > 1 :
    print('?')
else :
    # 가장 많이 반복된 횟수의 인덱스를 추출
    indexOfMax = listOfRepeat.index(max(listOfRepeat)) 
    maxAlphabet = chr(indexOfMax+65) # 아스키코드 이용해 알파벳으로 변환
    print(maxAlphabet)
