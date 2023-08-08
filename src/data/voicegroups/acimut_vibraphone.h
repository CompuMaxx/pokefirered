//--------------------------------------------------------------
//  Acimut's Vibraphone v1.0
//  by Acimut
//--------------------------------------------------------------

const u8 KeySplitTable_Acimut_Vibraphone[] =
{
    [NOTE_CN1 ... NOTE_A3] = SAMPLE_VOICE_0,
    [NOTE_AS3 ... NOTE_A4] = SAMPLE_VOICE_1,
    [NOTE_AS4 ... NOTE_A5] = SAMPLE_VOICE_2,
    [NOTE_AS5 ... NOTE_A6] = SAMPLE_VOICE_3,
    [NOTE_AS6 ... NOTE_G9] = SAMPLE_VOICE_4,
};

const union VoiceGroup voicegroup_Acimut_011_Vibraphone[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_011_Vibraphone_48, 255, 127, 231, 215),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_011_Vibraphone_60, 255, 127, 231, 215),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_011_Vibraphone_72, 255, 127, 231, 215),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_011_Vibraphone_84, 255, 127, 231, 215),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Acimut_011_Vibraphone_96, 255, 127, 231, 215),
};
