import pandas as pd

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
    return students.dropna(subset=['name'])

#Time Complexity: O(n)
#Space Complexity: O(n*m)   -> In the worst case, if no rows are missing, it creates a copy of the original: O(n × m) n = number of rows, m = number of columns
