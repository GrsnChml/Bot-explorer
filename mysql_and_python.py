import MySQLdb
conn = MySQLdb.connect(host= "spaceapp.ch7oeqwewnpa.us-west-2.rds.amazonaws.com",
                  user="admin",
                  passwd="1234abcd",
                  db="robot_db")

x = conn.cursor()

longitud = 12.41414
latitud = -23.662434
fecha = 20199181021412
velocidad  = 20.32

try:
   x.execute("""INSERT INTO trama VALUES (null,'%s','%s','%s','%s')""",(latitud,longitud,velocidad,fecha));
   print("success");
   conn.commit();
except:
   conn.rollback();
   print("error");

conn.close();