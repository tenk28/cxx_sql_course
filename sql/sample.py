import psycopg2

try:
    # connection to db
    conn = psycopg2.connect(dbname='students_db',
                            user='student',
                            password='1111',
                            host='192.168.0.108')

except:
    print('Can`t establish connection to database')

cursor = conn.cursor()

cursor.execute('<promt here>')
all_users = cursor.fetchall()
print(all_users)
cursor.close()
conn.close()
