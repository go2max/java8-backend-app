// В файле конфигурации определяется значение для ключа fs.defaultFS:

// <property>
//     <name>fs.defaultFS</name>
//     <value>hdfs://devhdp:9999</value>
// <property>

// ﻿Какой результат выведет следующий код:

// Configuration conf = getConf();
// conf.set("fs.defaultFS", "hdfs://prdhdp:9999");
// String fs = conf.get("fs.defaultFS", "hdfs://devhdp:9000");
// System.out.println("Default FS: " + fs);


// Верно!
Default FS: hdfs://prdhdp:9999