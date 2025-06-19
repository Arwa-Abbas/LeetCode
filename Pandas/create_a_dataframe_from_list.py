import pandas as pd

def createDataframe(student_data: List[List[int]]) -> pd.DataFrame:
    return pd.DataFrame(student_data,columns=['student_id','age'])

#Time Complexity: O(n)
#Space Complexity: O(n)
