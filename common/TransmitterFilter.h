/* Automatically generated file with MATLAB */
/* File name: "TransmitterFilter.m" */
/* Filter taps in time-domain */

#ifndef _TRANSMITTERFILTER_H_
#define _TRANSMITTERFILTER_H_

#define NUM_TAPS_TRANSMFILTER            200


/* 4.5 kHz bandwidth */
static float fTransmFilt4_5[NUM_TAPS_TRANSMFILTER] =
{
	0.00006003175932028788f,
	-0.00015944790168448988f,
	-0.00022789024010874445f,
	-0.00035415487849809249f,
	-0.00051395204851009191f,
	-0.00069306335963616845f,
	-0.00087585914018144186f,
	-0.00104350295705079150f,
	-0.00117452157512011820f,
	-0.00124701848762737200f,
	-0.00124106038422732100f,
	-0.00114180035861844390f,
	-0.00094208902722298505f,
	-0.00064509464473893165f,
	-0.00026552713804253540f,
	0.00016990763983047835f,
	0.00062407977670406699f,
	0.00105194581209433700f,
	0.00140500566142680280f,
	0.00163618955553552960f,
	0.00170608555547600310f,
	0.00158837573669347530f,
	0.00127529164904405070f,
	0.00078032494022644205f,
	0.00013993465658288364f,
	-0.00058871453381466234f,
	-0.00133020651378445730f,
	-0.00200004854808637740f,
	-0.00251210755343446530f,
	-0.00278877613598249320f,
	-0.00277211173117143270f,
	-0.00243205190432085620f,
	-0.00177372760855449530f,
	-0.00084036313778520025f,
	0.00028746847314725069f,
	0.00149773866120777230f,
	0.00265682845286230140f,
	0.00362340016504312300f,
	0.00426434496234778200f,
	0.00447165282540042290f,
	0.00417778258370170210f,
	0.00336787037488401510f,
	0.00208665746426317870f,
	0.00043905175148953632f,
	-0.00141652218981521600f,
	-0.00328176175676593230f,
	-0.00493824475598296860f,
	-0.00617153659058432280f,
	-0.00679702807095075410f,
	-0.00668458519326646860f,
	-0.00577896917209140550f,
	-0.00411357455301970300f,
	-0.00181447752156398980f,
	0.00090619079471521862f,
	0.00376691028527734690f,
	0.00644427933943349760f,
	0.00860693765547424630f,
	0.00995407217432875240f,
	0.01025338050465190700f,
	0.00937465518877179070f,
	0.00731408066580370620f,
	0.00420612905711540210f,
	0.00032013928122274007f,
	-0.00395890443289942210f,
	-0.00816489984974326860f,
	-0.01179742662854974300f,
	-0.01437680802281402300f,
	-0.01550147708662588700f,
	-0.01490158012020580600f,
	-0.01248210713388044600f,
	-0.00835009026127240400f,
	-0.00282117207066999570f,
	0.00359665667014988800f,
	0.01024262072503277100f,
	0.01636306966926533200f,
	0.02118732516145208100f,
	0.02401228632979588200f,
	0.02428752165890660600f,
	0.02169133780638266000f,
	0.01619003433962730100f,
	0.00807168851858531410f,
	-0.00205008171974372650f,
	-0.01326533081181913500f,
	-0.02442920344737604900f,
	-0.03425165935907190800f,
	-0.04140828041616253400f,
	-0.04466267181644475300f,
	-0.04298905952058770800f,
	-0.03568334355749593800f,
	-0.02245122156841703300f,
	-0.00346397911818732830f,
	0.02062495194893619300f,
	0.04870577195029952800f,
	0.07927984488346999400f,
	0.11056410044931209000f,
	0.14062410193939373000f,
	0.16752433329332128000f,
	0.18948277021270349000f,
	0.20501561469499502000f,
	0.21305943012828177000f,
	0.21305943012828177000f,
	0.20501561469499502000f,
	0.18948277021270349000f,
	0.16752433329332128000f,
	0.14062410193939373000f,
	0.11056410044931209000f,
	0.07927984488346999400f,
	0.04870577195029952800f,
	0.02062495194893619300f,
	-0.00346397911818732830f,
	-0.02245122156841703300f,
	-0.03568334355749593800f,
	-0.04298905952058770800f,
	-0.04466267181644475300f,
	-0.04140828041616253400f,
	-0.03425165935907190800f,
	-0.02442920344737604900f,
	-0.01326533081181913500f,
	-0.00205008171974372650f,
	0.00807168851858531410f,
	0.01619003433962730100f,
	0.02169133780638266000f,
	0.02428752165890660600f,
	0.02401228632979588200f,
	0.02118732516145208100f,
	0.01636306966926533200f,
	0.01024262072503277100f,
	0.00359665667014988800f,
	-0.00282117207066999570f,
	-0.00835009026127240400f,
	-0.01248210713388044600f,
	-0.01490158012020580600f,
	-0.01550147708662588700f,
	-0.01437680802281402300f,
	-0.01179742662854974300f,
	-0.00816489984974326860f,
	-0.00395890443289942210f,
	0.00032013928122274007f,
	0.00420612905711540210f,
	0.00731408066580370620f,
	0.00937465518877179070f,
	0.01025338050465190700f,
	0.00995407217432875240f,
	0.00860693765547424630f,
	0.00644427933943349760f,
	0.00376691028527734690f,
	0.00090619079471521862f,
	-0.00181447752156398980f,
	-0.00411357455301970300f,
	-0.00577896917209140550f,
	-0.00668458519326646860f,
	-0.00679702807095075410f,
	-0.00617153659058432280f,
	-0.00493824475598296860f,
	-0.00328176175676593230f,
	-0.00141652218981521600f,
	0.00043905175148953632f,
	0.00208665746426317870f,
	0.00336787037488401510f,
	0.00417778258370170210f,
	0.00447165282540042290f,
	0.00426434496234778200f,
	0.00362340016504312300f,
	0.00265682845286230140f,
	0.00149773866120777230f,
	0.00028746847314725069f,
	-0.00084036313778520025f,
	-0.00177372760855449530f,
	-0.00243205190432085620f,
	-0.00277211173117143270f,
	-0.00278877613598249320f,
	-0.00251210755343446530f,
	-0.00200004854808637740f,
	-0.00133020651378445730f,
	-0.00058871453381466234f,
	0.00013993465658288364f,
	0.00078032494022644205f,
	0.00127529164904405070f,
	0.00158837573669347530f,
	0.00170608555547600310f,
	0.00163618955553552960f,
	0.00140500566142680280f,
	0.00105194581209433700f,
	0.00062407977670406699f,
	0.00016990763983047835f,
	-0.00026552713804253540f,
	-0.00064509464473893165f,
	-0.00094208902722298505f,
	-0.00114180035861844390f,
	-0.00124106038422732100f,
	-0.00124701848762737200f,
	-0.00117452157512011820f,
	-0.00104350295705079150f,
	-0.00087585914018144186f,
	-0.00069306335963616845f,
	-0.00051395204851009191f,
	-0.00035415487849809249f,
	-0.00022789024010874445f,
	-0.00015944790168448988f,
	0.00006003175932028788f
};

/* 5 kHz bandwidth */
static float fTransmFilt5[NUM_TAPS_TRANSMFILTER] =
{
	-0.00005749502629081143f,
	0.00016756559274931258f,
	0.00025149323149652576f,
	0.00039882052790509261f,
	0.00058173125375344105f,
	0.00078144204795576352f,
	0.00097634733462366864f,
	0.00114078321065266740f,
	0.00124713168573194330f,
	0.00126933066656210120f,
	0.00118707742865794390f,
	0.00099003928360729353f,
	0.00068131614966498424f,
	0.00027949769021891189f,
	-0.00018123419964173238f,
	-0.00065326657916089307f,
	-0.00108003417975230630f,
	-0.00140258051388319080f,
	-0.00156758910624520300f,
	-0.00153584058222278050f,
	-0.00128971273168799290f,
	-0.00083851788207473378f,
	-0.00022080939230417101f,
	0.00049709294666849292f,
	0.00122685582032631250f,
	0.00186816678002787400f,
	0.00232209816290203330f,
	0.00250335763974978390f,
	0.00235667212757994290f,
	0.00186617296096296990f,
	0.00106302676457742360f,
	0.00002611153495029581f,
	-0.00112400824362782030f,
	-0.00223768928235293290f,
	-0.00315446523070980580f,
	-0.00372483319845985480f,
	-0.00383278526794321360f,
	-0.00341588974238539110f,
	-0.00247973116170306130f,
	-0.00110408322112170590f,
	0.00056093392384216738f,
	0.00230921773370312400f,
	0.00390255758320859300f,
	0.00510144447049740590f,
	0.00569901595632624210f,
	0.00555367222497668310f,
	0.00461553961462974910f,
	0.00294229323316905120f,
	0.00070107433026005605f,
	-0.00184506843977478870f,
	-0.00436541258829298800f,
	-0.00650216849737412020f,
	-0.00791914700912810070f,
	-0.00835068088792291320f,
	-0.00764624845183762070f,
	-0.00580191199220368020f,
	-0.00297423922573375120f,
	0.00052727719610151191f,
	0.00427011541763698720f,
	0.00774858649863944570f,
	0.01044844244243710700f,
	0.01191839506142071900f,
	0.01183913923356307000f,
	0.01008004953497353800f,
	0.00673451946849970390f,
	0.00212716951605911070f,
	-0.00321046365495408250f,
	-0.00859507731128472330f,
	-0.01327270397642469100f,
	-0.01651689849630572100f,
	-0.01773194332280211500f,
	-0.01654745007557838900f,
	-0.01289082371376649600f,
	-0.00702586618033669560f,
	0.00045051162690618648f,
	0.00865701064545586030f,
	0.01651907958726795900f,
	0.02289431667141291600f,
	0.02671922881771964700f,
	0.02715919110949777500f,
	0.02374379217940911200f,
	0.01646853086831949800f,
	0.00584771134080169000f,
	-0.00709184766209609420f,
	-0.02088004908022483100f,
	-0.03373189181453844400f,
	-0.04372384525981934400f,
	-0.04900053624041590700f,
	-0.04798942156542346200f,
	-0.03959908190060283700f,
	-0.02337745378537960100f,
	0.00039016169309212013f,
	0.03065737626341740900f,
	0.06567324886886770400f,
	0.10311609764041904000f,
	0.14029284751455948000f,
	0.17438431493419981000f,
	0.20271119396311532000f,
	0.22299268233401101000f,
	0.23356982820647809000f,
	0.23356982820647809000f,
	0.22299268233401101000f,
	0.20271119396311532000f,
	0.17438431493419981000f,
	0.14029284751455948000f,
	0.10311609764041904000f,
	0.06567324886886770400f,
	0.03065737626341740900f,
	0.00039016169309212013f,
	-0.02337745378537960100f,
	-0.03959908190060283700f,
	-0.04798942156542346200f,
	-0.04900053624041590700f,
	-0.04372384525981934400f,
	-0.03373189181453844400f,
	-0.02088004908022483100f,
	-0.00709184766209609420f,
	0.00584771134080169000f,
	0.01646853086831949800f,
	0.02374379217940911200f,
	0.02715919110949777500f,
	0.02671922881771964700f,
	0.02289431667141291600f,
	0.01651907958726795900f,
	0.00865701064545586030f,
	0.00045051162690618648f,
	-0.00702586618033669560f,
	-0.01289082371376649600f,
	-0.01654745007557838900f,
	-0.01773194332280211500f,
	-0.01651689849630572100f,
	-0.01327270397642469100f,
	-0.00859507731128472330f,
	-0.00321046365495408250f,
	0.00212716951605911070f,
	0.00673451946849970390f,
	0.01008004953497353800f,
	0.01183913923356307000f,
	0.01191839506142071900f,
	0.01044844244243710700f,
	0.00774858649863944570f,
	0.00427011541763698720f,
	0.00052727719610151191f,
	-0.00297423922573375120f,
	-0.00580191199220368020f,
	-0.00764624845183762070f,
	-0.00835068088792291320f,
	-0.00791914700912810070f,
	-0.00650216849737412020f,
	-0.00436541258829298800f,
	-0.00184506843977478870f,
	0.00070107433026005605f,
	0.00294229323316905120f,
	0.00461553961462974910f,
	0.00555367222497668310f,
	0.00569901595632624210f,
	0.00510144447049740590f,
	0.00390255758320859300f,
	0.00230921773370312400f,
	0.00056093392384216738f,
	-0.00110408322112170590f,
	-0.00247973116170306130f,
	-0.00341588974238539110f,
	-0.00383278526794321360f,
	-0.00372483319845985480f,
	-0.00315446523070980580f,
	-0.00223768928235293290f,
	-0.00112400824362782030f,
	0.00002611153495029581f,
	0.00106302676457742360f,
	0.00186617296096296990f,
	0.00235667212757994290f,
	0.00250335763974978390f,
	0.00232209816290203330f,
	0.00186816678002787400f,
	0.00122685582032631250f,
	0.00049709294666849292f,
	-0.00022080939230417101f,
	-0.00083851788207473378f,
	-0.00128971273168799290f,
	-0.00153584058222278050f,
	-0.00156758910624520300f,
	-0.00140258051388319080f,
	-0.00108003417975230630f,
	-0.00065326657916089307f,
	-0.00018123419964173238f,
	0.00027949769021891189f,
	0.00068131614966498424f,
	0.00099003928360729353f,
	0.00118707742865794390f,
	0.00126933066656210120f,
	0.00124713168573194330f,
	0.00114078321065266740f,
	0.00097634733462366864f,
	0.00078144204795576352f,
	0.00058173125375344105f,
	0.00039882052790509261f,
	0.00025149323149652576f,
	0.00016756559274931258f,
	-0.00005749502629081143f
};

/* 9 kHz bandwidth */
static float fTransmFilt9[NUM_TAPS_TRANSMFILTER] =
{
	-0.00008797337868499316f,
	0.00016056967546342331f,
	0.00039954963921517766f,
	0.00075407750260436332f,
	0.00114696637521760280f,
	0.00146743926719527730f,
	0.00159409319292547700f,
	0.00143651481747481190f,
	0.00097722425798713063f,
	0.00029682481242126113f,
	-0.00043386546786741963f,
	-0.00099817364365806845f,
	-0.00120524894740623520f,
	-0.00096396946938288452f,
	-0.00033224414394801804f,
	0.00048369229835191466f,
	0.00118725093020537230f,
	0.00149424475306439260f,
	0.00124198072065332450f,
	0.00046924979506053307f,
	-0.00057621447444325998f,
	-0.00151039371251245360f,
	-0.00194904694023454680f,
	-0.00166133555099541150f,
	-0.00067958461534718153f,
	0.00068260243146118799f,
	0.00192395165792035850f,
	0.00253495120635166980f,
	0.00220173436781380750f,
	0.00095420337377225613f,
	-0.00080766114161305070f,
	-0.00243416274189674820f,
	-0.00325998965977520370f,
	-0.00287034355663561520f,
	-0.00129483872998475270f,
	0.00095786117305054629f,
	0.00305467446769462900f,
	0.00413989351473522620f,
	0.00367759745477166770f,
	0.00169936081871424010f,
	-0.00115119801410618150f,
	-0.00381695468905116420f,
	-0.00521164198066131550f,
	-0.00465428923206632260f,
	-0.00218224952900139980f,
	0.00139475569896070320f,
	0.00474678417194104000f,
	0.00650909994891684000f,
	0.00582774035233338780f,
	0.00275036009804852880f,
	-0.00170922465592642480f,
	-0.00588919374589352150f,
	-0.00808786139028169410f,
	-0.00724369827382035160f,
	-0.00341984751527012710f,
	0.00211883068773594230f,
	0.00730497002212638320f,
	0.01002587515380474500f,
	0.00896763520802673980f,
	0.00421436638496015120f,
	-0.00265926833807676210f,
	-0.00908521365772745410f,
	-0.01244217549824492300f,
	-0.01110211206577887600f,
	-0.00517333750241123770f,
	0.00338409602214227680f,
	0.01137384723605970600f,
	0.01552978709786112900f,
	0.01381801287608163000f,
	0.00636727402125809950f,
	-0.00437720071992328370f,
	-0.01441032424044305600f,
	-0.01961816091505609600f,
	-0.01741301473365639400f,
	-0.00792083022004292680f,
	0.00579273258499534310f,
	0.01864185107745012000f,
	0.02533668664456937800f,
	0.02247131421360461600f,
	0.01009035611969121700f,
	-0.00793480205772855410f,
	-0.02499511805651372100f,
	-0.03403457561731082500f,
	-0.03028878925122569000f,
	-0.01346655442383113200f,
	0.01152706803766555600f,
	0.03577579849916354100f,
	0.04923200604174203500f,
	0.04443037298063602000f,
	0.01977838968398956300f,
	-0.01881163615014927500f,
	-0.05872153011511437000f,
	-0.08385476434746183500f,
	-0.07945428045180628900f,
	-0.03706146999133088500f,
	0.04199392658521315000f,
	0.14581415295641109000f,
	0.25430350241292732000f,
	0.34414260832047572000f,
	0.39497337264850357000f,
	0.39497337264850357000f,
	0.34414260832047572000f,
	0.25430350241292732000f,
	0.14581415295641109000f,
	0.04199392658521315000f,
	-0.03706146999133088500f,
	-0.07945428045180628900f,
	-0.08385476434746183500f,
	-0.05872153011511437000f,
	-0.01881163615014927500f,
	0.01977838968398956300f,
	0.04443037298063602000f,
	0.04923200604174203500f,
	0.03577579849916354100f,
	0.01152706803766555600f,
	-0.01346655442383113200f,
	-0.03028878925122569000f,
	-0.03403457561731082500f,
	-0.02499511805651372100f,
	-0.00793480205772855410f,
	0.01009035611969121700f,
	0.02247131421360461600f,
	0.02533668664456937800f,
	0.01864185107745012000f,
	0.00579273258499534310f,
	-0.00792083022004292680f,
	-0.01741301473365639400f,
	-0.01961816091505609600f,
	-0.01441032424044305600f,
	-0.00437720071992328370f,
	0.00636727402125809950f,
	0.01381801287608163000f,
	0.01552978709786112900f,
	0.01137384723605970600f,
	0.00338409602214227680f,
	-0.00517333750241123770f,
	-0.01110211206577887600f,
	-0.01244217549824492300f,
	-0.00908521365772745410f,
	-0.00265926833807676210f,
	0.00421436638496015120f,
	0.00896763520802673980f,
	0.01002587515380474500f,
	0.00730497002212638320f,
	0.00211883068773594230f,
	-0.00341984751527012710f,
	-0.00724369827382035160f,
	-0.00808786139028169410f,
	-0.00588919374589352150f,
	-0.00170922465592642480f,
	0.00275036009804852880f,
	0.00582774035233338780f,
	0.00650909994891684000f,
	0.00474678417194104000f,
	0.00139475569896070320f,
	-0.00218224952900139980f,
	-0.00465428923206632260f,
	-0.00521164198066131550f,
	-0.00381695468905116420f,
	-0.00115119801410618150f,
	0.00169936081871424010f,
	0.00367759745477166770f,
	0.00413989351473522620f,
	0.00305467446769462900f,
	0.00095786117305054629f,
	-0.00129483872998475270f,
	-0.00287034355663561520f,
	-0.00325998965977520370f,
	-0.00243416274189674820f,
	-0.00080766114161305070f,
	0.00095420337377225613f,
	0.00220173436781380750f,
	0.00253495120635166980f,
	0.00192395165792035850f,
	0.00068260243146118799f,
	-0.00067958461534718153f,
	-0.00166133555099541150f,
	-0.00194904694023454680f,
	-0.00151039371251245360f,
	-0.00057621447444325998f,
	0.00046924979506053307f,
	0.00124198072065332450f,
	0.00149424475306439260f,
	0.00118725093020537230f,
	0.00048369229835191466f,
	-0.00033224414394801804f,
	-0.00096396946938288452f,
	-0.00120524894740623520f,
	-0.00099817364365806845f,
	-0.00043386546786741963f,
	0.00029682481242126113f,
	0.00097722425798713063f,
	0.00143651481747481190f,
	0.00159409319292547700f,
	0.00146743926719527730f,
	0.00114696637521760280f,
	0.00075407750260436332f,
	0.00039954963921517766f,
	0.00016056967546342331f,
	-0.00008797337868499316f
};

/* 10 kHz bandwidth */
static float fTransmFilt10[NUM_TAPS_TRANSMFILTER] =
{
	-0.00010438717349420285f,
	0.00013923965958305922f,
	0.00041903866567473739f,
	0.00083666316240316716f,
	0.00128847780084793190f,
	0.00161942738383321710f,
	0.00167076076746309320f,
	0.00134985611278020810f,
	0.00069054893127154667f,
	-0.00013120840601285225f,
	-0.00084292173359430092f,
	-0.00117580949650753720f,
	-0.00098287620207203070f,
	-0.00032306505328548343f,
	0.00053775081832040171f,
	0.00121849839611409720f,
	0.00138322766605781250f,
	0.00090237161557901865f,
	-0.00006371488400109062f,
	-0.00110569855957356630f,
	-0.00173235607070193560f,
	-0.00159533907721421880f,
	-0.00067408411000651684f,
	0.00067612068848187936f,
	0.00185197508237395080f,
	0.00226586007019917090f,
	0.00163233756549002110f,
	0.00014141679640453499f,
	-0.00158009295602010960f,
	-0.00272444960350715260f,
	-0.00267530474822452130f,
	-0.00132871182854896210f,
	0.00080092803088913263f,
	0.00276447028960664140f,
	0.00359352525217973820f,
	0.00276974384972858940f,
	0.00052357750043548765f,
	-0.00220046180179069100f,
	-0.00413053001371527060f,
	-0.00425286263812357700f,
	-0.00233072913670049050f,
	0.00090360121986484646f,
	0.00400954385803980410f,
	0.00546975221763073420f,
	0.00442016141661290970f,
	0.00113263869234268340f,
	-0.00300909477119352740f,
	-0.00607699287973256090f,
	-0.00648428937499108320f,
	-0.00378832928580032480f,
	0.00098839280582331654f,
	0.00571978371366686080f,
	0.00810741942151322130f,
	0.00678092918963062520f,
	0.00204782425033917270f,
	-0.00410347712001248470f,
	-0.00881670987363956590f,
	-0.00967563282771554190f,
	-0.00591650271574659360f,
	0.00105232290124124120f,
	0.00813760413949259940f,
	0.01190990203439603500f,
	0.01023686105797332400f,
	0.00343527567473834740f,
	-0.00565955665520398880f,
	-0.01283866556532794500f,
	-0.01443422765611611400f,
	-0.00914825995139847970f,
	0.00109702011485950360f,
	0.01178814688431945000f,
	0.01776219756050761600f,
	0.01564692288332459500f,
	0.00566952461531024590f,
	-0.00809802356368560620f,
	-0.01932627936636350700f,
	-0.02226402996629639800f,
	-0.01458399972093615700f,
	0.00112643297654929900f,
	0.01808289203641684800f,
	0.02811813865751386400f,
	0.02547270859229127900f,
	0.00986267455837583350f,
	-0.01271424784466911200f,
	-0.03207554502694043300f,
	-0.03820615757913903300f,
	-0.02609480347935347300f,
	0.00114418692100407350f,
	0.03253065034495952700f,
	0.05318557093101786100f,
	0.05070215696432711600f,
	0.02139932339736496200f,
	-0.02630152406623893400f,
	-0.07320216429308248900f,
	-0.09538184904322299900f,
	-0.07303790730177249500f,
	0.00115200749951399620f,
	0.11749305429874943000f,
	0.25064297976588740000f,
	0.36679857544042793000f,
	0.43436672626951112000f,
	0.43436672626951112000f,
	0.36679857544042793000f,
	0.25064297976588740000f,
	0.11749305429874943000f,
	0.00115200749951399620f,
	-0.07303790730177249500f,
	-0.09538184904322299900f,
	-0.07320216429308248900f,
	-0.02630152406623893400f,
	0.02139932339736496200f,
	0.05070215696432711600f,
	0.05318557093101786100f,
	0.03253065034495952700f,
	0.00114418692100407350f,
	-0.02609480347935347300f,
	-0.03820615757913903300f,
	-0.03207554502694043300f,
	-0.01271424784466911200f,
	0.00986267455837583350f,
	0.02547270859229127900f,
	0.02811813865751386400f,
	0.01808289203641684800f,
	0.00112643297654929900f,
	-0.01458399972093615700f,
	-0.02226402996629639800f,
	-0.01932627936636350700f,
	-0.00809802356368560620f,
	0.00566952461531024590f,
	0.01564692288332459500f,
	0.01776219756050761600f,
	0.01178814688431945000f,
	0.00109702011485950360f,
	-0.00914825995139847970f,
	-0.01443422765611611400f,
	-0.01283866556532794500f,
	-0.00565955665520398880f,
	0.00343527567473834740f,
	0.01023686105797332400f,
	0.01190990203439603500f,
	0.00813760413949259940f,
	0.00105232290124124120f,
	-0.00591650271574659360f,
	-0.00967563282771554190f,
	-0.00881670987363956590f,
	-0.00410347712001248470f,
	0.00204782425033917270f,
	0.00678092918963062520f,
	0.00810741942151322130f,
	0.00571978371366686080f,
	0.00098839280582331654f,
	-0.00378832928580032480f,
	-0.00648428937499108320f,
	-0.00607699287973256090f,
	-0.00300909477119352740f,
	0.00113263869234268340f,
	0.00442016141661290970f,
	0.00546975221763073420f,
	0.00400954385803980410f,
	0.00090360121986484646f,
	-0.00233072913670049050f,
	-0.00425286263812357700f,
	-0.00413053001371527060f,
	-0.00220046180179069100f,
	0.00052357750043548765f,
	0.00276974384972858940f,
	0.00359352525217973820f,
	0.00276447028960664140f,
	0.00080092803088913263f,
	-0.00132871182854896210f,
	-0.00267530474822452130f,
	-0.00272444960350715260f,
	-0.00158009295602010960f,
	0.00014141679640453499f,
	0.00163233756549002110f,
	0.00226586007019917090f,
	0.00185197508237395080f,
	0.00067612068848187936f,
	-0.00067408411000651684f,
	-0.00159533907721421880f,
	-0.00173235607070193560f,
	-0.00110569855957356630f,
	-0.00006371488400109062f,
	0.00090237161557901865f,
	0.00138322766605781250f,
	0.00121849839611409720f,
	0.00053775081832040171f,
	-0.00032306505328548343f,
	-0.00098287620207203070f,
	-0.00117580949650753720f,
	-0.00084292173359430092f,
	-0.00013120840601285225f,
	0.00069054893127154667f,
	0.00134985611278020810f,
	0.00167076076746309320f,
	0.00161942738383321710f,
	0.00128847780084793190f,
	0.00083666316240316716f,
	0.00041903866567473739f,
	0.00013923965958305922f,
	-0.00010438717349420285f
};

/* 18 kHz bandwidth */
static float fTransmFilt18[NUM_TAPS_TRANSMFILTER] =
{
	-0.00044689492655897086f,
	-0.00075434239920110346f,
	-0.00046999594358029486f,
	0.00069275983210503704f,
	0.00208714081019086310f,
	0.00253307051494071390f,
	0.00151520894849888890f,
	-0.00007402087753868985f,
	-0.00071524110372318014f,
	0.00007730671778451598f,
	0.00113658612882830410f,
	0.00098554016855992516f,
	-0.00032369648221143848f,
	-0.00118247669143244650f,
	-0.00043158295134870686f,
	0.00104151137002363650f,
	0.00128822132527554170f,
	-0.00017328446702366567f,
	-0.00154344857016542270f,
	-0.00094229411663118647f,
	0.00102774162809589190f,
	0.00182088629682004540f,
	0.00021424722199950763f,
	-0.00186354373208208290f,
	-0.00161848150390145160f,
	0.00087282843863783349f,
	0.00244410683071196420f,
	0.00083991530817242952f,
	-0.00208750661606064370f,
	-0.00246961565199413370f,
	0.00048850683862099913f,
	0.00308713675004495350f,
	0.00172887801916673710f,
	-0.00213569666616106840f,
	-0.00347099716751326450f,
	-0.00019184259594516107f,
	0.00367631650140595340f,
	0.00289713653352839100f,
	-0.00192135587342559190f,
	-0.00457968131183833070f,
	-0.00123066103413472770f,
	0.00412101052202513190f,
	0.00434448644998170100f,
	-0.00135153919599720060f,
	-0.00573215032214034400f,
	-0.00268326809346155610f,
	0.00431378803495508290f,
	0.00605352703620002170f,
	-0.00032516481258912247f,
	-0.00683954208292572930f,
	-0.00459320656667513120f,
	0.00413426195356377850f,
	0.00799201060396432380f,
	0.00126725483182226490f,
	-0.00779105394463252500f,
	-0.00700233542770738960f,
	0.00343421708122705700f,
	0.01010297928053809600f,
	0.00354340761011914070f,
	-0.00845129855613194550f,
	-0.00995198814915183340f,
	0.00203741607731866780f,
	0.01231570815960018700f,
	0.00665103868049469850f,
	-0.00864567233702628720f,
	-0.01349187699304481600f,
	-0.00027950450030989928f,
	0.01454920348059130600f,
	0.01079780572913139600f,
	-0.00814698538904188790f,
	-0.01771987403537155300f,
	-0.00384827530946814990f,
	0.01670503188054996100f,
	0.01631522602662545000f,
	-0.00662932724655045710f,
	-0.02284254945618779300f,
	-0.00921459574023109250f,
	0.01869309278287970000f,
	0.02385854212829186700f,
	-0.00352645123967716170f,
	-0.02934426371365384700f,
	-0.01747701967070416900f,
	0.02041261257281355000f,
	0.03488787237268454300f,
	0.00234138386068865820f,
	-0.03849498156982815400f,
	-0.03131919990308042200f,
	0.02178629746208006800f,
	0.05352195922526582100f,
	0.01429495779774667100f,
	-0.05446268182026334200f,
	-0.05980096885791196000f,
	0.02274310976293461200f,
	0.09678947815514656100f,
	0.04763204063653405500f,
	-0.10036394106192553000f,
	-0.16396712081050696000f,
	0.02323414086397192200f,
	0.41003379165391707000f,
	0.72938219532092741000f,
	0.72938219532092741000f,
	0.41003379165391707000f,
	0.02323414086397192200f,
	-0.16396712081050696000f,
	-0.10036394106192553000f,
	0.04763204063653405500f,
	0.09678947815514656100f,
	0.02274310976293461200f,
	-0.05980096885791196000f,
	-0.05446268182026334200f,
	0.01429495779774667100f,
	0.05352195922526582100f,
	0.02178629746208006800f,
	-0.03131919990308042200f,
	-0.03849498156982815400f,
	0.00234138386068865820f,
	0.03488787237268454300f,
	0.02041261257281355000f,
	-0.01747701967070416900f,
	-0.02934426371365384700f,
	-0.00352645123967716170f,
	0.02385854212829186700f,
	0.01869309278287970000f,
	-0.00921459574023109250f,
	-0.02284254945618779300f,
	-0.00662932724655045710f,
	0.01631522602662545000f,
	0.01670503188054996100f,
	-0.00384827530946814990f,
	-0.01771987403537155300f,
	-0.00814698538904188790f,
	0.01079780572913139600f,
	0.01454920348059130600f,
	-0.00027950450030989928f,
	-0.01349187699304481600f,
	-0.00864567233702628720f,
	0.00665103868049469850f,
	0.01231570815960018700f,
	0.00203741607731866780f,
	-0.00995198814915183340f,
	-0.00845129855613194550f,
	0.00354340761011914070f,
	0.01010297928053809600f,
	0.00343421708122705700f,
	-0.00700233542770738960f,
	-0.00779105394463252500f,
	0.00126725483182226490f,
	0.00799201060396432380f,
	0.00413426195356377850f,
	-0.00459320656667513120f,
	-0.00683954208292572930f,
	-0.00032516481258912247f,
	0.00605352703620002170f,
	0.00431378803495508290f,
	-0.00268326809346155610f,
	-0.00573215032214034400f,
	-0.00135153919599720060f,
	0.00434448644998170100f,
	0.00412101052202513190f,
	-0.00123066103413472770f,
	-0.00457968131183833070f,
	-0.00192135587342559190f,
	0.00289713653352839100f,
	0.00367631650140595340f,
	-0.00019184259594516107f,
	-0.00347099716751326450f,
	-0.00213569666616106840f,
	0.00172887801916673710f,
	0.00308713675004495350f,
	0.00048850683862099913f,
	-0.00246961565199413370f,
	-0.00208750661606064370f,
	0.00083991530817242952f,
	0.00244410683071196420f,
	0.00087282843863783349f,
	-0.00161848150390145160f,
	-0.00186354373208208290f,
	0.00021424722199950763f,
	0.00182088629682004540f,
	0.00102774162809589190f,
	-0.00094229411663118647f,
	-0.00154344857016542270f,
	-0.00017328446702366567f,
	0.00128822132527554170f,
	0.00104151137002363650f,
	-0.00043158295134870686f,
	-0.00118247669143244650f,
	-0.00032369648221143848f,
	0.00098554016855992516f,
	0.00113658612882830410f,
	0.00007730671778451598f,
	-0.00071524110372318014f,
	-0.00007402087753868985f,
	0.00151520894849888890f,
	0.00253307051494071390f,
	0.00208714081019086310f,
	0.00069275983210503704f,
	-0.00046999594358029486f,
	-0.00075434239920110346f,
	-0.00044689492655897086f
};

/* 20 kHz bandwidth */
static float fTransmFilt20[NUM_TAPS_TRANSMFILTER] =
{
	-0.00069209986040886064f,
	-0.00162751048947531270f,
	-0.00189910674339981630f,
	-0.00072621627049767137f,
	0.00115076807306907810f,
	0.00195298472090143780f,
	0.00097587583366687204f,
	-0.00034539368450477355f,
	-0.00021192205867815779f,
	0.00107081340228935100f,
	0.00149163809385654710f,
	0.00029194958833757718f,
	-0.00078752241163703774f,
	-0.00005792167681001575f,
	0.00142206188044742730f,
	0.00128096465144999710f,
	-0.00046809902441538479f,
	-0.00119096817031364350f,
	0.00037173044410786292f,
	0.00189412260355020230f,
	0.00085281581844522439f,
	-0.00137196356066548570f,
	-0.00130387434805161440f,
	0.00118160618843456520f,
	0.00227141191740400140f,
	0.00000750649658081217f,
	-0.00229984242469171000f,
	-0.00090193262609177417f,
	0.00230323193858928510f,
	0.00225908409549881170f,
	-0.00132113196384200550f,
	-0.00297478751514540590f,
	0.00018730305412256818f,
	0.00348817568208462970f,
	0.00154408230788967950f,
	-0.00301120015944574950f,
	-0.00301398275235323670f,
	0.00198448519506432130f,
	0.00431512253584034190f,
	-0.00008938079088314458f,
	-0.00470259355013338300f,
	-0.00202808551136046070f,
	0.00426114312260928580f,
	0.00424905690168161500f,
	-0.00263892048877443400f,
	-0.00581983235515371770f,
	0.00022927498439301482f,
	0.00649574202723931810f,
	0.00278556969425756840f,
	-0.00576566995859297170f,
	-0.00566596080480707280f,
	0.00369947653116755840f,
	0.00790147385492092490f,
	-0.00037091404216704326f,
	-0.00875500220393866070f,
	-0.00360062679236244260f,
	0.00789720513584419100f,
	0.00756310674107232680f,
	-0.00511398633453053530f,
	-0.01057003026532852100f,
	0.00073492235916915172f,
	0.01186486921747955500f,
	0.00464797925831816030f,
	-0.01079774485954888700f,
	-0.01001061744460714900f,
	0.00720628829587928110f,
	0.01424372893329484500f,
	-0.00134310409215510590f,
	-0.01619414853952374400f,
	-0.00594843934417116360f,
	0.01503395155129382300f,
	0.01343412054625113200f,
	-0.01035837015187141900f,
	-0.01954923874499973200f,
	0.00244650601624595360f,
	0.02274369034406112400f,
	0.00776684346221429790f,
	-0.02168468682398567000f,
	-0.01866189337438667000f,
	0.01561683441269426400f,
	0.02817701130309784000f,
	-0.00451348484257535140f,
	-0.03399290195018940500f,
	-0.01071927543358883700f,
	0.03390469711931398000f,
	0.02828095841715415300f,
	-0.02607103889853090400f,
	-0.04553672350615786700f,
	0.00922499498788866700f,
	0.05917265165865866900f,
	0.01739138336802829200f,
	-0.06517032882076750900f,
	-0.05451518901492431000f,
	0.05824533426556247800f,
	0.10484899687285520000f,
	-0.02851032911381019800f,
	-0.18140010661481709000f,
	-0.05942610821854540900f,
	0.38092875469147258000f,
	0.79609071999223824000f,
	0.79609071999223824000f,
	0.38092875469147258000f,
	-0.05942610821854540900f,
	-0.18140010661481709000f,
	-0.02851032911381019800f,
	0.10484899687285520000f,
	0.05824533426556247800f,
	-0.05451518901492431000f,
	-0.06517032882076750900f,
	0.01739138336802829200f,
	0.05917265165865866900f,
	0.00922499498788866700f,
	-0.04553672350615786700f,
	-0.02607103889853090400f,
	0.02828095841715415300f,
	0.03390469711931398000f,
	-0.01071927543358883700f,
	-0.03399290195018940500f,
	-0.00451348484257535140f,
	0.02817701130309784000f,
	0.01561683441269426400f,
	-0.01866189337438667000f,
	-0.02168468682398567000f,
	0.00776684346221429790f,
	0.02274369034406112400f,
	0.00244650601624595360f,
	-0.01954923874499973200f,
	-0.01035837015187141900f,
	0.01343412054625113200f,
	0.01503395155129382300f,
	-0.00594843934417116360f,
	-0.01619414853952374400f,
	-0.00134310409215510590f,
	0.01424372893329484500f,
	0.00720628829587928110f,
	-0.01001061744460714900f,
	-0.01079774485954888700f,
	0.00464797925831816030f,
	0.01186486921747955500f,
	0.00073492235916915172f,
	-0.01057003026532852100f,
	-0.00511398633453053530f,
	0.00756310674107232680f,
	0.00789720513584419100f,
	-0.00360062679236244260f,
	-0.00875500220393866070f,
	-0.00037091404216704326f,
	0.00790147385492092490f,
	0.00369947653116755840f,
	-0.00566596080480707280f,
	-0.00576566995859297170f,
	0.00278556969425756840f,
	0.00649574202723931810f,
	0.00022927498439301482f,
	-0.00581983235515371770f,
	-0.00263892048877443400f,
	0.00424905690168161500f,
	0.00426114312260928580f,
	-0.00202808551136046070f,
	-0.00470259355013338300f,
	-0.00008938079088314458f,
	0.00431512253584034190f,
	0.00198448519506432130f,
	-0.00301398275235323670f,
	-0.00301120015944574950f,
	0.00154408230788967950f,
	0.00348817568208462970f,
	0.00018730305412256818f,
	-0.00297478751514540590f,
	-0.00132113196384200550f,
	0.00225908409549881170f,
	0.00230323193858928510f,
	-0.00090193262609177417f,
	-0.00229984242469171000f,
	0.00000750649658081217f,
	0.00227141191740400140f,
	0.00118160618843456520f,
	-0.00130387434805161440f,
	-0.00137196356066548570f,
	0.00085281581844522439f,
	0.00189412260355020230f,
	0.00037173044410786292f,
	-0.00119096817031364350f,
	-0.00046809902441538479f,
	0.00128096465144999710f,
	0.00142206188044742730f,
	-0.00005792167681001575f,
	-0.00078752241163703774f,
	0.00029194958833757718f,
	0.00149163809385654710f,
	0.00107081340228935100f,
	-0.00021192205867815779f,
	-0.00034539368450477355f,
	0.00097587583366687204f,
	0.00195298472090143780f,
	0.00115076807306907810f,
	-0.00072621627049767137f,
	-0.00189910674339981630f,
	-0.00162751048947531270f,
	-0.00069209986040886064f
};


#endif	/* _TRANSMITTERFILTER_H_ */