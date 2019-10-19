import MySQLdb
import datetime 
import pytz

conn = MySQLdb.connect(host= "spaceapp.ch7oeqwewnpa.us-west-2.rds.amazonaws.com",
                  user="admin",
                  passwd="1234abcd",
                  db="robot_db")


current_time = datetime.datetime.now(pytz.timezone('America/Guatemala')) 

x = conn.cursor()

longitud = 12.41414
latitud = -23.662434
velocidad  = 20.32

try:
   x.execute("""INSERT INTO trama VALUES (null,%s,%s,%s,%s)""",(latitud,longitud,velocidad,current_time));
   print("success");
   conn.commit();
except:
   conn.rollback();
   print("error");

conn.close();