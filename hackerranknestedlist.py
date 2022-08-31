if __name__ == '__main__':
    main_list=[]
    score_sheet=[]
    n=int(input())
    for i in range(n):
        name = input()
        score = float(input())
        studentlst=[name,score]
        score_sheet.append(score)
        main_list.append(studentlst)
    for i in range(n):
        for j in range(n-i-1):
            if score_sheet[j]>score_sheet[j+1]:
                score_sheet[j],score_sheet[j+1]=score_sheet[j+1],score_sheet[j]
    a=score_sheet[0]
    new_list=[]
    for i in range(len(score_sheet)):
        if score_sheet[i] not in new_list:
            new_list.append(score_sheet[i])
    name_list=[]
    for i in range(n):
        if main_list[i][1]==new_list[1]:
            name_list.append(main_list[i][0])
    for i in range(len(name_list)):
        for j in range(len(name_list)-i-1):
            if name_list[j]>name_list[j+1]:
                name_list[j],name_list[j+1]=name_list[j+1],name_list[j]
    for i in range(len(name_list)):
        print(name_list[i])