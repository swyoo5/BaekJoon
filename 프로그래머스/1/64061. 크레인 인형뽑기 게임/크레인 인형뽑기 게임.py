def solution(board, moves):
    answer = 0
    stack = []
    trial = len(moves)
    board_size = len(board)
    
    for move_idx in range(trial) :
        col = moves[move_idx] - 1
        for idx in range(board_size) :
            new_input = board[idx][col]
            board[idx][col] = 0
            if new_input != 0:
                if len(stack) > 0 and stack[-1] == new_input :
                    stack.pop()
                    answer += 2
                    break
                stack.append(new_input)
                break
    return answer