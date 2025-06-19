import pandas as pd

def changeDatatype(students: pd.DataFrame) -> pd.DataFrame:
    students['grade']=students['grade'].astype('int64')
    return students

#Time Complexity: O(n)
#Space Complexity: O(n)
