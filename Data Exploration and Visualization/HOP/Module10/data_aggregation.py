import numpy as np
import pandas as pd
import seaborn as sb


df = sb.load_dataset('tips')
df


df.sum(numeric_only=True, skipna=True)


df.mean(numeric_only=True, skipna=True)


df.dropna().describe()


df.groupby('time').sum()


df.groupby('time')['size'].sum()


for (time, group) in df.groupby('time):
   print(f'{time}:\n{group}')


df.groupby('time')['tip'].describe()


df.groupby('time').aggregate(['min', np.median, max])


df.groupby('time').aggregate({'tip'}: max, 'size':min})


df.groupby('time').filter(lambda x: x['size'].std() > 1)


df.groupby('time').std()


df.groupby('time').transform(lambda x: x + x.std())


df.groupby('time').apply(lambda x: x['tip'] + x['size'])


pd.pivot_table(df, index='time', column='sex', values='tip', aggfunc=sum, fill_value=0)