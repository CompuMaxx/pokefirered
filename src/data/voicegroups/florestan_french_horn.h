//--------------------------------------------------------------
//  Florestan French Horns v2.1
//  by Acimut
//--------------------------------------------------------------

const u8 KeySplitTable_Florestan_French_Horn[] =
{
    [NOTE_CN1 ... NOTE_DS2] = SAMPLE_VOICE_0,
    [NOTE_E2  ... NOTE_A2]  = SAMPLE_VOICE_1,
    [NOTE_AS2 ... NOTE_DS3] = SAMPLE_VOICE_2,
    [NOTE_E3  ... NOTE_A3]  = SAMPLE_VOICE_3,
    [NOTE_AS3 ... NOTE_DS4] = SAMPLE_VOICE_4,
    [NOTE_E4  ... NOTE_A4]  = SAMPLE_VOICE_5,
    [NOTE_AS4 ... NOTE_G9]  = SAMPLE_VOICE_6,
};

const union VoiceGroup voicegroup_Florestan_French_Horn[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Florestan_French_Horn_39, 255, 0, 255, 127),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Florestan_French_Horn_45, 255, 0, 255, 127),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Florestan_French_Horn_51, 255, 0, 255, 127),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Florestan_French_Horn_57, 255, 0, 255, 127),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Florestan_French_Horn_63, 255, 0, 255, 127),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Florestan_French_Horn_69, 255, 0, 255, 127),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(NOTE_C4, 0, DirectSoundWaveData_Florestan_French_Horn_75, 255, 0, 255, 127),
};
