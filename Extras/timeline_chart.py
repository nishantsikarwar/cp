# # import altair as alt
# # import datetime as dt
# # import pandas as pd


# # alt.renderers.enable('jupyterlab')

# # data = pd.DataFrame()
# # data['from'] = [dt.datetime(2018, 7, 17, 0, 15),
# #              dt.datetime(2018, 7, 17, 0, 30),
# #              dt.datetime(2018, 7, 17, 0, 45), 
# #              dt.datetime(2018, 7, 17, 1, 0), 
# #              dt.datetime(2018, 7, 17, 1, 15), 
# #              dt.datetime(2018, 7, 17, 1, 30)]
# # data['to'] = [dt.datetime(2018, 7, 17, 0, 30),
# #              dt.datetime(2018, 7, 17, 0, 45),
# #              dt.datetime(2018, 7, 17, 1, 0), 
# #              dt.datetime(2018, 7, 17, 1, 15), 
# #              dt.datetime(2018, 7, 17, 1, 30), 
# #              dt.datetime(2018, 7, 17, 1, 45)]
# # data['activity'] = ['sleep','eat','work','sleep','eat','work']
# # #data

# # alt.Chart(data).mark_bar().encode(
# #     x='from',
# #     x2='to',
# #     y='activity',
# #     color=alt.Color('activity', scale=alt.Scale(scheme='dark2'))
# # )

# # import matplotlib.pyplot as plt
# # import matplotlib.dates as mdates
# # # Formatters for x-axis labels
# # months = mdates.MonthLocator()  # every month
# # date_fmt = mdates.DateFormatter('%Y-%m-%d')
# # # Create duration column for bars sizes
# # tasks_data_plt['start.date'] = pd.to_datetime(tasks_data_plt['start.date'])
# # tasks_data_plt['end.date'] = pd.to_datetime(tasks_data_plt['end.date'])
# # tasks_data_plt['duration'] = tasks_data_plt['end.date'] - tasks_data_plt['start.date']
# # # Preperation to have locations of the bars on the y-axis
# # tasks = {task : (i+1)*10 for i, task in enumerate( dict.fromkeys(tasks_data['name']) )}
# # # Override pandas mandatory conversion to Timestamp
# # start_times = [np.datetime64(t, 'D') for t in tasks_data_plt['start.date'] ]

# # fig, ax_gnt = plt.subplots(figsize = (12, 8))
# # # Add bars for each duration
# # for i, t in enumerate(tasks_data_plt['name']):
# #     ax_gnt.broken_barh([(start_times[i], tasks_data_plt['duration'][i])], (tasks[t], 9),
# #                         facecolors = ('tab:red') if tasks_data_plt['is.critical'][i] else ('tab:grey')) 
  
# # ax_gnt.grid(True)

# # ax_gnt.set_yticks([i + 5 for i in tasks.values()]) 
# # ax_gnt.set_yticklabels(dict.fromkeys(tasks_data['name']).keys()) 
# # # Format the x-axis
# # ax_gnt.xaxis_date()
# # ax_gnt.xaxis.set_major_locator(months)
# # ax_gnt.xaxis.set_major_formatter(date_fmt)
# # fig.autofmt_xdate()


# # # import plotly.figure_factory as ff
# # # # Gantt chart in Plotly has mandatory format of data columns
# # # tasks_data_plotly.columns = ['Task', 'Start', 'Finish', 'Resource']
# # # tasks_data_plotly['Resource'] = [ 'Critical' if el else 'Not critical' for el in tasks_data_plotly['Resource']]

# # # critical_colors = { 'Critical' : 'rgb(202, 47, 85)', 'Not critical' : 'rgb(107, 127, 135)' }

# # # fig_plotly = ff.create_gantt(tasks_data_plotly, colors=critical_colors, index_col='Resource', title='Gantt Chart',
# # #                              show_colorbar=True, bar_width=0.4, showgrid_x=True, showgrid_y=True)
# # # fig_plotly.show()

# # # import pandas as pd
# # # import plotly.express as px
# # # import plotly.figure_factory as ff
# # # import plotly.graph_objs as go
# # # import chart_studio
# # # import chart_studio.plotly as py 
# # # import chart_studio.tools as tls
# # # df = pd.read_csv('gantt_chart_new.csv',encoding='latin1')
# # # df['Start'] = df['Start'].astype('datetime64')
# # # df['Finish'] = df['Finish'].astype('datetime64')
# # # # print(df.dtypes)
# # # # print(df.head())
# # # colors = {'Technology' : 'rgb(30,144,255)'
# # #           , 'Technology - Date TBD' : 'rgb(211,211,211)'
# # #           , 'People' : 'rgb(95,158,160)'
# # #           , 'Process' : 'rgb(0,0,128)'
# # #           , 'Process - Date TBD' : 'rgb(211,211,210)'}
    
# # # orders = list(df['Task'])
# # # fig = px.timeline(df
# # #                   , x_start="Start"
# # #                   , x_end="Finish"
# # #                   , y="Resource"
# # #                   , hover_name="Task"
# # # #                   , facet_col="Dimension"
# # # #                   , facet_col_wrap=40
# # # #                   , facet_col_spacing=.99
# # # #                   , color_discrete_sequence=['green']*len(df)
# # #                   , color_discrete_sequence=px.colors.qualitative.Prism
# # #                   , opacity=.7
# # # #                   , text="Task"
# # #                   , range_x=None
# # #                   , range_y=None
# # #                   , template='plotly_white'
# # #                   , height=1200
# # # #                   , width=1500
# # #                   , color='Dimension'
# # #                   , title ="<b>IE 3.0 Gantt Chart 2021</b>"
# # # #                   , color=colors
# # #                  )
# # # fig.update_layout(
# # #     bargap=0.5
# # #     ,bargroupgap=0.1
# # #     ,xaxis_range=[df.Start.min(), df.Finish.max()]
# # #     ,xaxis = dict(
# # #         showgrid=True
# # #         ,rangeslider_visible=True
# # #         ,side ="top"
# # #         ,tickmode = 'array'
# # #         ,dtick="M1"
# # #         ,tickformat="Q%q %Y \n"
# # #         ,ticklabelmode="period"        
# # #         ,ticks="outside"
# # #         ,tickson="boundaries"
# # #         ,tickwidth=.1
# # #         ,layer='below traces'
# # #         ,ticklen=20
# # #         ,tickfont=dict(
# # #             family='Old Standard TT, serif',size=24,color='gray')
# # #         ,rangeselector=dict(
# # #             buttons=list([
# # #                 dict(count=1, label="1m", step="month", stepmode="backward"),
# # #                 dict(count=6, label="6m", step="month", stepmode="backward"),
# # #                 dict(count=1, label="YTD", step="year", stepmode="todate"),
# # #                 dict(count=1, label="1y", step="year", stepmode="backward"),
# # #                 dict(step="all")
# # #             ])
# # #             ,x=.37
# # #             ,y=-.05
# # #             ,font=dict(
# # #                 family="Arial",
# # #                 size=14,
# # #                 color="darkgray"
# # #     )))
    
# # #     ,yaxis = dict(
# # #         title= ""
# # #         ,autorange="reversed"
# # #         ,automargin=True
# # # #         ,anchor="free"
# # #         ,ticklen=10
# # #         ,showgrid=True
# # #         ,showticklabels=True
# # #         ,tickfont=dict(
# # #             family='Old Standard TT, serif', size=16, color='gray'))
    
# # #     ,legend=dict(
# # #         orientation="h"
# # #         ,yanchor="bottom"
# # #         ,y=1.1
# # #         ,title=""
# # #         ,xanchor="right"
# # #         ,x=1
# # #         ,font=dict(
# # #             family="Arial"
# # #             ,size=14
# # #             ,color="darkgray"))
# # # )
# # # fig.update_traces( #marker_color='rgb(158,202,225)'
# # #                    marker_line_color='rgb(8,48,107)'
# # #                   , marker_line_width=1.5, opacity=0.95)
# # # fig.update_layout(
# # #     title="<b>IE 3.0 Gantt Chart 2021</b>",
# # #     xaxis_title="",
# # # #     margin_l=400,
# # #     yaxis_title="Initiatives",
# # # #     legend_title="Dimension: ",
# # #     font=dict(
# # #         family="Arial",
# # #         size=24,
# # #         color="darkgray"
# # #     )
# # # )
# # # # fig.show()
# # # fig.write_html("C:/Users/maxwell.bade/Downloads/ie_3_gantt.html")
# # # go.FigureWidget(fig)

# # Importing the matplotlib.pyplot
# import matplotlib.pyplot as plt

# # Declaring a figure "gnt"
# fig, gnt = plt.subplots()

# # Setting Y-axis limits
# gnt.set_ylim(0, 50)

# # Setting X-axis limits
# gnt.set_xlim(0, 160)

# # Setting labels for x-axis and y-axis
# gnt.set_xlabel('Run since start')
# gnt.set_ylabel('BATCHES')

# # Setting ticks on y-axis
# gnt.set_yticks([15, 25, 35])
# # Labelling tickes of y-axis
# gnt.set_yticklabels(['1', '2', '3'])

# # Setting graph attribute
# gnt.grid(True)

# # Declaring a bar in schedule
# gnt.broken_barh([(40, 50)], (30, 9), facecolors =('tab:orange'))

# # Declaring multiple bars in at same level and same width
# gnt.broken_barh([(110, 10), (150, 10)], (10, 9),
# 						facecolors ='tab:blue')

# gnt.broken_barh([(10, 50), (100, 20), (130, 10)], (20, 9),
# 								facecolors =('tab:red'))

# plt.savefig("gantt1.png")

import datetime as dt
import matplotlib.pyplot as plt
import matplotlib.dates as mdates
from matplotlib.collections import PolyCollection

data = [    (dt.datetime(2018, 7, 17, 0, 15), dt.datetime(2018, 7, 17, 0, 30), 'COPY_BATCH'),
            (dt.datetime(2018, 7, 17, 0, 30), dt.datetime(2018, 7, 17, 0, 45), 'UPDATE_CONTAINER'),
            (dt.datetime(2018, 7, 17, 0, 45), dt.datetime(2018, 7, 17, 1, 0), 'UPDATE_MESSAGE'),
            (dt.datetime(2018, 7, 17, 1, 0), dt.datetime(2018, 7, 17, 1, 30), 'COPY_BATCH'),
            (dt.datetime(2018, 7, 17, 1, 15), dt.datetime(2018, 7, 17, 1, 30), 'UPDATE_MESSAGE'), 
            (dt.datetime(2018, 7, 17, 1, 30), dt.datetime(2018, 7, 17, 1, 45), 'UPDATE_MESSAGE')
        ]

cats = {"COPY_BATCH" : 1, "UPDATE_CONTAINER" : 2, "UPDATE_MESSAGE" : 3, "PURGE_BATCH" : 4, "PURGE_NOY" : 5}
colormapping = {"COPY_BATCH" : "C0", "UPDATE_CONTAINER" : "C1", "UPDATE_MESSAGE" : "C2", "PURGE_BATCH" :"C3", "PURGE_NOY" : "C4"}

verts = []
colors = []
for d in data:
    v =  [(mdates.date2num(d[0]), cats[d[2]]-.4),
          (mdates.date2num(d[0]), cats[d[2]]+.4),
          (mdates.date2num(d[1]), cats[d[2]]+.4),
          (mdates.date2num(d[1]), cats[d[2]]-.4),
          (mdates.date2num(d[0]), cats[d[2]]-.4)]
    verts.append(v)
    colors.append(colormapping[d[2]])

bars = PolyCollection(verts, facecolors=colors)

fig, ax = plt.subplots()
ax.add_collection(bars)
ax.autoscale()
loc = mdates.MinuteLocator(byminute=[0,15,30,45])
ax.xaxis.set_major_locator(loc)
ax.xaxis.set_major_formatter(mdates.AutoDateFormatter(loc))

ax.set_yticks([1,2,3,4,5])
ax.set_yticklabels(["COPY_BATCH", "UPDATE_CONTAINER", "UPDATE_MESSAGE", "PURGE_BATCH", "PURGE_NOY"])
plt.show()
