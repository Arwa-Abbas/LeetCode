import pandas as pd

def findHeavyAnimals(animals: pd.DataFrame) -> pd.DataFrame:
    return animals[animals['weight'] > 100].sort_values(['weight'],ascending=False)[['name']]

#Time Complexity: O(nlogn)  ->due to sorting
#Space Complexity: O(k)  -> k is the number of animals weighing more than 100 kg.
