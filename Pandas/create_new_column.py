import pandas as pd

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
    employees['bonus']=employees['salary'] * 2
    return employees

#Time Complexity: O(n)
#Space Complexity: O(n)
