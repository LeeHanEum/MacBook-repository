import re
New_ID = input("이이디를 입력하시오 : ")
# 아이디 입력 받기
Len = len(New_ID)

def CheckIDLoop(New_ID) :
    New_ID = New_ID.lower()
    # 모든 대문자를 대응되는 소문자로 치환

    New_ID = re.sub('[^a-z0-9-_.]', '', New_ID)
    # 알파벳 소문자, 숫자, 빼기, 밑줄, 마침표를 제외한 모든 문자를 제거

    d = New_ID.count('..')
    for d in range(0,10) :
        New_ID = New_ID.replace("..",".")
        d = d-1
    # 마침표가 2번 이상 연속된 부분을 하나의 마침표로 치환


    if New_ID.startswith('.') and New_ID.endswith('.') :
        New_ID = New_ID[1:]
        New_ID = New_ID[:-1]
    elif New_ID.endswith('.') :
        New_ID = New_ID[:-1]
    elif New_ID.startswith('.') :
        New_ID = New_ID[1:]
    else :
        New_ID = New_ID
    # 마침표가 처음이나 끝에 위치한다면 제거

    if len(New_ID)>=16 :
        New_ID = New_ID[:-(len(New_ID)-15)]
    else :
        New_ID = New_ID
    # 길이가 16자 이상이면, 첫 15개의 문자를 제외한 나머지 문자들을 모두 제거


    if New_ID == '' :
        New_ID = "a"
    else :
        New_ID = New_ID
    # 빈 문자열이라면, a를 대입

    if len(New_ID)==1 :
        for Len in range(1,3):
            New_ID = New_ID + New_ID[(len(New_ID)-1):]
            Len = Len + 1
    elif len(New_ID)<3 :
        for Len in range(1,2):
            New_ID = New_ID + New_ID[(len(New_ID)-1):]
            Len = Len + 1
    else :
        New_ID = New_ID
    # 길이가 2자 이하라면, 마지막 문자를 길이가 3이 될 때까지 반복해서 끝에 붙임

    return New_ID

New_ID = CheckIDLoop(New_ID)
FinalNew_ID = CheckIDLoop(New_ID)
print(FinalNew_ID)







