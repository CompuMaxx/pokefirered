
const union VoiceGroup voicegroup190[] =
{
    [NOTE_CN1]          = VOICE_PROGRAMMABLE_WAVE_ALT(60, 0, ProgrammableWaveData_1, 0, 7, 15, 2),
    [NOTE_CSN1
     ... NOTE_A1]       = VOICE_SQUARE_1(60, 0, 0, 2, 0, 0, 15, 0),
    [NOTE_AS1]          = VOICE_NOISE_ALT(60, 0, 0, 0, 2, 7, 0),
    [BASS_DRUM_2]       = VOICE_NOISE_ALT(60, 0, 0, 0, 1, 9, 1),
    [BASS_DRUM_1]       = VOICE_DIRECTSOUND_NO_RESAMPLE(64, 64, DirectSoundWaveData_drum_and_percussion_kick, 255, 0, 255, 0),
    [SIDE_STICK]        = VOICE_SQUARE_1(60, 0, 0, 2, 0, 0, 15, 0),
    [SNARE_DRUM_1]      = VOICE_DIRECTSOUND_NO_RESAMPLE(64, 52, DirectSoundWaveData_sc88pro_orchestra_snare, 255, 0, 255, 242),
    [HAND_CLAP
     ... LOW_TOM_1]     = VOICE_SQUARE_1(60, 0, 0, 2, 0, 0, 15, 0),
    [PEDAL_HI_HAT]      = VOICE_DIRECTSOUND_NO_RESAMPLE(60, 64, DirectSoundWaveData_sc88pro_rnd_snare, 255, 0, 255, 242),
    [MID_TOM_2
     ... HIGH_TOM_2]    = VOICE_SQUARE_1(60, 0, 0, 2, 0, 0, 15, 0),
    [CRASH_CYMBAL_1]    = VOICE_DIRECTSOUND_NO_RESAMPLE(33, 104, DirectSoundWaveData_sc88pro_orchestra_cymbal_crash, 255, 235, 0, 231),
    [HIGH_TOM_1]        = VOICE_SQUARE_1(60, 0, 0, 2, 0, 0, 15, 0),
    [RIDE_CYMBAL_1]     = VOICE_SQUARE_1(60, 0, 0, 2, 0, 0, 15, 0),
    [CHINESE_CYMBAL]    = VOICE_DIRECTSOUND(63, 64, DirectSoundWaveData_sc88pro_orchestra_cymbal_crash, 255, 235, 0, 231),
    [RIDE_BELL]         = VOICE_SQUARE_1(60, 0, 0, 2, 0, 0, 15, 0),
    [TAMBOURINE]        = VOICE_DIRECTSOUND_NO_RESAMPLE(64, 34, DirectSoundWaveData_sc88pro_tambourine, 255, 127, 77, 204),
    [SPLASH_CYMBAL]     = VOICE_DIRECTSOUND_NO_RESAMPLE(64, 14, DirectSoundWaveData_trinity_cymbal_crash, 255, 231, 0, 188),
    [COWBELL]           = VOICE_DIRECTSOUND_NO_RESAMPLE(64, 89, DirectSoundWaveData_sd90_cowbell, 255, 0, 255, 242),
    [CRASH_CYMBAL_2]    = VOICE_DIRECTSOUND_NO_RESAMPLE(64, 24, DirectSoundWaveData_sc88pro_orchestra_cymbal_crash, 255, 235, 0, 231),
    [VIBRA_SLAP]        = VOICE_SQUARE_1(60, 0, 0, 2, 0, 0, 15, 0),
    [RIDE_CYMBAL_2]     = VOICE_DIRECTSOUND_NO_RESAMPLE(64, 54, DirectSoundWaveData_sc88pro_orchestra_cymbal_crash, 255, 235, 0, 231),
    [HIGH_BONGO]        = VOICE_DIRECTSOUND_NO_RESAMPLE(64, 54, DirectSoundWaveData_sc88pro_orchestra_cymbal_crash, 8, 0, 255, 216),
    [LOW_BONGO]         = VOICE_DIRECTSOUND_NO_RESAMPLE(64, 94, DirectSoundWaveData_unused_heart_of_asia_indian_drum, 255, 0, 255, 0),
    [MUTE_HIGH_CONGA]   = VOICE_DIRECTSOUND_NO_RESAMPLE(64, 34, DirectSoundWaveData_sc88pro_mute_high_conga, 255, 0, 255, 0),
    [OPEN_HIGH_CONGA]   = VOICE_DIRECTSOUND_NO_RESAMPLE(64, 34, DirectSoundWaveData_sc88pro_open_low_conga, 255, 0, 255, 0),
    [LOW_CONGA]         = VOICE_DIRECTSOUND_NO_RESAMPLE(64, 90, DirectSoundWaveData_sc88pro_open_low_conga, 255, 0, 255, 0),
    [HIGH_TIMBALE
     ... OPEN_CUICA]    = VOICE_SQUARE_1(60, 0, 0, 2, 0, 0, 15, 0),
    [MUTE_TRIANGLE]     = VOICE_DIRECTSOUND_NO_RESAMPLE(64, 39, DirectSoundWaveData_sd90_open_triangle, 255, 242, 103, 188),
    [OPEN_TRIANGLE]     = VOICE_DIRECTSOUND_NO_RESAMPLE(64, 79, DirectSoundWaveData_sd90_open_triangle, 255, 242, 103, 188),
    [SHAKER_GM2]        = VOICE_DIRECTSOUND_NO_RESAMPLE(64, 39, DirectSoundWaveData_sd90_open_triangle, 255, 165, 103, 188),
    [JINGLE_BELL_GM2]   = VOICE_DIRECTSOUND_NO_RESAMPLE(64, 64, DirectSoundWaveData_sc88pro_jingle_bell, 255, 0, 255, 0),
    [BELLTREE_GM2]      = VOICE_SQUARE_1(60, 0, 0, 2, 0, 0, 15, 0),
    [CASTANETS_GM2]     = VOICE_SQUARE_1(60, 0, 0, 2, 0, 0, 15, 0),
    [MUTE_SURDO_GM2]    = VOICE_DIRECTSOUND_NO_RESAMPLE(64, 104, DirectSoundWaveData_ethnic_flavours_atarigane, 255, 0, 255, 0),
    [OPEN_SURDO_GM2]    = VOICE_DIRECTSOUND(63, 64, DirectSoundWaveData_sc88pro_taiko, 255, 0, 255, 0)
};

