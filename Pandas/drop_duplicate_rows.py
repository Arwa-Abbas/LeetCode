import pandas as pd

def dropDuplicateEmails(customers: pd.DataFrame) -> pd.DataFrame:
    return customers.drop_duplicates('email')

#Time Complexity: O(n)
#Space Complexity: O(n)
