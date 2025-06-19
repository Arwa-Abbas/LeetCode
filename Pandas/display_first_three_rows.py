import pandas as pd

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
    return employees.iloc[:3]

#Time Complexity: O(1)
#Space Complexity: O(1)
