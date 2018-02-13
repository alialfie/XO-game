b = [["-", "-", "-"], ["-", "-", "-"], ["-", "-", '-']]

condition = True

for i in range(9):
    print("Player X's turn")
    print("   1  2  3")
    print("1 ", b[0][0], "", b[0][1], "", b[0][2])
    print("2 ", b[1][0], "", b[1][1], "", b[1][2])
    print("3 ", b[2][0], "", b[2][1], "", b[2][2])
    i = int(input("Enter row: "))
    j = int(input("Enter column: "))
    if b[i-1][j-1] == "-":
        b[i-1][j-1] = "X"
    else:
        print("Spot is already filled, try again")
        i = int(input("Enter row: "))
        j = int(input("Enter column: "))
        if b[i-1][j-1] == "-":
            b[i-1][j-1] = "X"
        else:
            print("You did it again! Turn skipped")

    if (b[0][0] == "X" and b[0][1] == "X" and b[0][2] == "X") or (b[1][0] == "X" and b[1][1] == "X" and b[1][2] == "X") or (b[2][0] == "X" and b[2][1] == "X" and b[2][2] == "X") or (b[0][0] == "X" and b[1][0] == "X" and b[2][0] == "X") or (b[0][1] == "X" and b[1][1] == "X" and b[2][1] == "X") or (b[0][2] == "X" and b[1][2] == "X" and b[2][2] == "X")or (b[0][0] == "X" and b[1][1] == "X" and b[2][2] == "X") or (b[0][2] == "X" and b[1][1] == "X" and b[2][0] == "X"):
        print("Winner is player X!")
        print("1 ", b[0][0], "", b[0][1], "", b[0][2])
        print("2 ", b[1][0], "", b[1][1], "", b[1][2])
        print("3 ", b[2][0], "", b[2][1], "", b[2][2])
        condition = False
        break
    elif (b[0][0] == "O" and b[0][1] == "O" and b[0][2] == "O") or (b[1][0] == "O" and b[1][1] == "O" and b[1][2] == "O") or (b[2][0] == "O" and b[2][1] == "O" and b[2][2] == "O")or (b[0][0] == "O" and b[1][0] == "O" and b[2][0] == "O") or (b[0][1] == "O" and b[1][1] == "O" and b[2][1] == "O") or (b[0][2] == "O" and b[1][2] == "O" and b[2][2] == "O")or (b[0][0] == "O" and b[1][1] == "O" and b[2][2] == "O") or (b[0][2] == "O" and b[1][1] == "O" and b[2][0] == "O"):
        print("Winner is player O")
        print("1 ", b[0][0], "", b[0][1], "", b[0][2])
        print("2 ", b[1][0], "", b[1][1], "", b[1][2])
        print("3 ", b[2][0], "", b[2][1], "", b[2][2])
        condition = False
        break

    print("Player O's turn")
    print("   1  2  3")
    print("1 ", b[0][0], "", b[0][1], "", b[0][2])
    print("2 ", b[1][0], "", b[1][1], "", b[1][2])
    print("3 ", b[2][0], "", b[2][1], "", b[2][2])
    i = int(input("Enter row: "))
    j = int(input("Enter column: "))
    if b[i-1][j-1] == "-":
        b[i-1][j-1] = "O"
    else:
        print("Spot is already filled, try again")
        i = int(input("Enter row: "))
        j = int(input("Enter column: "))
        if b[i-1][j-1] == "-":
            b[i-1][j-1] = "O"
        else:
            print("You did it again! Turn skipped")

    if (b[0][0] == "X" and b[0][1] == "X" and b[0][2] == "X") or (b[1][0] == "X" and b[1][1] == "X" and b[1][2] == "X") or (b[2][0] == "X" and b[2][1] == "X" and b[2][2] == "X")or (b[0][0] == "X" and b[1][0] == "X" and b[2][0] == "X") or (b[0][1] == "X" and b[1][1] == "X" and b[2][1] == "X") or (b[0][2] == "X" and b[1][2] == "X" and b[2][2] == "X")or (b[0][0] == "X" and b[1][1] == "X" and b[2][2] == "X") or (b[0][2] == "X" and b[1][1] == "X" and b[2][0] == "X"):
        print("Winner is player X!")
        print("1 ", b[0][0], "", b[0][1], "", b[0][2])
        print("2 ", b[1][0], "", b[1][1], "", b[1][2])
        print("3 ", b[2][0], "", b[2][1], "", b[2][2])
        condition = False
        break
    elif (b[0][0] == "O" and b[0][1] == "O" and b[0][2] == "O") or (b[1][0] == "O" and b[1][1] == "O" and b[1][2] == "O") or (b[2][0] == "O" and b[2][1] == "O" and b[2][2] == "O")or (b[0][0] == "O" and b[1][0] == "O" and b[2][0] == "O") or (b[0][1] == "O" and b[1][1] == "O" and b[2][1] == "O") or (b[0][2] == "O" and b[1][2] == "O" and b[2][2] == "O")or (b[0][0] == "O" and b[1][1] == "O" and b[2][2] == "O") or (b[0][2] == "O" and b[1][1] == "O" and b[2][0] == "O"):
        print("Winner is player O")
        print("1 ", b[0][0], "", b[0][1], "", b[0][2])
        print("2 ", b[1][0], "", b[1][1], "", b[1][2])
        print("3 ", b[2][0], "", b[2][1], "", b[2][2])
        condition = False
        break

if condition == True:
    print('Nobody won')
