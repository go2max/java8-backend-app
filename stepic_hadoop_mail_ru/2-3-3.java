// Создайте объект path класса Path для файла /data/logs.txt, расположенного в HDFS (демон NameNode работает на сервере server0, порт 9000)

Path path = new Path("hdfs://server0:9000/data/logs");