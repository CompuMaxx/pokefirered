//--------------------------------------------------------------
//  Acimut's SlapBass1 v1.1
//  by Acimut
//--------------------------------------------------------------

const u8 KeySplitTable_Acimut_SlapBass1[] =
{
    [NOTE_CN1 ... NOTE_FS1] = SAMPLE_VOICE_0,
    [NOTE_G1  ... NOTE_AS1] = SAMPLE_VOICE_1,
    [NOTE_B1  ... NOTE_D2]  = SAMPLE_VOICE_2,
    [NOTE_DS2 ... NOTE_F2]  = SAMPLE_VOICE_3,
    [NOTE_FS2 ... NOTE_GS2] = SAMPLE_VOICE_4,
    [NOTE_A2  ... NOTE_B2]  = SAMPLE_VOICE_5,
    [NOTE_C3  ... NOTE_D3]  = SAMPLE_VOICE_6,
    [NOTE_DS3 ... NOTE_F3]  = SAMPLE_VOICE_7,
    [NOTE_FS3 ... NOTE_GS3] = SAMPLE_VOICE_8,
    [NOTE_A3  ... NOTE_B3]  = SAMPLE_VOICE_9,
    [NOTE_C4  ... NOTE_CS4] = SAMPLE_VOICE_10,
    [NOTE_D4  ... NOTE_G9]  = SAMPLE_VOICE_11,
};

const union VoiceGroup voicegroup_Acimut_036_SlapBass1[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_036_SlapBass1_28, 255, 0, 255, 127),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_036_SlapBass1_33, 255, 0, 255, 127),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_036_SlapBass1_38, 255, 0, 255, 127),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_036_SlapBass1_40, 255, 0, 255, 127),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_036_SlapBass1_43, 255, 0, 255, 127),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_036_SlapBass1_46, 255, 0, 255, 127),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_036_SlapBass1_49, 255, 0, 255, 127),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_036_SlapBass1_52, 255, 0, 255, 127),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_036_SlapBass1_55, 255, 0, 255, 127),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_036_SlapBass1_58, 255, 0, 255, 127),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_036_SlapBass1_61, 255, 0, 255, 127),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_036_SlapBass1_62, 255, 0, 255, 127),
};

