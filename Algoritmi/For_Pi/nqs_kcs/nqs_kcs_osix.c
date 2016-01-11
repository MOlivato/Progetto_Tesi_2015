#include <stdio.h>
#include <string.h>


int chiavi[1981][2] = {
{1,991}
,{2,328},{3,85},{4,21},{5,6},{-1,-1},{7,0},{8,0},{9,0},{10,11},{-2,-2}
,{12,0},{13,0},{14,15},{-3,-3},{16,0},{17,18},{-4,-4},{19,20},{-5,-5},{-6,-6}
,{22,54},{23,0},{24,0},{25,28},{26,27},{-7,-7},{-8,-8},{29,36},{30,0},{31,32}
,{-9,-9},{33,0},{34,35},{-10,-10},{-11,-11},{37,0},{38,41},{39,40},{-12,-12},{-13,-13}
,{42,45},{43,44},{-14,-14},{-15,-15},{46,49},{47,48},{-16,-16},{-17,-17},{50,51},{-18,-18}
,{52,53},{-19,-19},{-20,-20},{55,0},{56,0},{57,68},{0,58},{59,0},{60,0},{61,62}
,{-21,-21},{63,0},{64,65},{-22,-22},{66,67},{-23,-23},{-24,-24},{0,69},{70,0},{71,78}
,{0,72},{73,0},{74,75},{-25,-25},{76,77},{-26,-26},{-27,-27},{0,79},{80,84},{0,81}
,{82,83},{-28,-28},{-29,-29},{-30,-30},{86,232},{87,131},{88,0},{89,97},{90,91},{-31,-31}
,{92,0},{93,0},{94,0},{95,96},{-32,-32},{-33,-33},{98,102},{99,0},{100,101},{-34,-34}
,{-35,-35},{103,0},{104,114},{105,108},{106,107},{-36,-36},{-37,-37},{109,110},{-38,-38},{111,0}
,{112,113},{-39,-39},{-40,-40},{115,118},{116,117},{-41,-41},{-42,-42},{119,122},{120,121},{-43,-43}
,{-44,-44},{123,126},{124,125},{-45,-45},{-46,-46},{127,128},{-47,-47},{129,130},{-48,-48},{-49,-49}
,{132,0},{133,160},{134,149},{135,140},{136,0},{137,0},{138,139},{-50,-50},{-51,-51},{141,0}
,{142,0},{0,143},{144,0},{145,146},{-52,-52},{147,148},{-53,-53},{-54,-54},{150,151},{-55,-55}
,{152,0},{153,0},{0,154},{155,0},{156,157},{-56,-56},{158,159},{-57,-57},{-58,-58},{161,188}
,{162,179},{163,170},{164,0},{165,166},{-59,-59},{167,0},{168,169},{-60,-60},{-61,-61},{171,0}
,{172,173},{-62,-62},{174,0},{175,176},{-63,-63},{177,178},{-64,-64},{-65,-65},{180,187},{181,0}
,{0,182},{183,0},{0,184},{185,186},{-66,-66},{-67,-67},{-68,-68},{189,212},{190,197},{191,196}
,{0,192},{193,0},{194,195},{-69,-69},{-70,-70},{-71,-71},{198,205},{0,199},{200,0},{201,202}
,{-72,-72},{203,204},{-73,-73},{-74,-74},{0,206},{207,211},{0,208},{209,210},{-75,-75},{-76,-76}
,{-77,-77},{213,226},{214,220},{0,215},{216,0},{0,217},{218,219},{-78,-78},{-79,-79},{0,221}
,{222,0},{0,223},{224,225},{-80,-80},{-81,-81},{227,228},{-82,-82},{0,229},{230,231},{-83,-83}
,{-84,-84},{233,296},{234,0},{235,262},{0,236},{237,249},{238,0},{239,242},{240,241},{-85,-85}
,{-86,-86},{243,246},{244,245},{-87,-87},{-88,-88},{247,248},{-89,-89},{-90,-90},{250,0},{251,252}
,{-91,-91},{0,253},{254,257},{255,256},{-92,-92},{-93,-93},{258,259},{-94,-94},{260,261},{-95,-95}
,{-96,-96},{0,263},{264,286},{265,277},{0,266},{267,270},{268,269},{-97,-97},{-98,-98},{271,274}
,{272,273},{-99,-99},{-100,-100},{275,276},{-101,-101},{-102,-102},{0,278},{279,280},{-103,-103},{0,281}
,{282,283},{-104,-104},{284,285},{-105,-105},{-106,-106},{287,295},{0,288},{0,289},{290,291},{-107,-107}
,{0,292},{293,294},{-108,-108},{-109,-109},{-110,-110},{297,0},{298,316},{0,299},{0,300},{301,0}
,{302,309},{0,303},{304,0},{305,306},{-111,-111},{307,308},{-112,-112},{-113,-113},{0,310},{311,315}
,{0,312},{313,314},{-114,-114},{-115,-115},{-116,-116},{0,317},{0,318},{319,327},{0,320},{0,321}
,{322,326},{0,323},{324,325},{-117,-117},{-118,-118},{-119,-119},{-120,-120},{329,744},{330,477},{331,368}
,{332,344},{333,334},{-121,-121},{335,0},{336,0},{337,0},{338,339},{-122,-122},{340,0},{341,0}
,{342,343},{-123,-123},{-124,-124},{345,346},{-125,-125},{347,0},{348,0},{349,356},{350,351},{-126,-126}
,{352,0},{353,0},{354,355},{-127,-127},{-128,-128},{357,358},{-129,-129},{359,0},{360,363},{361,362}
,{-130,-130},{-131,-131},{364,365},{-132,-132},{366,367},{-133,-133},{-134,-134},{369,411},{370,385},{371,0}
,{372,373},{-135,-135},{374,0},{375,0},{376,380},{377,0},{378,379},{-136,-136},{-137,-137},{381,0}
,{0,382},{383,384},{-138,-138},{-139,-139},{386,0},{387,395},{388,0},{389,394},{390,0},{391,0}
,{392,393},{-140,-140},{-141,-141},{-142,-142},{396,0},{397,404},{398,399},{-143,-143},{400,0},{0,401}
,{402,403},{-144,-144},{-145,-145},{405,406},{-146,-146},{407,0},{0,408},{409,410},{-147,-147},{-148,-148}
,{412,425},{413,0},{414,415},{-149,-149},{416,0},{417,0},{418,424},{419,0},{420,421},{-150,-150}
,{422,423},{-151,-151},{-152,-152},{-153,-153},{426,0},{427,450},{428,435},{429,434},{430,0},{431,0}
,{432,433},{-154,-154},{-155,-155},{-156,-156},{436,443},{437,0},{438,0},{439,440},{-157,-157},{441,442}
,{-158,-158},{-159,-159},{444,0},{445,449},{0,446},{447,448},{-160,-160},{-161,-161},{-162,-162},{451,466}
,{452,459},{453,458},{454,0},{0,455},{456,457},{-163,-163},{-164,-164},{-165,-165},{460,465},{461,0}
,{0,462},{463,464},{-166,-166},{-167,-167},{-168,-168},{467,470},{468,469},{-169,-169},{-170,-170},{471,474}
,{472,473},{-171,-171},{-172,-172},{475,476},{-173,-173},{-174,-174},{478,644},{479,550},{480,517},{481,494}
,{482,486},{483,0},{484,485},{-175,-175},{-176,-176},{487,0},{488,489},{-177,-177},{490,0},{491,0}
,{492,493},{-178,-178},{-179,-179},{495,501},{496,0},{0,497},{498,0},{499,500},{-180,-180},{-181,-181}
,{502,0},{0,503},{504,511},{505,508},{506,507},{-182,-182},{-183,-183},{509,510},{-184,-184},{-185,-185}
,{512,513},{-186,-186},{0,514},{515,516},{-187,-187},{-188,-188},{518,527},{519,526},{520,0},{0,521}
,{522,0},{523,0},{524,525},{-189,-189},{-190,-190},{-191,-191},{528,538},{529,0},{0,530},{531,0}
,{532,535},{533,534},{-192,-192},{-193,-193},{536,537},{-194,-194},{-195,-195},{539,0},{0,540},{541,544}
,{542,543},{-196,-196},{-197,-197},{545,546},{-198,-198},{0,547},{548,549},{-199,-199},{-200,-200},{551,585}
,{552,573},{553,560},{554,0},{555,556},{-201,-201},{557,0},{558,559},{-202,-202},{-203,-203},{561,0}
,{562,563},{-204,-204},{564,0},{565,568},{566,567},{-205,-205},{-206,-206},{569,570},{-207,-207},{571,572}
,{-208,-208},{-209,-209},{574,575},{-210,-210},{576,0},{0,577},{578,584},{0,579},{580,581},{-211,-211}
,{582,583},{-212,-212},{-213,-213},{-214,-214},{586,615},{587,605},{588,597},{0,589},{590,0},{591,594}
,{592,593},{-215,-215},{-216,-216},{595,596},{-217,-217},{-218,-218},{0,598},{599,0},{0,600},{601,602}
,{-219,-219},{603,604},{-220,-220},{-221,-221},{606,614},{0,607},{608,0},{609,610},{-222,-222},{0,611}
,{612,613},{-223,-223},{-224,-224},{-225,-225},{616,631},{617,623},{0,618},{619,0},{0,620},{621,622}
,{-226,-226},{-227,-227},{0,624},{625,0},{0,626},{627,628},{-228,-228},{629,630},{-229,-229},{-230,-230}
,{632,640},{0,633},{634,639},{0,635},{0,636},{637,638},{-231,-231},{-232,-232},{-233,-233},{0,641}
,{642,643},{-234,-234},{-235,-235},{645,698},{646,677},{647,667},{0,648},{649,0},{650,660},{651,655}
,{652,0},{653,654},{-236,-236},{-237,-237},{656,0},{0,657},{658,659},{-238,-238},{-239,-239},{661,662}
,{-240,-240},{663,0},{0,664},{665,666},{-241,-241},{-242,-242},{0,668},{669,0},{0,670},{0,671}
,{672,676},{0,673},{674,675},{-243,-243},{-244,-244},{-245,-245},{678,688},{0,679},{680,0},{0,681}
,{682,683},{-246,-246},{684,0},{0,685},{686,687},{-247,-247},{-248,-248},{0,689},{690,0},{0,691}
,{0,692},{693,697},{0,694},{695,696},{-249,-249},{-250,-250},{-251,-251},{699,722},{700,721},{0,701}
,{702,0},{703,711},{704,710},{705,0},{706,707},{-252,-252},{708,709},{-253,-253},{-254,-254},{-255,-255}
,{712,718},{713,717},{0,714},{715,716},{-256,-256},{-257,-257},{-258,-258},{719,720},{-259,-259},{-260,-260}
,{-261,-261},{723,740},{0,724},{725,736},{0,726},{727,733},{728,732},{0,729},{730,731},{-262,-262}
,{-263,-263},{-264,-264},{734,735},{-265,-265},{-266,-266},{0,737},{738,739},{-267,-267},{-268,-268},{0,741}
,{742,743},{-269,-269},{-270,-270},{745,923},{746,816},{747,789},{0,748},{749,765},{750,0},{751,758}
,{752,753},{-271,-271},{754,0},{755,0},{756,757},{-272,-272},{-273,-273},{759,760},{-274,-274},{761,0}
,{762,0},{763,764},{-275,-275},{-276,-276},{766,0},{767,774},{0,768},{769,773},{770,0},{771,772}
,{-277,-277},{-278,-278},{-279,-279},{0,775},{776,783},{777,780},{778,779},{-280,-280},{-281,-281},{781,782}
,{-282,-282},{-283,-283},{784,785},{-284,-284},{0,786},{787,788},{-285,-285},{-286,-286},{0,790},{791,805}
,{792,0},{0,793},{794,795},{-287,-287},{796,0},{797,800},{798,799},{-288,-288},{-289,-289},{801,802}
,{-290,-290},{803,804},{-291,-291},{-292,-292},{806,0},{0,807},{0,808},{809,815},{0,810},{811,812}
,{-293,-293},{813,814},{-294,-294},{-295,-295},{-296,-296},{817,890},{0,818},{819,866},{820,849},{821,831}
,{822,828},{823,827},{824,0},{825,826},{-297,-297},{-298,-298},{-299,-299},{829,830},{-300,-300},{-301,-301}
,{832,842},{833,837},{834,0},{835,836},{-302,-302},{-303,-303},{838,0},{0,839},{840,841},{-304,-304}
,{-305,-305},{843,844},{-306,-306},{845,0},{0,846},{847,848},{-307,-307},{-308,-308},{850,863},{851,857}
,{0,852},{853,0},{0,854},{855,856},{-309,-309},{-310,-310},{0,858},{859,0},{0,860},{861,862}
,{-311,-311},{-312,-312},{864,865},{-313,-313},{-314,-314},{867,877},{868,869},{-315,-315},{0,870},{0,871}
,{872,876},{0,873},{874,875},{-316,-316},{-317,-317},{-318,-318},{878,885},{0,879},{0,880},{881,0}
,{0,882},{883,884},{-319,-319},{-320,-320},{0,886},{0,887},{888,889},{-321,-321},{-322,-322},{0,891}
,{892,920},{893,913},{0,894},{895,903},{896,902},{897,0},{898,899},{-323,-323},{900,901},{-324,-324}
,{-325,-325},{-326,-326},{904,910},{905,909},{0,906},{907,908},{-327,-327},{-328,-328},{-329,-329},{911,912}
,{-330,-330},{-331,-331},{0,914},{915,916},{-332,-332},{0,917},{918,919},{-333,-333},{-334,-334},{921,922}
,{-335,-335},{-336,-336},{924,976},{925,962},{0,926},{0,927},{928,952},{929,941},{0,930},{931,938}
,{932,935},{933,934},{-337,-337},{-338,-338},{936,937},{-339,-339},{-340,-340},{939,940},{-341,-341},{-342,-342}
,{0,942},{943,947},{0,944},{945,946},{-343,-343},{-344,-344},{0,948},{0,949},{950,951},{-345,-345}
,{-346,-346},{953,961},{0,954},{0,955},{956,957},{-347,-347},{0,958},{959,960},{-348,-348},{-349,-349}
,{-350,-350},{0,963},{0,964},{965,975},{0,966},{0,967},{968,974},{0,969},{970,971},{-351,-351}
,{972,973},{-352,-352},{-353,-353},{-354,-354},{-355,-355},{977,990},{0,978},{0,979},{0,980},{981,989}
,{0,982},{0,983},{984,988},{0,985},{986,987},{-356,-356},{-357,-357},{-358,-358},{-359,-359},{-360,-360}
,{992,1655},{993,1240},{994,1062},{995,1010},{996,997},{-361,-361},{998,0},{999,0},{1000,0},{1001,1002}
,{-362,-362},{1003,0},{1004,0},{1005,1006},{-363,-363},{1007,0},{1008,1009},{-364,-364},{-365,-365},{1011,1025}
,{1012,0},{1013,0},{1014,1015},{-366,-366},{1016,0},{1017,0},{1018,1019},{-367,-367},{1020,0},{1021,1024}
,{1022,1023},{-368,-368},{-369,-369},{-370,-370},{1026,0},{1027,0},{1028,1038},{1029,1030},{-371,-371},{1031,0}
,{1032,0},{1033,1037},{1034,0},{1035,1036},{-372,-372},{-373,-373},{-374,-374},{1039,1050},{1040,0},{1041,1046}
,{1042,0},{1043,0},{1044,1045},{-375,-375},{-376,-376},{1047,0},{1048,1049},{-377,-377},{-378,-378},{1051,0}
,{1052,1055},{1053,1054},{-379,-379},{-380,-380},{1056,1059},{1057,1058},{-381,-381},{-382,-382},{1060,1061},{-383,-383}
,{-384,-384},{1063,1170},{1064,1097},{1065,0},{1066,1069},{1067,1068},{-385,-385},{-386,-386},{1070,1077},{1071,0}
,{1072,1076},{1073,0},{1074,1075},{-387,-387},{-388,-388},{-389,-389},{1078,0},{1079,1089},{1080,1083},{1081,1082}
,{-390,-390},{-391,-391},{1084,1085},{-392,-392},{1086,0},{1087,1088},{-393,-393},{-394,-394},{1090,1091},{-395,-395}
,{0,1092},{1093,1096},{1094,1095},{-396,-396},{-397,-397},{-398,-398},{1098,0},{1099,1123},{1100,1113},{1101,1106}
,{1102,0},{1103,0},{1104,1105},{-399,-399},{-400,-400},{1107,0},{1108,0},{0,1109},{1110,0},{1111,1112}
,{-401,-401},{-402,-402},{1114,1122},{1115,0},{1116,0},{1117,1118},{-403,-403},{1119,0},{1120,1121},{-404,-404}
,{-405,-405},{-406,-406},{1124,1141},{1125,1128},{1126,1127},{-407,-407},{-408,-408},{1129,1135},{1130,0},{0,1131}
,{1132,0},{1133,1134},{-409,-409},{-410,-410},{1136,0},{0,1137},{1138,0},{1139,1140},{-411,-411},{-412,-412}
,{1142,1160},{1143,1150},{1144,1149},{0,1145},{1146,0},{1147,1148},{-413,-413},{-414,-414},{-415,-415},{1151,1156}
,{0,1152},{1153,0},{1154,1155},{-416,-416},{-417,-417},{0,1157},{1158,1159},{-418,-418},{-419,-419},{1161,1164}
,{1162,1163},{-420,-420},{-421,-421},{1165,1166},{-422,-422},{0,1167},{1168,1169},{-423,-423},{-424,-424},{1171,1198}
,{1172,0},{1173,1184},{0,1174},{1175,0},{1176,0},{1177,1178},{-425,-425},{1179,0},{1180,1183},{1181,1182}
,{-426,-426},{-427,-427},{-428,-428},{0,1185},{1186,0},{1187,1197},{0,1188},{1189,1194},{1190,1193},{1191,1192}
,{-429,-429},{-430,-430},{-431,-431},{1195,1196},{-432,-432},{-433,-433},{-434,-434},{1199,0},{1200,1224},{0,1201}
,{1202,1217},{1203,0},{1204,1210},{1205,1209},{1206,0},{1207,1208},{-435,-435},{-436,-436},{-437,-437},{1211,1214}
,{1212,1213},{-438,-438},{-439,-439},{1215,1216},{-440,-440},{-441,-441},{1218,0},{1219,1220},{-442,-442},{0,1221}
,{1222,1223},{-443,-443},{-444,-444},{0,1225},{1226,1233},{1227,1232},{0,1228},{0,1229},{1230,1231},{-445,-445}
,{-446,-446},{-447,-447},{1234,1239},{0,1235},{0,1236},{1237,1238},{-448,-448},{-449,-449},{-450,-450},{1241,1508}
,{1242,1342},{1243,1289},{1244,1266},{1245,1249},{1246,0},{1247,1248},{-451,-451},{-452,-452},{1250,0},{1251,1255}
,{1252,0},{1253,1254},{-453,-453},{-454,-454},{1256,0},{1257,1260},{1258,1259},{-455,-455},{-456,-456},{1261,1262}
,{-457,-457},{1263,0},{1264,1265},{-458,-458},{-459,-459},{1267,1268},{-460,-460},{1269,0},{0,1270},{1271,1281}
,{1272,1275},{1273,1274},{-461,-461},{-462,-462},{1276,1277},{-463,-463},{1278,0},{1279,1280},{-464,-464},{-465,-465}
,{1282,1283},{-466,-466},{0,1284},{1285,1288},{1286,1287},{-467,-467},{-468,-468},{-469,-469},{1290,1311},{1291,1301}
,{1292,0},{0,1293},{1294,0},{1295,0},{1296,1297},{-470,-470},{1298,0},{1299,1300},{-471,-471},{-472,-472}
,{1302,0},{0,1303},{1304,0},{1305,1310},{0,1306},{1307,0},{1308,1309},{-473,-473},{-474,-474},{-475,-475}
,{1312,1322},{1313,0},{0,1314},{1315,0},{1316,0},{1317,1318},{-476,-476},{1319,0},{1320,1321},{-477,-477}
,{-478,-478},{1323,0},{0,1324},{1325,1332},{1326,1331},{0,1327},{1328,0},{1329,1330},{-479,-479},{-480,-480}
,{-481,-481},{1333,1338},{0,1334},{1335,0},{1336,1337},{-482,-482},{-483,-483},{0,1339},{1340,1341},{-484,-484}
,{-485,-485},{1343,1437},{1344,1403},{1345,1374},{1346,1359},{1347,1351},{1348,0},{1349,1350},{-486,-486},{-487,-487}
,{1352,0},{1353,1354},{-488,-488},{1355,0},{1356,0},{1357,1358},{-489,-489},{-490,-490},{1360,1368},{1361,0}
,{0,1362},{1363,0},{1364,1367},{1365,1366},{-491,-491},{-492,-492},{-493,-493},{1369,0},{0,1370},{1371,0}
,{1372,1373},{-494,-494},{-495,-495},{1375,1385},{1376,1377},{-496,-496},{1378,0},{0,1379},{1380,1384},{1381,0}
,{1382,1383},{-497,-497},{-498,-498},{-499,-499},{1386,1394},{1387,0},{0,1388},{1389,0},{1390,1393},{1391,1392}
,{-500,-500},{-501,-501},{-502,-502},{1395,0},{0,1396},{1397,1400},{1398,1399},{-503,-503},{-504,-504},{1401,1402}
,{-505,-505},{-506,-506},{1404,1416},{1405,1415},{0,1406},{1407,0},{1408,1409},{-507,-507},{1410,0},{1411,1414}
,{1412,1413},{-508,-508},{-509,-509},{-510,-510},{-511,-511},{1417,1430},{0,1418},{1419,1429},{0,1420},{1421,1426}
,{1422,1425},{1423,1424},{-512,-512},{-513,-513},{-514,-514},{1427,1428},{-515,-515},{-516,-516},{-517,-517},{0,1431}
,{1432,1436},{0,1433},{1434,1435},{-518,-518},{-519,-519},{-520,-520},{1438,1471},{1439,1462},{1440,1452},{0,1441}
,{1442,0},{1443,1449},{1444,1448},{1445,0},{1446,1447},{-521,-521},{-522,-522},{-523,-523},{1450,1451},{-524,-524}
,{-525,-525},{0,1453},{1454,0},{0,1455},{1456,1459},{1457,1458},{-526,-526},{-527,-527},{1460,1461},{-528,-528}
,{-529,-529},{1463,1464},{-530,-530},{0,1465},{1466,0},{0,1467},{0,1468},{1469,1470},{-531,-531},{-532,-532}
,{1472,1495},{1473,1489},{0,1474},{1475,0},{1476,1482},{1477,1481},{1478,0},{1479,1480},{-533,-533},{-534,-534}
,{-535,-535},{1483,1486},{1484,1485},{-536,-536},{-537,-537},{1487,1488},{-538,-538},{-539,-539},{0,1490},{1491,0}
,{0,1492},{1493,1494},{-540,-540},{-541,-541},{1496,1504},{0,1497},{1498,1503},{0,1499},{0,1500},{1501,1502}
,{-542,-542},{-543,-543},{-544,-544},{0,1505},{1506,1507},{-545,-545},{-546,-546},{1509,1618},{1510,1576},{1511,1563}
,{0,1512},{1513,1540},{1514,1525},{1515,1522},{1516,1519},{1517,1518},{-547,-547},{-548,-548},{1520,1521},{-549,-549}
,{-550,-550},{1523,1524},{-551,-551},{-552,-552},{1526,1533},{1527,1528},{-553,-553},{0,1529},{1530,0},{1531,1532}
,{-554,-554},{-555,-555},{1534,1535},{-556,-556},{0,1536},{1537,0},{1538,1539},{-557,-557},{-558,-558},{1541,1556}
,{1542,1549},{0,1543},{1544,1545},{-559,-559},{1546,0},{1547,1548},{-560,-560},{-561,-561},{0,1550},{0,1551}
,{1552,1555},{1553,1554},{-562,-562},{-563,-563},{-564,-564},{1557,1558},{-565,-565},{0,1559},{0,1560},{1561,1562}
,{-566,-566},{-567,-567},{0,1564},{1565,1575},{0,1566},{0,1567},{1568,1569},{-568,-568},{0,1570},{1571,1574}
,{1572,1573},{-569,-569},{-570,-570},{-571,-571},{-572,-572},{1577,1603},{0,1578},{1579,1595},{0,1580},{1581,1588}
,{1582,1587},{0,1583},{1584,0},{1585,1586},{-573,-573},{-574,-574},{-575,-575},{1589,1594},{0,1590},{1591,0}
,{1592,1593},{-576,-576},{-577,-577},{-578,-578},{0,1596},{1597,1598},{-579,-579},{0,1599},{0,1600},{1601,1602}
,{-580,-580},{-581,-581},{0,1604},{1605,1617},{0,1606},{0,1607},{1608,1613},{0,1609},{1610,0},{1611,1612}
,{-582,-582},{-583,-583},{0,1614},{1615,1616},{-584,-584},{-585,-585},{-586,-586},{1619,1643},{1620,1642},{0,1621}
,{0,1622},{1623,1635},{1624,1634},{0,1625},{1626,1631},{1627,1630},{1628,1629},{-587,-587},{-588,-588},{-589,-589}
,{1632,1633},{-590,-590},{-591,-591},{-592,-592},{1636,1641},{0,1637},{0,1638},{1639,1640},{-593,-593},{-594,-594}
,{-595,-595},{-596,-596},{1644,1654},{0,1645},{0,1646},{0,1647},{1648,1653},{0,1649},{0,1650},{1651,1652}
,{-597,-597},{-598,-598},{-599,-599},{-600,-600},{1656,1899},{1657,1753},{1658,1690},{0,1659},{1660,1672},{1661,0}
,{1662,0},{1663,1664},{-601,-601},{1665,0},{1666,0},{1667,1668},{-602,-602},{1669,0},{1670,1671},{-603,-603}
,{-604,-604},{1673,0},{1674,0},{0,1675},{1676,1683},{1677,0},{1678,1679},{-605,-605},{1680,0},{1681,1682}
,{-606,-606},{-607,-607},{1684,0},{0,1685},{1686,1689},{1687,1688},{-608,-608},{-609,-609},{-610,-610},{0,1691}
,{1692,1726},{1693,0},{1694,1704},{1695,1696},{-611,-611},{1697,0},{1698,0},{1699,1703},{1700,0},{1701,1702}
,{-612,-612},{-613,-613},{-614,-614},{1705,1714},{1706,0},{1707,1713},{1708,0},{1709,1712},{1710,1711},{-615,-615}
,{-616,-616},{-617,-617},{-618,-618},{1715,0},{1716,1723},{1717,1720},{1718,1719},{-619,-619},{-620,-620},{1721,1722}
,{-621,-621},{-622,-622},{1724,1725},{-623,-623},{-624,-624},{1727,0},{1728,1741},{0,1729},{1730,1740},{1731,0}
,{1732,1737},{1733,1736},{1734,1735},{-625,-625},{-626,-626},{-627,-627},{1738,1739},{-628,-628},{-629,-629},{-630,-630}
,{0,1742},{1743,1750},{1744,1747},{1745,1746},{-631,-631},{-632,-632},{1748,1749},{-633,-633},{-634,-634},{1751,1752}
,{-635,-635},{-636,-636},{1754,1855},{0,1755},{1756,1828},{1757,1801},{1758,1778},{1759,1765},{1760,1764},{1761,0}
,{1762,1763},{-637,-637},{-638,-638},{-639,-639},{1766,1772},{1767,0},{0,1768},{1769,0},{1770,1771},{-640,-640}
,{-641,-641},{1773,0},{0,1774},{1775,0},{1776,1777},{-642,-642},{-643,-643},{1779,1794},{1780,1787},{1781,0}
,{1782,1783},{-644,-644},{1784,0},{1785,1786},{-645,-645},{-646,-646},{1788,0},{0,1789},{1790,1793},{1791,1792}
,{-647,-647},{-648,-648},{-649,-649},{1795,1796},{-650,-650},{1797,0},{0,1798},{1799,1800},{-651,-651},{-652,-652}
,{1802,1811},{1803,1804},{-653,-653},{0,1805},{1806,0},{0,1807},{1808,0},{1809,1810},{-654,-654},{-655,-655}
,{1812,1821},{0,1813},{1814,1820},{0,1815},{1816,1819},{1817,1818},{-656,-656},{-657,-657},{-658,-658},{-659,-659}
,{0,1822},{1823,1827},{0,1824},{1825,1826},{-660,-660},{-661,-661},{-662,-662},{1829,1840},{1830,1839},{0,1831}
,{0,1832},{1833,0},{0,1834},{1835,1838},{1836,1837},{-663,-663},{-664,-664},{-665,-665},{-666,-666},{1841,1850}
,{0,1842},{0,1843},{1844,0},{0,1845},{1846,1849},{1847,1848},{-667,-667},{-668,-668},{-669,-669},{0,1851}
,{0,1852},{1853,1854},{-670,-670},{-671,-671},{0,1856},{1857,1891},{1858,1887},{0,1859},{1860,1877},{1861,1874}
,{1862,1871},{1863,1868},{1864,1867},{1865,1866},{-672,-672},{-673,-673},{-674,-674},{1869,1870},{-675,-675},{-676,-676}
,{1872,1873},{-677,-677},{-678,-678},{1875,1876},{-679,-679},{-680,-680},{1878,1884},{1879,1883},{0,1880},{1881,1882}
,{-681,-681},{-682,-682},{-683,-683},{1885,1886},{-684,-684},{-685,-685},{0,1888},{1889,1890},{-686,-686},{-687,-687}
,{1892,1898},{0,1893},{0,1894},{0,1895},{1896,1897},{-688,-688},{-689,-689},{-690,-690},{1900,1964},{1901,1932}
,{0,1902},{0,1903},{1904,1921},{1905,0},{0,1906},{1907,1914},{1908,0},{1909,1910},{-691,-691},{1911,0}
,{1912,1913},{-692,-692},{-693,-693},{1915,0},{0,1916},{1917,1920},{1918,1919},{-694,-694},{-695,-695},{-696,-696}
,{1922,0},{0,1923},{0,1924},{1925,1931},{0,1926},{1927,1930},{1928,1929},{-697,-697},{-698,-698},{-699,-699}
,{-700,-700},{0,1933},{0,1934},{1935,1961},{1936,1954},{0,1937},{1938,1951},{1939,1948},{1940,1945},{1941,1944}
,{1942,1943},{-701,-701},{-702,-702},{-703,-703},{1946,1947},{-704,-704},{-705,-705},{1949,1950},{-706,-706},{-707,-707}
,{1952,1953},{-708,-708},{-709,-709},{0,1955},{1956,1960},{0,1957},{1958,1959},{-710,-710},{-711,-711},{-712,-712}
,{1962,1963},{-713,-713},{-714,-714},{1965,1980},{0,1966},{0,1967},{0,1968},{1969,1979},{0,1970},{0,1971}
,{1972,1978},{0,1973},{1974,1977},{1975,1976},{-715,-715},{-716,-716},{-717,-717},{-718,-718},{-719,-719},{-720,-720}
};

int cicli[720][10] = {{0,5,0,1,4,1,2,3,2,-1},
 {0,5,1,4,0,2,3,2,-1},
 {0,5,2,3,1,4,0,-1},
 {0,5,3,1,4,0,-1},
 {0,5,4,0,1,3,1,-1},
 {0,4,0,1,3,1,-1},
 {0,5,0,1,4,2,3,1,-1},
 {0,5,1,4,2,3,0,-1},
 {0,5,0,1,4,3,1,-1},
 {0,5,0,1,3,1,-1},
 {0,4,5,0,1,3,1,-1},
 {0,5,1,4,3,0,-1},
 {0,5,2,1,4,3,0,-1},
 {0,5,1,3,0,-1},
 {0,4,5,1,3,0,-1},
 {0,5,2,1,3,0,-1},
 {0,5,3,0,1,2,1,-1},
 {0,4,5,2,1,3,0,-1},
 {0,4,5,3,0,1,2,1,-1},
 {0,3,0,1,2,1,4,5,4,-1},
 {0,5,2,3,0,1,4,1,-1},
 {0,5,3,0,1,4,1,-1},
 {0,5,4,1,3,0,-1},
 {0,4,1,3,0,-1},
 {0,5,3,0,1,4,2,1,-1},
 {0,5,4,2,1,3,0,-1},
 {0,4,2,1,3,0,-1},
 {0,5,4,3,0,1,2,1,-1},
 {0,4,3,0,1,2,1,-1},
 {0,3,0,1,2,1,-1},
 {0,5,0,1,4,1,-1},
 {0,5,0,1,4,2,1,-1},
 {0,5,1,4,2,0,-1},
 {0,5,0,1,3,4,1,-1},
 {0,4,1,3,5,0,-1},
 {0,5,0,1,3,4,2,1,-1},
 {0,5,1,3,4,2,0,-1},
 {0,5,0,1,2,1,3,4,3,-1},
 {0,5,1,2,0,3,4,3,-1},
 {0,5,2,0,3,4,3,-1},
 {0,4,2,1,3,5,0,-1},
 {0,4,2,0,1,3,5,1,-1},
 {0,4,3,5,0,1,2,1,-1},
 {0,3,5,0,1,2,1,-1},
 {0,4,3,5,1,2,0,-1},
 {0,4,3,5,2,0,-1},
 {0,3,5,1,2,0,-1},
 {0,3,5,2,0,-1},
 {0,2,0,3,5,3,-1},
 {0,5,1,4,0,-1},
 {0,5,2,1,4,0,-1},
 {0,5,3,2,1,4,0,-1},
 {0,5,4,0,1,3,2,1,-1},
 {0,4,0,1,3,2,1,-1},
 {0,5,2,0,1,4,1,-1},
 {0,5,3,2,0,1,4,1,-1},
 {0,5,4,1,3,2,0,-1},
 {0,4,1,3,2,0,-1},
 {0,5,1,3,4,0,-1},
 {0,5,2,1,3,4,0,-1},
 {0,5,3,4,0,1,2,1,-1},
 {0,4,0,1,3,5,1,-1},
 {0,4,0,1,3,5,2,1,-1},
 {0,4,0,1,2,1,3,5,3,-1},
 {0,3,5,4,0,1,2,1,-1},
 {0,5,4,0,1,2,1,-1},
 {0,4,0,1,2,1,-1},
 {0,3,4,0,1,2,1,-1},
 {0,5,2,0,1,3,4,1,-1},
 {0,5,3,4,1,2,0,-1},
 {0,5,3,4,2,0,-1},
 {0,4,1,3,5,2,0,-1},
 {0,4,1,2,0,3,5,3,-1},
 {0,3,5,4,1,2,0,-1},
 {0,4,2,0,3,5,3,-1},
 {0,3,5,4,2,0,-1},
 {0,2,0,3,5,4,3,-1},
 {0,5,4,1,2,0,-1},
 {0,4,1,2,0,-1},
 {0,5,4,2,0,-1},
 {0,4,2,0,-1},
 {0,3,4,1,2,0,-1},
 {0,3,4,2,0,-1},
 {0,2,0,3,4,3,-1},
 {0,5,0,1,4,3,2,1,-1},
 {0,5,1,4,3,2,0,-1},
 {0,5,0,1,3,2,1,-1},
 {0,4,5,0,1,3,2,1,-1},
 {0,5,1,3,2,0,-1},
 {0,4,5,1,3,2,0,-1},
 {0,5,2,0,1,4,3,1,-1},
 {0,5,2,0,1,3,1,-1},
 {0,5,3,1,2,0,-1},
 {0,4,5,2,0,1,3,1,-1},
 {0,4,5,3,1,2,0,-1},
 {0,3,1,2,0,4,5,4,-1},
 {0,5,0,1,2,1,-1},
 {0,4,5,0,1,2,1,-1},
 {0,5,1,2,0,-1},
 {0,5,2,0,-1},
 {0,4,5,1,2,0,-1},
 {0,4,5,2,0,-1},
 {0,3,4,5,0,1,2,1,-1},
 {0,3,4,5,1,2,0,-1},
 {0,3,4,5,2,0,-1},
 {0,2,0,3,4,5,3,-1},
 {0,5,3,2,0,-1},
 {0,4,5,3,2,0,-1},
 {0,3,2,0,4,5,4,-1},
 {0,2,0,4,5,4,-1},
 {0,5,3,1,4,2,0,-1},
 {0,5,4,2,0,1,3,1,-1},
 {0,4,2,0,1,3,1,-1},
 {0,5,4,3,1,2,0,-1},
 {0,4,3,1,2,0,-1},
 {0,3,1,2,0,-1},
 {0,5,4,3,2,0,-1},
 {0,4,3,2,0,-1},
 {0,3,2,0,-1},
 {0,2,0,-1},
 {0,5,0,1,3,2,4,1,-1},
 {0,5,0,1,2,4,1,-1},
 {0,5,0,2,4,2,-1},
 {0,5,1,0,2,4,2,-1},
 {0,4,1,3,2,5,0,-1},
 {0,4,1,2,5,0,-1},
 {0,4,2,5,0,-1},
 {0,4,2,5,1,0,-1},
 {0,3,4,1,2,5,0,-1},
 {0,3,4,2,5,0,-1},
 {0,3,4,2,5,1,0,-1},
 {0,2,5,0,3,4,3,-1},
 {0,2,5,1,0,3,4,3,-1},
 {0,1,0,2,5,2,3,4,3,-1},
 {0,5,1,3,2,4,0,-1},
 {0,5,2,4,0,1,3,1,-1},
 {0,5,3,1,2,4,0,-1},
 {0,5,4,0,1,2,3,1,-1},
 {0,4,0,1,2,3,1,-1},
 {0,5,1,2,4,0,-1},
 {0,5,2,4,0,-1},
 {0,5,2,4,1,0,-1},
 {0,5,3,2,4,0,-1},
 {0,5,4,0,2,3,2,-1},
 {0,4,0,2,3,2,-1},
 {0,5,3,2,4,1,0,-1},
 {0,5,4,1,0,2,3,2,-1},
 {0,4,1,0,2,3,2,-1},
 {0,4,0,1,3,2,5,1,-1},
 {0,4,0,1,3,1,2,5,2,-1},
 {0,4,0,1,2,5,3,1,-1},
 {0,3,1,2,5,4,0,-1},
 {0,3,1,2,4,0,-1},
 {0,4,0,1,2,5,1,-1},
 {0,4,0,2,5,2,-1},
 {0,4,1,0,2,5,2,-1},
 {0,3,4,0,1,2,5,1,-1},
 {0,3,4,0,2,5,2,-1},
 {0,2,5,3,4,0,-1},
 {0,3,4,1,0,2,5,2,-1},
 {0,2,5,3,4,1,0,-1},
 {0,1,0,2,5,3,4,2,-1},
 {0,4,0,2,5,3,2,-1},
 {0,3,2,5,4,0,-1},
 {0,3,2,4,0,-1},
 {0,4,1,0,2,5,3,2,-1},
 {0,3,2,5,4,1,0,-1},
 {0,3,2,4,1,0,-1},
 {0,2,5,4,0,-1},
 {0,2,4,0,-1},
 {0,2,5,4,1,0,-1},
 {0,1,0,2,5,4,2,-1},
 {0,2,4,1,0,-1},
 {0,1,0,2,4,2,-1},
 {0,5,0,1,3,1,2,4,2,-1},
 {0,5,0,1,2,4,3,1,-1},
 {0,5,1,3,0,2,4,2,-1},
 {0,5,1,2,4,3,0,-1},
 {0,5,2,4,3,0,-1},
 {0,5,0,1,2,3,1,-1},
 {0,4,5,0,1,2,3,1,-1},
 {0,5,1,2,3,0,-1},
 {0,5,2,3,0,-1},
 {0,4,5,1,2,3,0,-1},
 {0,4,5,2,3,0,-1},
 {0,5,3,0,-1},
 {0,4,5,3,0,-1},
 {0,3,0,4,5,4,-1},
 {0,5,0,2,4,3,2,-1},
 {0,5,1,0,2,4,3,2,-1},
 {0,5,2,4,3,1,0,-1},
 {0,5,0,2,3,2,-1},
 {0,5,1,0,2,3,2,-1},
 {0,4,5,0,2,3,2,-1},
 {0,4,5,1,0,2,3,2,-1},
 {0,5,2,3,1,0,-1},
 {0,4,5,2,3,1,0,-1},
 {0,5,3,1,0,-1},
 {0,4,5,3,1,0,-1},
 {0,3,1,0,4,5,4,-1},
 {0,4,2,5,0,1,3,1,-1},
 {0,4,3,1,2,5,0,-1},
 {0,3,1,2,5,0,-1},
 {0,4,2,5,1,3,0,-1},
 {0,4,3,0,1,2,5,1,-1},
 {0,4,3,0,2,5,2,-1},
 {0,3,0,1,2,5,1,-1},
 {0,3,0,2,5,2,-1},
 {0,2,5,3,0,-1},
 {0,3,1,2,4,5,0,-1},
 {0,3,0,1,2,4,5,1,-1},
 {0,3,0,2,4,5,2,-1},
 {0,2,4,5,3,0,-1},
 {0,2,3,0,4,5,4,-1},
 {0,4,3,2,5,0,-1},
 {0,4,3,2,5,1,0,-1},
 {0,3,2,5,0,-1},
 {0,3,2,5,1,0,-1},
 {0,2,5,0,-1},
 {0,2,5,1,0,-1},
 {0,1,0,2,5,2,-1},
 {0,4,3,1,0,2,5,2,-1},
 {0,3,1,0,2,5,2,-1},
 {0,2,5,3,1,0,-1},
 {0,1,0,2,5,3,2,-1},
 {0,3,2,4,5,0,-1},
 {0,3,2,4,5,1,0,-1},
 {0,2,4,5,0,-1},
 {0,2,4,5,1,0,-1},
 {0,1,0,2,4,5,2,-1},
 {0,3,1,0,2,4,5,2,-1},
 {0,2,4,5,3,1,0,-1},
 {0,2,3,1,0,4,5,4,-1},
 {0,1,0,2,4,5,3,2,-1},
 {0,1,0,2,3,2,4,5,4,-1},
 {0,5,2,4,1,3,0,-1},
 {0,5,3,0,1,2,4,1,-1},
 {0,5,4,1,2,3,0,-1},
 {0,4,1,2,3,0,-1},
 {0,5,3,0,2,4,2,-1},
 {0,5,4,2,3,0,-1},
 {0,4,2,3,0,-1},
 {0,5,4,3,0,-1},
 {0,4,3,0,-1},
 {0,3,0,-1},
 {0,5,3,1,0,2,4,2,-1},
 {0,5,4,2,3,1,0,-1},
 {0,4,2,3,1,0,-1},
 {0,5,4,3,1,0,-1},
 {0,4,3,1,0,-1},
 {0,3,1,0,-1},
 {0,4,1,3,0,2,5,2,-1},
 {0,4,1,2,5,3,0,-1},
 {0,3,0,1,2,5,4,1,-1},
 {0,3,0,1,2,4,1,-1},
 {0,4,2,5,3,0,-1},
 {0,3,0,2,5,4,2,-1},
 {0,2,5,4,3,0,-1},
 {0,3,0,2,4,2,-1},
 {0,2,4,3,0,-1},
 {0,2,3,0,-1},
 {0,4,2,5,3,1,0,-1},
 {0,3,1,0,2,5,4,2,-1},
 {0,2,5,4,3,1,0,-1},
 {0,3,1,0,2,4,2,-1},
 {0,2,4,3,1,0,-1},
 {0,1,0,2,5,4,3,2,-1},
 {0,1,0,2,4,3,2,-1},
 {0,2,3,1,0,-1},
 {0,1,0,2,3,2,-1},
 {0,5,0,1,2,3,4,1,-1},
 {0,5,0,2,3,4,2,-1},
 {0,5,1,0,2,3,4,2,-1},
 {0,4,1,2,3,5,0,-1},
 {0,4,2,3,5,0,-1},
 {0,4,2,3,5,1,0,-1},
 {0,5,0,3,4,3,-1},
 {0,5,1,0,3,4,3,-1},
 {0,5,2,1,0,3,4,3,-1},
 {0,4,3,5,0,-1},
 {0,4,3,5,1,0,-1},
 {0,3,5,0,-1},
 {0,3,5,1,0,-1},
 {0,4,3,5,2,1,0,-1},
 {0,3,5,2,1,0,-1},
 {0,2,1,0,3,5,3,-1},
 {0,3,5,0,1,2,4,1,-1},
 {0,3,5,0,2,4,2,-1},
 {0,3,5,1,0,2,4,2,-1},
 {0,2,4,3,5,0,-1},
 {0,2,4,3,5,1,0,-1},
 {0,1,0,2,4,3,5,2,-1},
 {0,2,3,5,0,-1},
 {0,2,3,5,1,0,-1},
 {0,1,0,2,3,5,2,-1},
 {0,1,0,3,5,3,-1},
 {0,5,1,2,3,4,0,-1},
 {0,5,2,3,4,0,-1},
 {0,5,3,4,0,-1},
 {0,5,2,3,4,1,0,-1},
 {0,5,3,4,1,0,-1},
 {0,4,0,1,2,3,5,1,-1},
 {0,4,0,2,3,5,2,-1},
 {0,4,0,3,5,3,-1},
 {0,3,5,4,0,-1},
 {0,4,1,0,2,3,5,2,-1},
 {0,4,1,0,3,5,3,-1},
 {0,3,5,4,1,0,-1},
 {0,5,4,0,-1},
 {0,4,0,-1},
 {0,5,4,1,0,-1},
 {0,4,1,0,-1},
 {0,3,4,0,-1},
 {0,3,4,1,0,-1},
 {0,5,3,4,2,1,0,-1},
 {0,4,2,1,0,3,5,3,-1},
 {0,3,5,4,2,1,0,-1},
 {0,2,1,0,3,5,4,3,-1},
 {0,5,4,2,1,0,-1},
 {0,4,2,1,0,-1},
 {0,3,4,2,1,0,-1},
 {0,2,1,0,3,4,3,-1},
 {0,3,5,1,2,4,0,-1},
 {0,3,5,2,4,0,-1},
 {0,2,4,0,3,5,3,-1},
 {0,2,3,5,4,0,-1},
 {0,3,5,2,4,1,0,-1},
 {0,2,4,1,0,3,5,3,-1},
 {0,1,0,2,4,2,3,5,3,-1},
 {0,2,3,5,4,1,0,-1},
 {0,1,0,2,3,5,4,2,-1},
 {0,2,3,4,0,-1},
 {0,2,3,4,1,0,-1},
 {0,1,0,2,3,4,2,-1},
 {0,1,0,3,5,4,3,-1},
 {0,1,0,3,4,3,-1},
 {0,5,0,-1},
 {0,5,1,0,-1},
 {0,4,5,0,-1},
 {0,4,5,1,0,-1},
 {0,5,2,1,0,-1},
 {0,4,5,2,1,0,-1},
 {0,3,4,5,0,-1},
 {0,3,4,5,1,0,-1},
 {0,3,4,5,2,1,0,-1},
 {0,2,1,0,3,4,5,3,-1},
 {0,5,3,2,1,0,-1},
 {0,4,5,3,2,1,0,-1},
 {0,3,2,1,0,4,5,4,-1},
 {0,2,1,0,4,5,4,-1},
 {0,2,3,4,5,0,-1},
 {0,2,3,4,5,1,0,-1},
 {0,1,0,2,3,4,5,2,-1},
 {0,1,0,3,4,5,3,-1},
 {0,1,0,4,5,4,-1},
 {0,5,4,3,2,1,0,-1},
 {0,4,3,2,1,0,-1},
 {0,3,2,1,0,-1},
 {0,2,1,0,-1},
 {0,1,0,-1},
 {0,4,1,5,0,2,3,2,-1},
 {0,3,2,4,1,5,0,-1},
 {0,2,4,1,5,0,-1},
 {0,1,5,0,2,4,2,-1},
 {1,5,1,2,4,2,-1},
 {0,4,0,1,5,1,2,3,2,-1},
 {0,4,0,1,5,2,3,1,-1},
 {0,4,0,1,5,3,1,-1},
 {0,3,1,5,4,0,-1},
 {0,3,1,4,0,-1},
 {0,3,2,4,0,1,5,1,-1},
 {0,2,4,0,1,5,1,-1},
 {0,1,5,2,4,0,-1},
 {1,5,2,4,1,-1},
 {0,3,1,5,2,4,0,-1},
 {0,2,4,0,1,5,3,1,-1},
 {0,2,3,1,5,4,0,-1},
 {0,2,3,1,4,0,-1},
 {0,1,5,3,2,4,0,-1},
 {1,5,3,2,4,1,-1},
 {0,1,5,4,0,2,3,2,-1},
 {0,1,4,0,2,3,2,-1},
 {1,5,4,1,2,3,2,-1},
 {1,4,1,2,3,2,-1},
 {0,4,2,3,1,5,0,-1},
 {0,4,2,3,0,1,5,1,-1},
 {0,4,3,1,5,0,-1},
 {0,3,1,5,0,-1},
 {0,3,1,4,5,0,-1},
 {0,4,3,0,1,5,1,-1},
 {0,3,0,1,5,1,-1},
 {0,4,3,0,1,5,2,1,-1},
 {0,3,0,1,5,2,1,-1},
 {0,2,1,5,3,0,-1},
 {0,3,0,1,4,5,1,-1},
 {0,3,0,1,4,5,2,1,-1},
 {0,2,1,4,5,3,0,-1},
 {0,2,1,3,0,4,5,4,-1},
 {0,3,1,5,0,2,4,2,-1},
 {0,2,4,3,1,5,0,-1},
 {0,1,5,0,2,4,3,2,-1},
 {1,5,1,2,4,3,2,-1},
 {0,3,0,1,5,1,2,4,2,-1},
 {0,2,4,3,0,1,5,1,-1},
 {0,1,5,2,4,3,0,-1},
 {1,5,2,4,3,1,-1},
 {0,2,3,1,5,0,-1},
 {0,2,3,1,4,5,0,-1},
 {0,1,5,0,2,3,2,-1},
 {1,5,1,2,3,2,-1},
 {0,1,4,5,0,2,3,2,-1},
 {1,4,5,1,2,3,2,-1},
 {0,2,3,0,1,5,1,-1},
 {0,1,5,2,3,0,-1},
 {0,1,5,3,0,-1},
 {0,2,3,0,1,4,5,1,-1},
 {0,1,4,5,2,3,0,-1},
 {0,1,4,5,3,0,-1},
 {0,1,3,0,4,5,4,-1},
 {1,5,2,3,1,-1},
 {1,5,3,1,-1},
 {1,4,5,2,3,1,-1},
 {1,4,5,3,1,-1},
 {1,3,1,4,5,4,-1},
 {0,4,1,5,2,3,0,-1},
 {0,4,1,5,3,0,-1},
 {0,3,0,1,5,4,1,-1},
 {0,3,0,1,4,1,-1},
 {0,4,2,1,5,3,0,-1},
 {0,3,0,1,5,4,2,1,-1},
 {0,3,0,1,4,2,1,-1},
 {0,2,1,5,4,3,0,-1},
 {0,2,1,4,3,0,-1},
 {0,2,1,3,0,-1},
 {0,3,0,1,5,2,4,1,-1},
 {0,2,4,1,5,3,0,-1},
 {0,1,5,3,0,2,4,2,-1},
 {0,2,3,0,1,5,4,1,-1},
 {0,2,3,0,1,4,1,-1},
 {0,1,5,4,2,3,0,-1},
 {0,1,4,2,3,0,-1},
 {1,5,3,1,2,4,2,-1},
 {1,5,4,2,3,1,-1},
 {1,4,2,3,1,-1},
 {0,1,5,4,3,0,-1},
 {0,1,4,3,0,-1},
 {0,1,3,0,-1},
 {1,5,4,3,1,-1},
 {1,4,3,1,-1},
 {1,3,1,-1},
 {0,4,1,5,0,-1},
 {0,3,4,1,5,0,-1},
 {0,4,2,1,5,0,-1},
 {0,4,2,0,1,5,1,-1},
 {0,3,4,2,1,5,0,-1},
 {0,2,1,5,0,3,4,3,-1},
 {0,3,4,2,0,1,5,1,-1},
 {0,2,0,1,5,1,3,4,3,-1},
 {0,1,5,2,0,3,4,3,-1},
 {0,3,5,0,1,4,1,-1},
 {0,3,5,0,1,4,2,1,-1},
 {0,2,1,4,3,5,0,-1},
 {0,3,5,1,4,2,0,-1},
 {0,2,0,1,4,3,5,1,-1},
 {0,1,4,3,5,2,0,-1},
 {0,2,1,3,5,0,-1},
 {0,2,0,1,3,5,1,-1},
 {0,1,3,5,2,0,-1},
 {0,1,2,0,3,5,3,-1},
 {0,2,3,4,1,5,0,-1},
 {0,1,5,0,2,3,4,2,-1},
 {1,5,1,2,3,4,2,-1},
 {0,1,5,0,3,4,3,-1},
 {1,5,1,3,4,3,-1},
 {1,5,2,1,3,4,3,-1},
 {0,2,3,5,0,1,4,1,-1},
 {0,1,4,2,3,5,0,-1},
 {1,4,2,3,5,1,-1},
 {0,1,4,3,5,0,-1},
 {1,4,3,5,1,-1},
 {1,4,3,5,2,1,-1},
 {0,1,3,5,0,-1},
 {1,3,5,1,-1},
 {1,3,5,2,1,-1},
 {1,2,1,3,5,3,-1},
 {0,4,0,1,5,1,-1},
 {0,4,0,1,5,2,1,-1},
 {0,3,4,0,1,5,1,-1},
 {0,3,4,0,1,5,2,1,-1},
 {0,2,1,5,3,4,0,-1},
 {0,4,0,1,5,3,2,1,-1},
 {0,3,2,1,5,4,0,-1},
 {0,3,2,1,4,0,-1},
 {0,2,1,5,4,0,-1},
 {0,2,1,4,0,-1},
 {0,4,1,5,2,0,-1},
 {0,3,4,1,5,2,0,-1},
 {0,2,0,1,5,3,4,1,-1},
 {0,1,5,3,4,2,0,-1},
 {0,4,1,5,3,2,0,-1},
 {0,3,2,0,1,5,4,1,-1},
 {0,3,2,0,1,4,1,-1},
 {0,2,0,1,5,4,1,-1},
 {0,2,0,1,4,1,-1},
 {0,1,5,4,2,0,-1},
 {0,1,4,2,0,-1},
 {0,3,5,1,4,0,-1},
 {0,3,5,2,1,4,0,-1},
 {0,2,1,4,0,3,5,3,-1},
 {0,2,1,3,5,4,0,-1},
 {0,2,1,3,4,0,-1},
 {0,3,5,2,0,1,4,1,-1},
 {0,2,0,1,4,1,3,5,3,-1},
 {0,2,0,1,3,5,4,1,-1},
 {0,1,4,2,0,3,5,3,-1},
 {0,1,3,5,4,2,0,-1},
 {0,1,2,0,3,5,4,3,-1},
 {0,2,0,1,3,4,1,-1},
 {0,1,3,4,2,0,-1},
 {0,1,2,0,3,4,3,-1},
 {0,2,3,4,0,1,5,1,-1},
 {0,1,5,2,3,4,0,-1},
 {1,5,2,3,4,1,-1},
 {0,1,5,3,4,0,-1},
 {1,5,3,4,1,-1},
 {0,1,5,4,0,-1},
 {0,1,4,0,-1},
 {1,5,4,1,-1},
 {1,4,1,-1},
 {1,5,3,4,2,1,-1},
 {1,5,4,2,1,-1},
 {1,4,2,1,-1},
 {0,2,3,5,1,4,0,-1},
 {0,1,4,0,2,3,5,2,-1},
 {1,4,1,2,3,5,2,-1},
 {0,1,4,0,3,5,3,-1},
 {0,1,3,5,4,0,-1},
 {1,4,1,3,5,3,-1},
 {1,3,5,4,1,-1},
 {0,1,3,4,0,-1},
 {1,3,4,1,-1},
 {1,4,2,1,3,5,3,-1},
 {1,3,5,4,2,1,-1},
 {1,2,1,3,5,4,3,-1},
 {1,3,4,2,1,-1},
 {1,2,1,3,4,3,-1},
 {0,4,3,2,1,5,0,-1},
 {0,3,2,1,5,0,-1},
 {0,4,3,2,0,1,5,1,-1},
 {0,3,2,0,1,5,1,-1},
 {0,3,2,1,4,5,0,-1},
 {0,3,2,0,1,4,5,1,-1},
 {0,2,1,5,0,-1},
 {0,2,0,1,5,1,-1},
 {0,1,5,2,0,-1},
 {0,2,1,4,5,0,-1},
 {0,2,0,1,4,5,1,-1},
 {0,1,4,5,2,0,-1},
 {0,4,3,1,5,2,0,-1},
 {0,3,1,5,2,0,-1},
 {0,2,0,1,5,3,1,-1},
 {0,3,1,4,5,2,0,-1},
 {0,2,0,1,4,5,3,1,-1},
 {0,2,0,1,3,1,4,5,4,-1},
 {0,1,5,3,2,0,-1},
 {0,1,4,5,3,2,0,-1},
 {0,1,3,2,0,4,5,4,-1},
 {0,2,1,3,4,5,0,-1},
 {0,2,0,1,3,4,5,1,-1},
 {0,1,3,4,5,2,0,-1},
 {0,1,2,0,3,4,5,3,-1},
 {0,1,2,0,4,5,4,-1},
 {0,1,5,0,-1},
 {1,5,1,-1},
 {1,5,2,1,-1},
 {0,1,4,5,0,-1},
 {1,4,5,1,-1},
 {1,4,5,2,1,-1},
 {1,5,3,2,1,-1},
 {1,4,5,3,2,1,-1},
 {1,3,2,1,4,5,4,-1},
 {0,1,3,4,5,0,-1},
 {1,3,4,5,1,-1},
 {1,3,4,5,2,1,-1},
 {1,2,1,3,4,5,3,-1},
 {1,2,1,4,5,4,-1},
 {0,4,2,0,1,5,3,1,-1},
 {0,3,1,5,4,2,0,-1},
 {0,3,1,4,2,0,-1},
 {0,2,0,1,5,4,3,1,-1},
 {0,2,0,1,4,3,1,-1},
 {0,2,0,1,3,1,-1},
 {0,1,5,4,3,2,0,-1},
 {0,1,4,3,2,0,-1},
 {0,1,3,2,0,-1},
 {0,1,2,0,-1},
 {1,5,4,3,2,1,-1},
 {1,4,3,2,1,-1},
 {1,3,2,1,-1},
 {1,2,1,-1},
 {0,3,2,5,0,1,4,1,-1},
 {0,2,5,0,1,4,1,-1},
 {0,1,4,2,5,0,-1},
 {1,4,2,5,1,-1},
 {0,2,5,0,1,3,4,1,-1},
 {0,1,3,4,2,5,0,-1},
 {1,3,4,2,5,1,-1},
 {0,1,2,5,0,3,4,3,-1},
 {1,2,5,1,3,4,3,-1},
 {2,5,2,3,4,3,-1},
 {0,3,2,5,1,4,0,-1},
 {0,2,5,1,4,0,-1},
 {0,1,4,0,2,5,2,-1},
 {1,4,1,2,5,2,-1},
 {0,3,1,4,0,2,5,2,-1},
 {0,2,5,3,1,4,0,-1},
 {0,2,5,4,0,1,3,1,-1},
 {0,2,4,0,1,3,1,-1},
 {0,1,4,0,2,5,3,2,-1},
 {0,1,3,2,5,4,0,-1},
 {1,4,1,2,5,3,2,-1},
 {1,3,2,5,4,1,-1},
 {0,1,3,2,4,0,-1},
 {1,3,2,4,1,-1},
 {0,2,5,1,3,4,0,-1},
 {0,1,3,4,0,2,5,2,-1},
 {0,1,2,5,3,4,0,-1},
 {1,3,4,1,2,5,2,-1},
 {1,2,5,3,4,1,-1},
 {2,5,3,4,2,-1},
 {0,1,2,5,4,0,-1},
 {1,2,5,4,1,-1},
 {0,1,2,4,0,-1},
 {1,2,4,1,-1},
 {2,5,4,2,-1},
 {2,4,2,-1},
 {0,3,1,4,2,5,0,-1},
 {0,2,5,0,1,4,3,1,-1},
 {0,2,5,0,1,3,1,-1},
 {0,1,4,3,2,5,0,-1},
 {1,4,3,2,5,1,-1},
 {0,1,3,2,5,0,-1},
 {1,3,2,5,1,-1},
 {0,3,0,1,4,2,5,1,-1},
 {0,2,5,1,4,3,0,-1},
 {0,1,4,3,0,2,5,2,-1},
 {0,2,5,1,3,0,-1},
 {0,1,3,0,2,5,2,-1},
 {0,1,2,5,3,0,-1},
 {1,4,3,1,2,5,2,-1},
 {1,3,1,2,5,2,-1},
 {1,2,5,3,1,-1},
 {0,2,4,5,0,1,3,1,-1},
 {0,1,3,2,4,5,0,-1},
 {1,3,2,4,5,1,-1},
 {0,2,4,5,1,3,0,-1},
 {0,1,3,0,2,4,5,2,-1},
 {0,1,2,4,5,3,0,-1},
 {0,1,2,3,0,4,5,4,-1},
 {1,3,1,2,4,5,2,-1},
 {1,2,4,5,3,1,-1},
 {1,2,3,1,4,5,4,-1},
 {0,1,2,5,0,-1},
 {1,2,5,1,-1},
 {2,5,2,-1},
 {2,5,3,2,-1},
 {0,1,2,4,5,0,-1},
 {1,2,4,5,1,-1},
 {2,4,5,2,-1},
 {2,4,5,3,2,-1},
 {2,3,2,4,5,4,-1},
 {0,3,0,1,4,1,2,5,2,-1},
 {0,2,5,3,0,1,4,1,-1},
 {0,2,5,4,1,3,0,-1},
 {0,1,4,2,5,3,0,-1},
 {0,1,3,0,2,5,4,2,-1},
 {0,2,4,1,3,0,-1},
 {0,1,3,0,2,4,2,-1},
 {0,1,2,5,4,3,0,-1},
 {0,1,2,4,3,0,-1},
 {1,4,2,5,3,1,-1},
 {1,3,1,2,5,4,2,-1},
 {1,3,1,2,4,2,-1},
 {1,2,5,4,3,1,-1},
 {1,2,4,3,1,-1},
 {0,1,2,3,0,-1},
 {1,2,3,1,-1},
 {2,5,4,3,2,-1},
 {2,4,3,2,-1},
 {2,3,2,-1},
 {0,2,4,1,3,5,0,-1},
 {0,1,3,5,0,2,4,2,-1},
 {1,3,5,1,2,4,2,-1},
 {0,1,2,4,3,5,0,-1},
 {1,2,4,3,5,1,-1},
 {2,4,3,5,2,-1},
 {0,1,2,3,5,0,-1},
 {1,2,3,5,1,-1},
 {2,3,5,2,-1},
 {3,5,3,-1},
 {0,2,4,0,1,3,5,1,-1},
 {0,1,3,5,2,4,0,-1},
 {0,1,2,4,0,3,5,3,-1},
 {1,3,5,2,4,1,-1},
 {1,2,4,1,3,5,3,-1},
 {0,1,2,3,5,4,0,-1},
 {1,2,3,5,4,1,-1},
 {2,4,2,3,5,3,-1},
 {2,3,5,4,2,-1},
 {0,1,2,3,4,0,-1},
 {1,2,3,4,1,-1},
 {2,3,4,2,-1},
 {3,5,4,3,-1},
 {3,4,3,-1},
 {0,1,2,3,4,5,0,-1},
 {1,2,3,4,5,1,-1},
 {2,3,4,5,2,-1},
 {3,4,5,3,-1},
 {4,5,4,-1},
 {-1} };

int NMAXK = 6;

//Funzione che stampa un vettore
void printv(int v[], int n){
	int i;
	
	for(i=0;i<n;i++)
		printf(" %i", v[i]);
	
	printf("\n");
}

//Funzione che recupera la chiave della combinazione e il ciclo
// da effettuare per ordinarla
int getkey(int v[], int start){
	int lvett=NMAXK;
	int btf;
	int i,j;
	int chiave=0;
	
	for(i=1;i<lvett;i++){
		for(j=0;j<lvett-i;j++){
			
			//Trovo il bit della chiave da cercare
			btf = v[start+j]<=v[start+j+i]?1:0;
			//printf("btf: %i\n",btf);
			
			//Recupero il puntatore interno al vettore al prossimo bit
			chiave = chiavi[chiave][btf];
			//printf("chiave: %i\n",chiave);
			
			//Se il puntatore punta ad un valore negativo allora lo ritorno
			if(chiavi[chiave][0] < 0) return (chiavi[chiave][0] * -1)-1;
		}
	}
	
	return -1;
}

//Ordino la combinazione usando i cicli
void sortkc(int v[],int start, int chiave){
	int i, startpos, temp, val;
	int lvett = NMAXK;
	
	if(cicli[chiave][0]==-1) return;
	
	startpos = cicli[chiave][0];
	val = v[start + startpos];
	
	for(i=1;cicli[chiave][i]!=-1;i++){
		
		//Se sto ricominciando un ciclo
		if(startpos ==-1){
			startpos=cicli[chiave][i];
			val = v[start + startpos];
		}
		
		//Se sono dentro un ciclo normale
		if(startpos != cicli[chiave][i]){
			temp=v[start + cicli[chiave][i]];
			v[start + cicli[chiave][i]]=val;
			val=temp;
			startpos=cicli[chiave][i];
		}else{
			//Ho finito il ciclo
			v[start + cicli[chiave][i]]=val;
			startpos=-1;
		}
	}

}

//Funzione di ordinamento che usa il quick sort modificato alla base
void nqs_four( int a[], int l, int r){
   int j;
   
  if( l < r ){
		
		// divide and conquer
		j = partition( a, l, r);
		
		if(j-l == NMAXK)
			sortkc(a,l, getkey(a,l));
		else
			nqs_four( a, l, j-1);
		
		if(r-j+1 == NMAXK)
			sortkc(a,j, getkey(a,j));
		else
			nqs_four( a, j+1, r);
	
	}
}

int partition( int data[], int first, int last) {
	int pivot = data[first];
	int left = first;
	int right = last;
	int t;
	
	while (left < right){
		// Find an element bigger than the pivot from the left
		while (data[left] <= pivot && left < right) left++;
		// Find an element smaller than the pivot from the right
		while (data[right] > pivot) right--;
		// Swap the two elements found
		if(left < right){
			t = data[left];
			data[left] = data[right];
			data[right] = t;
		}
	}

	// move the pivot element to the middle
	t = data[first];
	data[first] = data[right];
	data[right] = t;
	
	return right;
}

//Creo un vettore riempito di numeri casuali
void generate_vector(int v[], int nmax, int intervallo, int reset){
	int i;
	
	//Inizializzo il randomizzatore
	if(reset)
		srand(time(NULL));
	
	//Inizializzo il vettore con numeri casuali	
	for(i=0;i<nmax;i++)
		v[i]=rand() % intervallo;
		
}

int main(int argc, char *argv[]) {
	
	//Recupero il numero di elementi da generare
	int nmax;
	nmax = atoi(argv[1]);
	int intervallo = nmax;
	int v[nmax];
	
	//Genero il vettore disordinato
	generate_vector(v, nmax, intervallo, 1);
		
	//printv(v, nmax);
	
	//ordino il vettore con l'algoritmo da testare
	printf("Ordino il vettore...\n");
	nqs_four(v,0, nmax-1);
	
	printf("Il primo e l'ultimo elementi del vettore sono:[%i, %i]\n",v[0],v[nmax-1]);
	//printv(v, nmax);
	
	return 0;	
}
