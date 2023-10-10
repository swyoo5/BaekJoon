def solution(players, callings) :
    result = {player : i for i, player in enumerate(players)}
    for reversal_player in callings :
        index = result[reversal_player]
        result[reversal_player] -= 1
        result[players[index - 1]] += 1
        players[index - 1], players[index] = players[index], players[index - 1]
        
    return players