#include "global.h"
#include "voice_groups.h"

static const u8 KeySplitTable1[];
static const u8 KeySplitTable2[];
static const u8 KeySplitTable3[];
static const u8 KeySplitTable4[];
static const u8 KeySplitTable5[];

/**
 * @note:
 * Due to the way mks4agb (Nintendo's tool) works, key split table labels can
 * appear before the actual start of the key split table data. If you look at
 * the first keysplit table (KeySplitTable1), you'll notice it's offset backwards
 * by 36 bytes. This is because the key split tables don't map instruments
 * for the entire note range (0-127)--they only map subsets, and the upper
 * and lower ranges aren't necessarily 0 or 127.
 * 
 * For example if a key split table maps an note range of 10-20, then the key
 * split table label will be offset 10 bytes before the actual key split data
 * begins. Therefore, the notes naturally map to the key split table without
 * any extra offset calculation.
*/

#define KEYSPLITTABLE_1_PTR (&KeySplitTable1) - 36
#define KEYSPLITTABLE_2_PTR (&KeySplitTable2) - 36
#define KEYSPLITTABLE_3_PTR (&KeySplitTable3) - 36
#define KEYSPLITTABLE_4_PTR (&KeySplitTable4) - 24
#define KEYSPLITTABLE_5_PTR (&KeySplitTable5) - 36

#include "data/voicegroups/voicegroup000.h"
#include "data/voicegroups/voicegroup001.h"
#include "data/voicegroups/voicegroup002.h"
#include "data/voicegroups/voicegroup003.h"
#include "data/voicegroups/voicegroup004.h"
#include "data/voicegroups/voicegroup005.h"
#include "data/voicegroups/voicegroup006.h"
#include "data/voicegroups/voicegroup007.h"
#include "data/voicegroups/voicegroup008.h"
#include "data/voicegroups/voicegroup009.h"
#include "data/voicegroups/voicegroup010.h"
#include "data/voicegroups/voicegroup011.h"
#include "data/voicegroups/voicegroup012.h"
/*
#include "data/voicegroups/voicegroup013.h"
#include "data/voicegroups/voicegroup014.h"
#include "data/voicegroups/voicegroup015.h"
#include "data/voicegroups/voicegroup016.h"
#include "data/voicegroups/voicegroup017.h"
#include "data/voicegroups/voicegroup018.h"
#include "data/voicegroups/voicegroup019.h"
#include "data/voicegroups/voicegroup020.h"
#include "data/voicegroups/voicegroup021.h"
#include "data/voicegroups/voicegroup022.h"
#include "data/voicegroups/voicegroup023.h"
#include "data/voicegroups/voicegroup024.h"
#include "data/voicegroups/voicegroup025.h"
#include "data/voicegroups/voicegroup026.h"
#include "data/voicegroups/voicegroup027.h"
#include "data/voicegroups/voicegroup028.h"
#include "data/voicegroups/voicegroup029.h"
#include "data/voicegroups/voicegroup030.h"
#include "data/voicegroups/voicegroup031.h"
#include "data/voicegroups/voicegroup032.h"
#include "data/voicegroups/voicegroup033.h"
#include "data/voicegroups/voicegroup034.h"
#include "data/voicegroups/voicegroup035.h"
#include "data/voicegroups/voicegroup036.h"
#include "data/voicegroups/voicegroup037.h"
#include "data/voicegroups/voicegroup038.h"
#include "data/voicegroups/voicegroup039.h"
#include "data/voicegroups/voicegroup040.h"
#include "data/voicegroups/voicegroup041.h"
#include "data/voicegroups/voicegroup042.h"
#include "data/voicegroups/voicegroup043.h"
#include "data/voicegroups/voicegroup044.h"
#include "data/voicegroups/voicegroup045.h"
#include "data/voicegroups/voicegroup046.h"
#include "data/voicegroups/voicegroup047.h"
#include "data/voicegroups/voicegroup048.h"
#include "data/voicegroups/voicegroup049.h"
#include "data/voicegroups/voicegroup050.h"
#include "data/voicegroups/voicegroup051.h"
#include "data/voicegroups/voicegroup052.h"
#include "data/voicegroups/voicegroup053.h"
#include "data/voicegroups/voicegroup054.h"
#include "data/voicegroups/voicegroup055.h"
#include "data/voicegroups/voicegroup056.h"
#include "data/voicegroups/voicegroup057.h"
#include "data/voicegroups/voicegroup058.h"
#include "data/voicegroups/voicegroup059.h"
#include "data/voicegroups/voicegroup060.h"
#include "data/voicegroups/voicegroup061.h"
#include "data/voicegroups/voicegroup062.h"
#include "data/voicegroups/voicegroup063.h"
#include "data/voicegroups/voicegroup064.h"
#include "data/voicegroups/voicegroup065.h"
#include "data/voicegroups/voicegroup066.h"
#include "data/voicegroups/voicegroup067.h"
#include "data/voicegroups/voicegroup068.h"
#include "data/voicegroups/voicegroup069.h"
#include "data/voicegroups/voicegroup070.h"
#include "data/voicegroups/voicegroup071.h"
#include "data/voicegroups/voicegroup072.h"
#include "data/voicegroups/voicegroup073.h"
#include "data/voicegroups/voicegroup074.h"
#include "data/voicegroups/voicegroup075.h"
#include "data/voicegroups/voicegroup076.h"
#include "data/voicegroups/voicegroup077.h"
#include "data/voicegroups/voicegroup078.h"
#include "data/voicegroups/voicegroup079.h"
#include "data/voicegroups/voicegroup080.h"
#include "data/voicegroups/voicegroup081.h"
#include "data/voicegroups/voicegroup082.h"
#include "data/voicegroups/voicegroup083.h"
#include "data/voicegroups/voicegroup084.h"
#include "data/voicegroups/voicegroup085.h"
#include "data/voicegroups/voicegroup086.h"
#include "data/voicegroups/voicegroup087.h"
#include "data/voicegroups/voicegroup088.h"
#include "data/voicegroups/voicegroup089.h"
#include "data/voicegroups/voicegroup090.h"
#include "data/voicegroups/voicegroup091.h"
#include "data/voicegroups/voicegroup092.h"
#include "data/voicegroups/voicegroup093.h"
#include "data/voicegroups/voicegroup094.h"
#include "data/voicegroups/voicegroup095.h"
#include "data/voicegroups/voicegroup096.h"
#include "data/voicegroups/voicegroup097.h"
#include "data/voicegroups/voicegroup098.h"
#include "data/voicegroups/voicegroup099.h"
#include "data/voicegroups/voicegroup100.h"
#include "data/voicegroups/voicegroup101.h"
#include "data/voicegroups/voicegroup102.h"
#include "data/voicegroups/voicegroup103.h"
#include "data/voicegroups/voicegroup104.h"
#include "data/voicegroups/voicegroup105.h"
#include "data/voicegroups/voicegroup106.h"
#include "data/voicegroups/voicegroup107.h"
#include "data/voicegroups/voicegroup108.h"
#include "data/voicegroups/voicegroup109.h"
#include "data/voicegroups/voicegroup110.h"
#include "data/voicegroups/voicegroup111.h"
#include "data/voicegroups/voicegroup112.h"
#include "data/voicegroups/voicegroup113.h"
#include "data/voicegroups/voicegroup114.h"
#include "data/voicegroups/voicegroup115.h"
#include "data/voicegroups/voicegroup116.h"
#include "data/voicegroups/voicegroup117.h"
#include "data/voicegroups/voicegroup118.h"
#include "data/voicegroups/voicegroup119.h"
#include "data/voicegroups/voicegroup120.h"
#include "data/voicegroups/voicegroup121.h"
#include "data/voicegroups/voicegroup122.h"
#include "data/voicegroups/voicegroup123.h"
#include "data/voicegroups/voicegroup124.h"
#include "data/voicegroups/voicegroup125.h"
#include "data/voicegroups/voicegroup126.h"
*/
#include "data/voicegroups/voicegroup127.h"
#include "data/voicegroups/voicegroup128.h"

#include "data/cry_tables.h"

#include "data/voicegroups/voicegroup129.h"
#include "data/voicegroups/voicegroup130.h"
#include "data/voicegroups/voicegroup131.h"
#include "data/voicegroups/voicegroup132.h"
#include "data/voicegroups/voicegroup133.h"
#include "data/voicegroups/voicegroup134.h"
#include "data/voicegroups/voicegroup135.h"
#include "data/voicegroups/voicegroup136.h"
#include "data/voicegroups/voicegroup137.h"
#include "data/voicegroups/voicegroup138.h"
#include "data/voicegroups/voicegroup139.h"
#include "data/voicegroups/voicegroup140.h"
#include "data/voicegroups/voicegroup141.h"
#include "data/voicegroups/voicegroup142.h"
#include "data/voicegroups/voicegroup143.h"
#include "data/voicegroups/voicegroup144.h"
#include "data/voicegroups/voicegroup145.h"
#include "data/voicegroups/voicegroup146.h"
#include "data/voicegroups/voicegroup147.h"
#include "data/voicegroups/voicegroup148.h"
#include "data/voicegroups/voicegroup149.h"
#include "data/voicegroups/voicegroup150.h"
#include "data/voicegroups/voicegroup151.h"
#include "data/voicegroups/voicegroup152.h"
#include "data/voicegroups/voicegroup153.h"
#include "data/voicegroups/voicegroup154.h"
#include "data/voicegroups/voicegroup155.h"
#include "data/voicegroups/voicegroup156.h"
#include "data/voicegroups/voicegroup157.h"
#include "data/voicegroups/voicegroup158.h"
#include "data/voicegroups/voicegroup159.h"
#include "data/voicegroups/voicegroup160.h"
#include "data/voicegroups/voicegroup161.h"
#include "data/voicegroups/voicegroup162.h"
#include "data/voicegroups/voicegroup163.h"
#include "data/voicegroups/voicegroup164.h"
#include "data/voicegroups/voicegroup165.h"
#include "data/voicegroups/voicegroup166.h"
#include "data/voicegroups/voicegroup167.h"
#include "data/voicegroups/voicegroup168.h"
#include "data/voicegroups/voicegroup169.h"
#include "data/voicegroups/voicegroup170.h"
#include "data/voicegroups/voicegroup171.h"
#include "data/voicegroups/voicegroup172.h"
#include "data/voicegroups/voicegroup173.h"
#include "data/voicegroups/voicegroup174.h"
#include "data/voicegroups/voicegroup175.h"
#include "data/voicegroups/voicegroup176.h"
#include "data/voicegroups/voicegroup177.h"
#include "data/voicegroups/voicegroup178.h"
#include "data/voicegroups/voicegroup179.h"
#include "data/voicegroups/voicegroup180.h"
#include "data/voicegroups/voicegroup181.h"
#include "data/voicegroups/voicegroup182.h"
#include "data/voicegroups/voicegroup183.h"
#include "data/voicegroups/voicegroup184.h"
#include "data/voicegroups/voicegroup185.h"
#include "data/voicegroups/voicegroup186.h"
#include "data/voicegroups/voicegroup187.h"
#include "data/voicegroups/voicegroup188.h"
#include "data/voicegroups/voicegroup189.h"
#include "data/voicegroups/voicegroup190.h"

static const u8 KeySplitTable1[] = // - 36
{
    0 , // 36
    0 , // 37
    0 , // 38
    0 , // 39
    0 , // 40
    0 , // 41
    0 , // 42
    0 , // 43
    0 , // 44
    0 , // 45
    0 , // 46
    0 , // 47
    0 , // 48
    0 , // 49
    0 , // 50
    0 , // 51
    0 , // 52
    0 , // 53
    0 , // 54
    1 , // 55
    1 , // 56
    1 , // 57
    1 , // 58
    1 , // 59
    1 , // 60
    1 , // 61
    1 , // 62
    1 , // 63
    1 , // 64
    1 , // 65
    1 , // 66
    1 , // 67
    1 , // 68
    1 , // 69
    2 , // 70
    2 , // 71
    2 , // 72
    2 , // 73
    2 , // 74
    2 , // 75
    2 , // 76
    2 , // 77
    2 , // 78
    2 , // 79
    2 , // 80
    2 , // 81
    2 , // 82
    2 , // 83
    2 , // 84
    2 , // 85
    2 , // 86
    2 , // 87
    2 , // 88
    2 , // 89
    2 , // 90
    3 , // 91
    3 , // 92
    3 , // 93
    3 , // 94
    3 , // 95
    3 , // 96
    3 , // 97
    3 , // 98
    3 , // 99
    3 , // 100
    3 , // 101
    3 , // 102
    3 , // 103
    3 , // 104
    3 , // 105
    3 , // 106
    3   // 107
};

static const u8 KeySplitTable2[] = // - 36
{
    0 , // 36
    0 , // 37
    0 , // 38
    0 , // 39
    0 , // 40
    0 , // 41
    0 , // 42
    0 , // 43
    0 , // 44
    0 , // 45
    0 , // 46
    0 , // 47
    0 , // 48
    0 , // 49
    0 , // 50
    0 , // 51
    0 , // 52
    0 , // 53
    0 , // 54
    0 , // 55
    0 , // 56
    0 , // 57
    0 , // 58
    0 , // 59
    0 , // 60
    0 , // 61
    0 , // 62
    0 , // 63
    0 , // 64
    0 , // 65
    0 , // 66
    0 , // 67
    0 , // 68
    1 , // 69
    1 , // 70
    1 , // 71
    1 , // 72
    1 , // 73
    1 , // 74
    1 , // 75
    1 , // 76
    1 , // 77
    1 , // 78
    1 , // 79
    1 , // 80
    2 , // 81
    2 , // 82
    2 , // 83
    2 , // 84
    2 , // 85
    2 , // 86
    2 , // 87
    2 , // 88
    2 , // 89
    2 , // 90
    2 , // 91
    2 , // 92
    2 , // 93
    2 , // 94
    2 , // 95
    2 , // 96
    2 , // 97
    2 , // 98
    2 , // 99
    2 , // 100
    2 , // 101
    2 , // 102
    2 , // 103
    2 , // 104
    2 , // 105
    2 , // 106
    2 , // 107
};

static const u8 KeySplitTable3[] = // - 36
{
    0 , // 36
    0 , // 37
    0 , // 38
    0 , // 39
    0 , // 40
    0 , // 41
    0 , // 42
    0 , // 43
    0 , // 44
    0 , // 45
    0 , // 46
    0 , // 47
    0 , // 48
    0 , // 49
    0 , // 50
    0 , // 51
    0 , // 52
    0 , // 53
    0 , // 54
    0 , // 55
    0 , // 56
    0 , // 57
    0 , // 58
    0 , // 59
    0 , // 60
    0 , // 61
    0 , // 62
    0 , // 63
    0 , // 64
    0 , // 65
    1 , // 66
    1 , // 67
    1 , // 68
    1 , // 69
    1 , // 70
    1 , // 71
    1 , // 72
    1 , // 73
    1 , // 74
    1 , // 75
    1 , // 76
    1 , // 77
    1 , // 78
    1 , // 79
    1 , // 80
    1 , // 81
    1 , // 82
    1 , // 83
    2 , // 84
    2 , // 85
    2 , // 86
    2 , // 87
    2 , // 88
    2 , // 89
    2 , // 90
    2 , // 91
    2 , // 92
    2 , // 93
    2 , // 94
    2 , // 95
    2 , // 96
    2 , // 97
    2 , // 98
    2 , // 99
    2 , // 100
    2 , // 101
    2 , // 102
    2 , // 103
    2 , // 104
    2 , // 105
    2 , // 106
    2 , // 107
};

static const u8 KeySplitTable4[] = // - 24
{
    0 , // 24
    0 , // 25
    0 , // 26
    0 , // 27
    0 , // 28
    0 , // 29
    0 , // 30
    0 , // 31
    0 , // 32
    0 , // 33
    0 , // 34
    0 , // 35
    0 , // 36
    0 , // 37
    0 , // 38
    0 , // 39
    0 , // 40
    0 , // 41
    1 , // 42
    1 , // 43
    1 , // 44
    1 , // 45
    1 , // 46
    1 , // 47
    1 , // 48
    1 , // 49
    1 , // 50
    1 , // 51
    1 , // 52
    1 , // 53
    1 , // 54
    1 , // 55
    1 , // 56
    1 , // 57
    1 , // 58
    1 , // 59
    1 , // 60
    1 , // 61
    1 , // 62
    1 , // 63
    1 , // 64
    1 , // 65
    1 , // 66
    1 , // 67
    1 , // 68
    1 , // 69
    1 , // 70
    1 , // 71
    1 , // 72
    1 , // 73
    1 , // 74
    1 , // 75
    1 , // 76
    1 , // 77
    1 , // 78
    1 , // 79
    1 , // 80
    1 , // 81
    1 , // 82
    1 , // 83
    1 , // 84
    1 , // 85
    1 , // 86
    1 , // 87
    1 , // 88
    1 , // 89
    1 , // 90
    1 , // 91
    1 , // 92
    1 , // 93
    1 , // 94
    1 , // 95
    1 , // 96
    1 , // 97
    1 , // 98
    1 , // 99
    1 , // 100
    1 , // 101
    1 , // 102
    1 , // 103
    1 , // 104
    1 , // 105
    1 , // 106
    1 , // 107
};

static const u8 KeySplitTable5[] = // - 36
{
    0 , // 36
    0 , // 37
    0 , // 38
    0 , // 39
    0 , // 40
    0 , // 41
    0 , // 42
    0 , // 43
    0 , // 44
    0 , // 45
    0 , // 46
    0 , // 47
    0 , // 48
    0 , // 49
    0 , // 50
    0 , // 51
    0 , // 52
    0 , // 53
    0 , // 54
    0 , // 55
    0 , // 56
    0 , // 57
    0 , // 58
    0 , // 59
    0 , // 60
    0 , // 61
    0 , // 62
    0 , // 63
    0 , // 64
    0 , // 65
    1 , // 66
    1 , // 67
    1 , // 68
    1 , // 69
    1 , // 70
    1 , // 71
    1 , // 72
    1 , // 73
    1 , // 74
    1 , // 75
    1 , // 76
    1 , // 77
    1 , // 78
    1 , // 79
    1 , // 80
    1 , // 81
    1 , // 82
    1 , // 83
    1 , // 84
    1 , // 85
    1 , // 86
    1 , // 87
    1 , // 88
    1 , // 89
    1 , // 90
    1 , // 91
    1 , // 92
    1 , // 93
    1 , // 94
    1 , // 95
    1 , // 96
    1 , // 97
    1 , // 98
    1 , // 99
    1 , // 100
    1 , // 101
    1 , // 102
    1 , // 103
    1 , // 104
    1 , // 105
    1 , // 106
    1 , // 107
};

