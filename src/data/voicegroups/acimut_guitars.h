//--------------------------------------------------------------
//  Acimut's Guitars v4.1
//  Nylon Guitar - pick
//  Steel Guitar - pick
//  Overdriven Guitar - Less Paul
//  Distortion Guitar
//
//  by Acimut
//--------------------------------------------------------------

const u8 KeySplitTable_Acimut_Guitar[] =
{
    [NOTE_CN1 ... NOTE_G2] = SAMPLE_VOICE_0,
    [NOTE_GS2 ... NOTE_C3] = SAMPLE_VOICE_1,
    [NOTE_CS3 ... NOTE_F3] = SAMPLE_VOICE_2,
    [NOTE_FS3 ... NOTE_A3] = SAMPLE_VOICE_3,
    [NOTE_AS3 ... NOTE_C4] = SAMPLE_VOICE_4,
    [NOTE_CS4 ... NOTE_F4] = SAMPLE_VOICE_5,
    [NOTE_FS4 ... NOTE_A4] = SAMPLE_VOICE_6,
    [NOTE_AS4 ... NOTE_C5] = SAMPLE_VOICE_7,
    [NOTE_CS5 ... NOTE_E5] = SAMPLE_VOICE_8,
    [NOTE_F5  ... NOTE_B5] = SAMPLE_VOICE_9,
    [NOTE_C6  ... NOTE_G9] = SAMPLE_VOICE_10,
};

const union VoiceGroup voicegroup_Acimut_024_Nylon_Guitar[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_024_Nylon_Guitar_40, 255, 96, 250, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_024_Nylon_Guitar_45, 255, 96, 250, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_024_Nylon_Guitar_50, 255, 96, 250, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_024_Nylon_Guitar_55, 255, 96, 250, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_024_Nylon_Guitar_59, 255, 96, 250, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_024_Nylon_Guitar_64, 255, 96, 250, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_024_Nylon_Guitar_69, 255, 96, 250, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_024_Nylon_Guitar_71, 255, 96, 250, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_024_Nylon_Guitar_76, 255, 96, 250, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_025_Steel_Guitar_84, 255, 96, 250, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_025_Steel_Guitar_84, 255, 96, 250, 235),
};

const union VoiceGroup voicegroup_Acimut_025_Steel_Guitar[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_025_Steel_Guitar_40, 255, 72, 253, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_025_Steel_Guitar_45, 255, 72, 253, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_025_Steel_Guitar_50, 255, 72, 253, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_025_Steel_Guitar_55, 255, 72, 253, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_025_Steel_Guitar_59, 255, 72, 253, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_025_Steel_Guitar_64, 255, 72, 253, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_025_Steel_Guitar_69, 255, 72, 253, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_025_Steel_Guitar_71, 255, 72, 253, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_025_Steel_Guitar_76, 255, 72, 253, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_025_Steel_Guitar_84, 255, 72, 253, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_025_Steel_Guitar_84, 255, 72, 253, 235),
};

const union VoiceGroup voicegroup_Acimut_029_Less_Paul_Guitar[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_029_Less_Paul_Guitar_40, 255, 0, 255, 192),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_029_Less_Paul_Guitar_45, 255, 0, 255, 192),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_029_Less_Paul_Guitar_50, 255, 0, 255, 192),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_029_Less_Paul_Guitar_55, 255, 0, 255, 192),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_029_Less_Paul_Guitar_59, 255, 0, 255, 192),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_029_Less_Paul_Guitar_64, 255, 0, 255, 192),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_029_Less_Paul_Guitar_69, 255, 0, 255, 192),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_029_Less_Paul_Guitar_71, 255, 0, 255, 192),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_029_Less_Paul_Guitar_76, 255, 0, 255, 192),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_029_Less_Paul_Guitar_79, 255, 0, 255, 192),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_029_Less_Paul_Guitar_84, 255, 0, 255, 192),
};

const union VoiceGroup voicegroup_Acimut_030_Distortion_Guitar[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_030_Distortion_Guitar_40, 255, 0, 255, 192),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_030_Distortion_Guitar_45, 255, 0, 255, 192),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_030_Distortion_Guitar_50, 255, 0, 255, 192),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_030_Distortion_Guitar_55, 255, 0, 255, 192),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_030_Distortion_Guitar_59, 255, 0, 255, 192),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_030_Distortion_Guitar_64, 255, 0, 255, 192),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_030_Distortion_Guitar_69, 255, 0, 255, 192),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_030_Distortion_Guitar_71, 255, 0, 255, 192),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_030_Distortion_Guitar_76, 255, 0, 255, 192),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_030_Distortion_Guitar_79, 255, 0, 255, 192),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_029_Less_Paul_Guitar_84, 255, 0, 255, 192),
};
