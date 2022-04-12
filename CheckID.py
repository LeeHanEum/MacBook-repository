import re
New_ID = input("이이디를 입력하시오 : ")
New_ID = New_ID.lower()
New_ID = re.sub('[^a-z0-9-_.]', '', New_ID)
New_ID = New_ID.replace("..",".")
New_ID = New_ID.replace(New_ID.startswith('.'),"")
New_ID = New_ID.replace(New_ID.endswith('.'),"")


print(New_ID)



'''
if len(GetID) > 15 :
    print("아이디 길이는 15자 이하여야 함")
elif re.search('[0-9+]',GetID) is None :
    print("아이디는 숫자를 포함해야 함")
elif re.search('[a-z]',GetID) is None :
    print("아이디는 소문자 알파벳만 사용 가능")
elif re.search('[A-Z]',GetID) :
    print("아이디는 소문자 알파벳만 사용 가능")
else :
    print("적합한 아이디")



print("추천 아이디 : ")
print(GetID.lower())
print("git이 동작함?")
print("git이 동작함?")
'''



