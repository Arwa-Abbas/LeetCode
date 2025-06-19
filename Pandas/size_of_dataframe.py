import pandas as pd

def getDataframeSize(players: pd.DataFrame) -> List[int]:
  return list(players.shape)

#Time Complexity: O(1)
#Space Complexity: O(1)
