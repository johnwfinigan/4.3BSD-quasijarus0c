static double at1[256] = {
	.4652088879820226380397772185645590602702,
	.4683241142701226873728734799326917781375,
	.4714295530762974637629074273205785218588,
	.4745251908402051642232002566372022824674,
	.4776110148383374196932717516519129190650,
	.4806870131753162439668682848705291856443,
	.4837531747751296817262012763707881502179,
	.4868094893723104539592297897312993957640,
	.4898559475030618326444399507503226501955,
	.4928925404963349090599939952120923936734,
	.4959192604648613515010777270400346065215,
	.4989361002961456786587765646735688168571,
	.5019430536434210045120878122327176931857,
	.5049401149165721393961330631764923282504,
	.5079272792730298600168003029383189679837,
	.5109045426086400886655390067517510402735,
	.5138719015485116488265248539795636781252,
	.5168293534378461908385970276376884078551,
	.5197768963327538073509390314592007115201,
	.5227145289910577840670846373311430174460,
	.5256422508630918567770988637116223150255,
	.5285600620824932710012635549776110035551,
	.5314679634569948657767696101301164913887,
	.5343659564592193282761845862351524070766,
	.5372540432174786911151423385578628665479,
	.5401322265065820694470222619439699522040,
	.5430005097386545603124980166503308498116,
	.5458588969539701522678096352059782114264,
	.5487073928118014191114486559402211299888,
	.5515460025812886976165838616563091598712,
	.5543747321323313756058893936774439041068,
	.5571935879265038435243308239268860469106,
	.5600025770079985899197688150841322549465,
	.5628017069945988489748122879704878037154,
	.5655909860686831364880811297466380657247,
	.5683704229682639395188636772571985523192,
	.5711400269780627543240973267450914246555,
	.5738998079206235972667896118646619596880,
	.5766497761474670440946961482663595012176,
	.5793899425302867844097119267263311430649,
	.5821203184521906103026431299035213757283,
	.5848409157989876910436692059852757014038,
	.5875517469505239194230064323696950663511,
	.5902528247720670498544726776376733414785,
	.5929441626057432837105935328348036184472,
	.5956257742620268935737212340928617907585,
	.5982976740112844151839099272061149371949,
	.6009598765753748738600033087321896523617,
	.6036123971193074510830309936152130138215,
	.6062552512429579367765926151197648378079,
	.6088884549728452536120145776766327965780,
	.6115120247539692814198805263038988299893,
	.6141259774417111525158958166998331523392,
	.6167303302937971324584672428527639219861,
	.6193251009623271454571064988372643312871,
	.6219103074858689493528096097540242812256,
	.6244859682816189118007408492312989256919,
	.6270521021376302870075199074285754094155,
	.6296087282051098411147217446495934654697,
	.6321558659907836240803204635310091329828,
	.6346935353493326366931758265715278444788,
	.6372217564758990931637099563358852242359,
	.6397405498986639325671288551161208125576,
	.6422499364714961862734634670601807876864,
	.6447499373666747633800085141498715215801,
	.6472405740676831720642472546328051772993,
	.6497218683620776516960785604245253570282,
	.6521938423344291484833459695507691833717,
	.6546565183593395263698033179115046411058,
	.6571099190945323648545294896922015316526,
	.6595540674740186563505456577158829200804,
	.6619889867013376776414739721168536922294,
	.6644147002428732729213834677594019094248,
	.6668312318212457498068000541994047632959,
	.6692386054087795545829737418847822853211,
	.6716368452210468587801470762882499090468,
	.6740259757104871559605216783554198902179,
	.6764060215601029353231897538503069806437,
	.6787770076772314673923750719061208495072,
	.6811389591873927066334071810870972519087,
	.6834919014282132863300576713920094919811,
	.6858358599434265524449785428246468628141,
	.6881708604769485554604623041317224405929,
	.6904969289670298923477596653224336711796,
	.6928140915404832648276420969344933714103,
	.6951223745069865949504348370058872575981,
	.6974218043534615147277984669501068971437,
	.6997124077385270230783285163600226339998,
	.7019942114870280806916153886865797220468,
	.7042672425846388915576422164750672237646,
	.7065315281725405988370347955316645339265,
	.7087870955421731024493307381892855540648,
	.7110339721300606862176141778745354048802,
	.7132721855127111236149893724880864396285,
	.7155017634015879130977915497594285390962,
	.7177227336381552766684509988293321039513,
	.7199351241889955386737912851787177209443,
	.7221389631409984858984836432234544630166,
	.7243342786966222947446147701432696632082,
	.7265210991692255966830741139246757484906,
	.7286994529784702392069638610209294779627,
	.7308693686457942861977417784673823845494,
	.7330308747899547889176241286449440167270,
	.7351840001226398467532530724989837680467,
	.7373287734441494653421805755777362450164,
	.7394652236391447088018193027909534742482,
	.7415933796724646324367204386527616709826,
	.7437132705850104725110074534048061463177,
	.7458249254896965604252691629124249243195,
	.7479283735674674199180454926145764005025,
	.7500236440633804977081879719827816698855,
	.7521107662827539702929262901701219273740,
	.7541897695873790624046302263557037667374,
	.7562606833917963058943628846401546210819,
	.7583235371596351615398540214882488760412,
	.7603783604000164204571018986290526204408,
	.7624251826640167964162068989530422352487,
	.7644640335411951154111708205740238518113,
	.7664949426561795042983395151428976113383,
	.7685179396653149761871608419096486953026,
	.7705330542533708065283759849508472098374,
	.7725403161303070904872281047670245954785,
	.7745397550280998692014958172825879384447,
	.7765314006976242098950500447769426386717,
	.7785152829055946225362756952401376144190,
	.7804914314315621937863550675911256159749,
	.7824598760649678173645165271819166217951,
	.7844206466022508986555279490366671881305,
	.7873474786672137524216288272697073569256,
	.7912233402270369347960251547836357691342,
	.7950690417776166247104970422235498805106,
	.7988848215573213381638356782199450467917,
	.8026709175972261330466668576830907089655,
	.8064275676436571310626905695577131020372,
	.8101550090838678916014765651245483546614,
	.8138534788747687254418039989164735700789,
	.8175232134746305566838399658796107091379,
	.8211644487776855551997123528412540026422,
	.8247774200515474615745510228855625408790,
	.8283623618773753047558920794705447790752,
	.8319195080927050625563367936680350637537,
	.8354490917368747302186820088217939593397,
	.8389513449989692362407241274223659203171,
	.8424264991682126716765359226129885532264,
	.8458747845867363736028570281065244100638,
	.8492964306046525200873930604288317151317,
	.8526916655373640478383044135474236543956,
	.8560607166250428900532943242267448511260,
	.8594038099942097463992975597994242139111,
	.8627211706213498353813070687146462228851,
	.8660130222985003376976245832213717186024,
	.8692795876007465138699838490210498752601,
	.8725210878555647670569074302467179418719,
	.8757377431139522193090795957374174963979,
	.8789297721232836736240404767826983210134,
	.8820973923018381422281062741650279828251,
	.8852408197149384309771745402704819925838,
	.8883602690526485782340659447939271488018,
	.8914559536089752518364797018234858859789,
	.8945280852625205077751284492652661789116,
	.8975768744585346070767839654085865959655,
	.9006025301923188714061945214751464416773,
	.9036052599939298314843205418069047664725,
	.9065852699141371841263599009612766929911,
	.9095427645115893222205084074624758010309,
	.9124779468411414361096602839398749131073,
	.9153910184433024035321129319386229989937,
	.9182821793347578875624086920614650853946,
	.9211516279999282470116976494708031404308,
	.9239995613835210307376066450594707453681,
	.9268261748840389756069910709193304077146,
	.9296316623482055568671724542326500430206,
	.9324162160662712489085511517678531026752,
	.9351800267681647434150516479089094706843,
	.9379232836204544403399796085750113071486,
	.9406461742240865747201490683487191070417,
	.9433488846128673688180184864054517492196,
	.9460315992526576042840641443379003791893,
	.9486945010412489928362283626333774493143,
	.9513377713088926862851620241664101018333,
	.9539615898194512075632743313242202294019,
	.9565661347721460037539633946643064659842,
	.9591515828038737200147201886969421481133,
	.9617181089920651698290980751983798603064,
	.9642658868580618323250421894998523779817,
	.9667950883709855416074311868091074859923,
	.9693058839520778463443748208159617510759,
	.9717984424794863104176769977404486360272,
	.9742729312934757975178115715583155005511,
	.9767295162020435343725443919123350267371,
	.9791683614869174791035879799744843297750,
	.9815896299099182332809402085351115991040,
	.9839934827196654288775161604428391112745,
	.9863800796586101948174715461108525680798,
	.9887495789703759624712656963246172381992,
	.9911021374073905055994783575212345795816,
	.9934379102387927282141963475504519768788,
	.9957570512585983139467353155028180209120,
	.9980597127941089331244817710190319763832,
	1.0003460457145502692131696749773884637515,
	1.0026161994399246749228811896291686999308,
	1.0048703219500648004579772233196399605602,
	1.0071085597938750524662028624395595398183,
	1.0093310580987482425644445569451745038358,
	1.0115379605801452692422568715588323997669,
	1.0137294095513261468230133331836729549501,
	1.0159055459332211503489030614950785999551,
	1.0180665092644312861008067117191609717181,
	1.0202124377113477243159171453097784533313,
	1.0223434680783802438706871497620662082588,
	1.0244597358182851385970156275941936620226,
	1.0265613750425834218347282543457842679798,
	1.0286485185320605401287006898567054268072,
	1.0307212977473391689855616195072884482559,
	1.0327798428395170136394890891902997557265,
	1.0348242826608618761611612715739555001466,
	1.0368547447755565772955048757822437963750,
	1.0388713554704866374444535235276108213811,
	1.0408742397660639265271637970690809340984,
	1.0428635214270797873533048085600644474461,
	1.0448393229735814219308745238974346006778,
	1.0468017656917656050886123622377264221367,
	1.0487509696448840552088777905956470644702,
	1.0506870536841550480184887628699398786182,
	1.0526101354596761065452928018359912216778,
	1.0545203314313328387841698015971827365312,
	1.0564177568796992245888778399820622297538,
	1.0583025259169248750709331924957083416743,
	1.0601747514976050015929968407895718124517,
	1.0620345454296290375356264765415418172427,
	1.0638820183850040546305493880918323874487,
	1.0657172799106493070228589358440853088681,
	1.0675404384391584205750594624310114082978,
	1.0693516012995259224783405981343393090242,
	1.0711508747278349772059055198440493432876,
	1.0729383638779033594391215569646205174650,
	1.0747141728318848530237476765543952287113,
	1.0764784046108234174691678678992292983447,
	1.0782311611851576101817510349390276796082,
	1.0799725434851728937122604375168485735284,
	1.0817026514113995929795931169225732840104,
	1.0834215838449543978869246315171216411930,
	1.0851294386578234321444780682217250035413,
	1.0868263127230850296236608530332105762915,
	1.0885123019250704753534651806702032397163,
	1.0901875011694610794903643672703243603496,
	1.0918520043933200594014200814656649479819,
	1.0935059045750578075464083192035284102186,
	1.0951492937443292212735383558791202819258,
	1.0967822629918618650955382362206849866998,
	1.0984049024792138266250656284419584199662,
	1.1000173014484602142530175106498890339889,
	1.1016195482318073279787866654086151818957,
	1.1032117302611336146723609438441294904831,
	1.1047939340774565955850748434919187001842,
	1.1063662453403250272457673353969702934708
};

static double at0[64] = {
	0,
	.0078123410601011112964633918421992816212,
	.0156237286204768308028015212565703189111,
	.0234332098794675844510722986374194754539,
	.0312398334302682762537117448924909770324,
	.0390426499551669934527544513269316274722,
	.0468407129159696537522237600018573448670,
	.0546330792393594750713887937473266258559,
	.0624188099959573484739791129855051136062,
	.0701969710718705185218763047034965856804,
	.0779666338315423065633286487810274609063,
	.0857268757707448145936316557319729431164,
	.0934767811585894635045271933120604788231,
	.1012154416674666741662006965791130933351,
	.1089419569898657998418608611626007547402,
	.1166554354410693549660528495092536213280,
	.1243549945467614350313548491638710255731,
	.1320397616146387492746844065265695273027,
	.1397088742891636451833677767390950657688,
	.1473614810886516356098027603968455300910,
	.1549967419239409823037143749334921910556,
	.1626138285979485753736415637615578020999,
	.1702119252854744044904966070997617094784,
	.1777902289926760707966247992158246962376,
	.1853479499956947648860259612285446445152,
	.1928843122579746641970587106902272935471,
	.2003985538258785146539457850343783805549,
	.2078899272022629936053349831029943302823,
	.2153576996977380480244596271664896504990,
	.2228011537593945157710321221404325470734,
	.2302195872768437302401709596798029893210,
	.2376123138654712524738836343256377747061,
	.2449786631268641541720824812112758109141,
	.2523179808864271872059075075476730799702,
	.2596296294082575310299464431839718889129,
	.2669129875874004339552348564915996733623,
	.2741674511196587975993718983421758015541,
	.2813924326491784512863373252052941836192,
	.2885873618940773956236114199582183226534,
	.2957516857504315485808979994626896776270,
	.3028848683749714055605560945055582132915,
	.3099863912468834453178920488852007919328,
	.3170557532091470098090155766744673154223,
	.3240924704898717069873818070036072212289,
	.3310960767041320949443387877569445454685,
	.3380661228368254816598223422680471566460,
	.3450021772071051088676812869000516900113,
	.3519038254149647861988092323316355118599,
	.3587706702705722203959200639264604997769,
	.3656023317069668733128101132586805962550,
	.3723984466767542219236550382837018324886,
	.3791586690334418341599883683469451773481,
	.3858826693980737758976954846072314117540,
	.3925701350118285951655766597158163785588,
	.3992207695752525656147166961588647858870,
	.4058342930748040952326027825138523405910,
	.4124104415973873068997912896671269370467,
	.4189489671335528684572821440930714724074,
	.4254496373700422895422636051807923498355,
	.4319122354723482121002482623679622487467,
	.4383365598579578054456160492147713300291,
	.4447224239609393412483431930515242815743,
	.4510696559885234763756392572821934177105,
	.4573780986703208202304474687766769716587
};
