import pandas as pd

def concatenateTables(df1: pd.DataFrame, df2: pd.DataFrame) -> pd.DataFrame:
    result=pd.concat([df1,df2],axis=0)
    return result

#Time Complexity: O(n+m)
#Space Complexity: O(n+m)
