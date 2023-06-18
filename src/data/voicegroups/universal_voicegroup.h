
//--------------------------------------------------------------
//  Universal Voicegroup FE7 - KeySplitTables
//--------------------------------------------------------------

//0 - Acoustic Grand Piano
//1 - Bright Acoustic Piano
//2 - Electric Grand Piano
const u8 KeySplitTable6[] =
{
    [NOTE_CN1 ... NOTE_D2]  = SAMPLE_VOICE_0,
    [NOTE_DS2 ... NOTE_F2]  = SAMPLE_VOICE_1,
    [NOTE_FS2 ... NOTE_G2]  = SAMPLE_VOICE_2,
    [NOTE_GS2 ... NOTE_A2]  = SAMPLE_VOICE_3,
    [NOTE_AS2]              = SAMPLE_VOICE_4,
    [NOTE_B2  ... NOTE_D3]  = SAMPLE_VOICE_5,
    [NOTE_DS3 ... NOTE_F3]  = SAMPLE_VOICE_6,
    [NOTE_FS3 ... NOTE_A3]  = SAMPLE_VOICE_7,
    [NOTE_AS3 ... NOTE_B3]  = SAMPLE_VOICE_8,
    [NOTE_C4  ... NOTE_D4]  = SAMPLE_VOICE_9,
    [NOTE_DS4 ... NOTE_FS4] = SAMPLE_VOICE_10,
    [NOTE_G4]               = SAMPLE_VOICE_11,
    [NOTE_GS4 ... NOTE_AS4] = SAMPLE_VOICE_12,
    [NOTE_B4  ... NOTE_D5]  = SAMPLE_VOICE_13,
    [NOTE_DS5 ... NOTE_F5]  = SAMPLE_VOICE_14,
    [NOTE_FS5 ... NOTE_A5]  = SAMPLE_VOICE_15,
    [NOTE_AS5 ... NOTE_C6]  = SAMPLE_VOICE_16,
    [NOTE_CS6 ... NOTE_E6]  = SAMPLE_VOICE_17,
    [NOTE_F6  ... NOTE_G6]  = SAMPLE_VOICE_18,
    [NOTE_GS6 ... NOTE_B6]  = SAMPLE_VOICE_19,
    [NOTE_C7  ... NOTE_CS7] = SAMPLE_VOICE_20,
    [NOTE_D7  ... NOTE_E7]  = SAMPLE_VOICE_21,
    [NOTE_F7  ... NOTE_GS7] = SAMPLE_VOICE_22,
    [NOTE_A7  ... NOTE_G9]  = SAMPLE_VOICE_23,
};

// 3 - Honky-Tonk Piano
// 7 - Clavinet
//78 - Whistle
//81 - Lead 2 (Sawtooth)
//93 - Pad 6 (Metallic)
const u8 KeySplitTable7[] =
{
    [NOTE_CN1 ... NOTE_AS2] = SAMPLE_VOICE_0,
    [NOTE_B2  ... NOTE_CS3] = SAMPLE_VOICE_1,
    [NOTE_D3  ... NOTE_E3]  = SAMPLE_VOICE_2,
    [NOTE_F3  ... NOTE_G3]  = SAMPLE_VOICE_3,
    [NOTE_GS3 ... NOTE_E4]  = SAMPLE_VOICE_4,
    [NOTE_F4]               = SAMPLE_VOICE_5,
    [NOTE_FS4 ... NOTE_G4]  = SAMPLE_VOICE_6,
    [NOTE_GS4 ... NOTE_FS5] = SAMPLE_VOICE_7,
    [NOTE_G5  ... NOTE_C6]  = SAMPLE_VOICE_8,
    [NOTE_CS6]              = SAMPLE_VOICE_9,
    [NOTE_D6  ... NOTE_FS6] = SAMPLE_VOICE_10,
    [NOTE_G6  ... NOTE_B6]  = SAMPLE_VOICE_11,
    [NOTE_C7  ... NOTE_D7]  = SAMPLE_VOICE_12,
    [NOTE_DS7 ... NOTE_B7]  = SAMPLE_VOICE_13,
    [NOTE_C8  ... NOTE_G9]  = SAMPLE_VOICE_14,
};

// 4 - Electric Piano 1
//90 - Pad 3 (Polysynth)
//92 - Pad 5 (Bowed)
const u8 KeySplitTable8[] =
{
    [NOTE_CN1 ... NOTE_AS2] = SAMPLE_VOICE_0,
    [NOTE_B2  ... NOTE_E3]  = SAMPLE_VOICE_1,
    [NOTE_F3  ... NOTE_E4]  = SAMPLE_VOICE_2,
    [NOTE_F4  ... NOTE_FS4] = SAMPLE_VOICE_3,
    [NOTE_G4  ... NOTE_FS5] = SAMPLE_VOICE_4,
    [NOTE_G5  ... NOTE_GS5] = SAMPLE_VOICE_5,
    [NOTE_A5  ... NOTE_FS6] = SAMPLE_VOICE_6,
    [NOTE_G6  ... NOTE_A6]  = SAMPLE_VOICE_7,
    [NOTE_AS6 ... NOTE_F7]  = SAMPLE_VOICE_8,
    [NOTE_FS7 ... NOTE_G9]  = SAMPLE_VOICE_9,
};

// 5 - Electric Piano 2
//24 - Acoustic Guitar (Nylon)
//26 - Electric Guitar (Jazz)
const u8 KeySplitTable9[] =
{
    [NOTE_CN1 ... NOTE_E3]  = SAMPLE_VOICE_0,
    [NOTE_F3  ... NOTE_FS3] = SAMPLE_VOICE_1,
    [NOTE_G3  ... NOTE_C4]  = SAMPLE_VOICE_2,
    [NOTE_CS4 ... NOTE_DS4] = SAMPLE_VOICE_3,
    [NOTE_E4  ... NOTE_FS4] = SAMPLE_VOICE_4,
    [NOTE_G4  ... NOTE_GS4] = SAMPLE_VOICE_5,
    [NOTE_A4  ... NOTE_B4]  = SAMPLE_VOICE_6,
    [NOTE_C5  ... NOTE_E5]  = SAMPLE_VOICE_7,
    [NOTE_F5  ... NOTE_G5]  = SAMPLE_VOICE_8,
    [NOTE_GS5 ... NOTE_C6]  = SAMPLE_VOICE_9,
    [NOTE_CS6 ... NOTE_E6]  = SAMPLE_VOICE_10,
    [NOTE_F6]               = SAMPLE_VOICE_11,
    [NOTE_FS6 ... NOTE_G6]  = SAMPLE_VOICE_12,
    [NOTE_GS6]              = SAMPLE_VOICE_13,
    [NOTE_A6  ... NOTE_CS7] = SAMPLE_VOICE_14,
    [NOTE_D7  ... NOTE_DS7] = SAMPLE_VOICE_15,
    [NOTE_E7]               = SAMPLE_VOICE_16,
    [NOTE_F7  ... NOTE_G9]  = SAMPLE_VOICE_17,
};

// 6 - Harpsichord
//23 - Tango Accordion / Bandoneon
//33 - Electric Bass (Finger)
const u8 KeySplitTable10[] =
{
    [NOTE_CN1 ... NOTE_G2]  = SAMPLE_VOICE_0,
    [NOTE_GS2 ... NOTE_FS3] = SAMPLE_VOICE_1,
    [NOTE_G3  ... NOTE_FS4] = SAMPLE_VOICE_2,
    [NOTE_G4  ... NOTE_B4]  = SAMPLE_VOICE_3,
    [NOTE_C5  ... NOTE_GS5] = SAMPLE_VOICE_4,
    [NOTE_A5  ... NOTE_AS5] = SAMPLE_VOICE_5,
    [NOTE_B5  ... NOTE_B6]  = SAMPLE_VOICE_6,
    [NOTE_C7  ... NOTE_G9]  = SAMPLE_VOICE_7,
};

// 8 - Celesta
//10 - Music Box
//54 - Synth Voice
//72 - Piccolo
const u8 KeySplitTable11[] =
{
    [NOTE_CN1 ... NOTE_AS5] = SAMPLE_VOICE_0,
    [NOTE_B5  ... NOTE_E6]  = SAMPLE_VOICE_1,
    [NOTE_F6]               = SAMPLE_VOICE_2,
    [NOTE_FS6 ... NOTE_D7]  = SAMPLE_VOICE_3,
    [NOTE_DS7 ... NOTE_FS7] = SAMPLE_VOICE_4,
    [NOTE_G7  ... NOTE_G9]  = SAMPLE_VOICE_5,
};

// 9 - Glockenspiel
//44 - Tremolo Strings
//48 - String Ensemble 1
//49 - String Ensemble 2
const u8 KeySplitTable12[] =
{
    [NOTE_CN1 ... NOTE_G3]  = SAMPLE_VOICE_0,
    [NOTE_GS3 ... NOTE_B5]  = SAMPLE_VOICE_1,
    [NOTE_C6  ... NOTE_DS6] = SAMPLE_VOICE_2,
    [NOTE_E6  ... NOTE_G6]  = SAMPLE_VOICE_3,
    [NOTE_GS6 ... NOTE_G9]  = SAMPLE_VOICE_4,
};

//11 - Vibraphone
//19 - Church Organ
//32 - Acoustic Bass
//77 - Shakuhachi
const u8 KeySplitTable13[] =
{
    [NOTE_CN1 ... NOTE_CS2] = SAMPLE_VOICE_0,
    [NOTE_D2  ... NOTE_DS3] = SAMPLE_VOICE_1,
    [NOTE_E3]               = SAMPLE_VOICE_2,
    [NOTE_F3  ... NOTE_A3]  = SAMPLE_VOICE_3,
    [NOTE_AS3 ... NOTE_C4]  = SAMPLE_VOICE_4,
    [NOTE_CS4 ... NOTE_FS4] = SAMPLE_VOICE_5,
    [NOTE_G4  ... NOTE_AS4] = SAMPLE_VOICE_6,
    [NOTE_B4  ... NOTE_CS5] = SAMPLE_VOICE_7,
    [NOTE_D5  ... NOTE_AS5] = SAMPLE_VOICE_8,
    [NOTE_B5  ... NOTE_C6]  = SAMPLE_VOICE_9,
    [NOTE_CS6 ... NOTE_D6]  = SAMPLE_VOICE_10,
    [NOTE_DS6 ... NOTE_A6]  = SAMPLE_VOICE_11,
    [NOTE_AS6 ... NOTE_B6]  = SAMPLE_VOICE_12,
    [NOTE_C7  ... NOTE_FS7] = SAMPLE_VOICE_13,
    [NOTE_G7  ... NOTE_G9]  = SAMPLE_VOICE_14,
};

//12 - Marimba
//79 - Ocarina
//82 - Lead 3 (Calliope)
//87 - Lead 8 (Bass + Lead)
const u8 KeySplitTable14[] =
{
    [NOTE_CN1 ... NOTE_C3]  = SAMPLE_VOICE_0,
    [NOTE_CS3 ... NOTE_CS4] = SAMPLE_VOICE_1,
    [NOTE_D4  ... NOTE_FS5] = SAMPLE_VOICE_2,
    [NOTE_G5  ... NOTE_A5]  = SAMPLE_VOICE_3,
    [NOTE_AS5 ... NOTE_FS6] = SAMPLE_VOICE_4,
    [NOTE_G6  ... NOTE_B6]  = SAMPLE_VOICE_5,
    [NOTE_C7  ... NOTE_FS7] = SAMPLE_VOICE_6,
    [NOTE_G7  ... NOTE_G9]  = SAMPLE_VOICE_7,
};

//13 - Xylophone
//84 - Lead 5 (Charang)
//94 - Pad 7 (Halo)
//102 - FX 7 (Echoes)
const u8 KeySplitTable15[] =
{
    [NOTE_CN1 ... NOTE_C5]  = SAMPLE_VOICE_0,
    [NOTE_CS5 ... NOTE_CS6] = SAMPLE_VOICE_1,
    [NOTE_D6  ... NOTE_E6]  = SAMPLE_VOICE_2,
    [NOTE_F6  ... NOTE_F7]  = SAMPLE_VOICE_3,
    [NOTE_FS7 ... NOTE_G9]  = SAMPLE_VOICE_4,
};

//15 - Dulcimer / Santur
//31 - Guitar Harmonics
//45 - Pizzicato Strings
//52 - Choir Aahs
const u8 KeySplitTable16[] =
{
    [NOTE_CN1 ... NOTE_E4]  = SAMPLE_VOICE_0,
    [NOTE_F4  ... NOTE_CS6] = SAMPLE_VOICE_1,
    [NOTE_D6  ... NOTE_DS6] = SAMPLE_VOICE_2,
    [NOTE_E6]               = SAMPLE_VOICE_3,
    [NOTE_F6  ... NOTE_G9]  = SAMPLE_VOICE_4,
};

//16 - Drawbar Organ
//17 - Percussive Organ
//18 - Rock Organ
//20 - Reed Organ
const u8 KeySplitTable17[] =
{
    [NOTE_CN1 ... NOTE_G3]  = SAMPLE_VOICE_0,
    [NOTE_GS3 ... NOTE_E4]  = SAMPLE_VOICE_1,
    [NOTE_F4  ... NOTE_GS4] = SAMPLE_VOICE_2,
    [NOTE_A4]               = SAMPLE_VOICE_3,
    [NOTE_AS4 ... NOTE_G5]  = SAMPLE_VOICE_4,
    [NOTE_GS5 ... NOTE_AS5] = SAMPLE_VOICE_5,
    [NOTE_B5  ... NOTE_GS6] = SAMPLE_VOICE_6,
    [NOTE_A6  ... NOTE_G9]  = SAMPLE_VOICE_7,
};

//21 - Accordion
//50 - Synth Strings 1
//51 - Synth Strings 2
//95 - Pad 8 (Sweep)
const u8 KeySplitTable18[] =
{
    [NOTE_CN1 ... NOTE_E3]  = SAMPLE_VOICE_0,
    [NOTE_F3]               = SAMPLE_VOICE_1,
    [NOTE_FS3 ... NOTE_E5]  = SAMPLE_VOICE_2,
    [NOTE_F5  ... NOTE_FS5] = SAMPLE_VOICE_3,
    [NOTE_G5  ... NOTE_C6]  = SAMPLE_VOICE_4,
    [NOTE_CS6 ... NOTE_B6]  = SAMPLE_VOICE_5,
    [NOTE_C7  ... NOTE_G9]  = SAMPLE_VOICE_6,
};

//22 - Harmonica
//25 - Acoustic Guitar (Steel)
//27 - Electric Guitar (Clean)
//62 - Synth Brass 1
//67 - Baritone Sax
const u8 KeySplitTable19[] =
{
    [NOTE_CN1 ... NOTE_E2]  = SAMPLE_VOICE_0,
    [NOTE_F2  ... NOTE_GS2] = SAMPLE_VOICE_1,
    [NOTE_A2]               = SAMPLE_VOICE_2,
    [NOTE_AS2 ... NOTE_F3]  = SAMPLE_VOICE_3,
    [NOTE_FS3]              = SAMPLE_VOICE_4,
    [NOTE_G3  ... NOTE_C4]  = SAMPLE_VOICE_5,
    [NOTE_CS4 ... NOTE_D4]  = SAMPLE_VOICE_6,
    [NOTE_DS4 ... NOTE_E4]  = SAMPLE_VOICE_7,
    [NOTE_F4  ... NOTE_GS4] = SAMPLE_VOICE_8,
    [NOTE_A4]               = SAMPLE_VOICE_9,
    [NOTE_AS4]              = SAMPLE_VOICE_10,
    [NOTE_B4]               = SAMPLE_VOICE_11,
    [NOTE_C5]               = SAMPLE_VOICE_12,
    [NOTE_CS5 ... NOTE_E5]  = SAMPLE_VOICE_13,
    [NOTE_F5  ... NOTE_A5]  = SAMPLE_VOICE_14,
    [NOTE_AS5 ... NOTE_C6]  = SAMPLE_VOICE_15,
    [NOTE_CS6 ... NOTE_D6]  = SAMPLE_VOICE_16,
    [NOTE_DS6 ... NOTE_E6]  = SAMPLE_VOICE_17,
    [NOTE_F6  ... NOTE_GS6] = SAMPLE_VOICE_18,
    [NOTE_A6  ... NOTE_B6]  = SAMPLE_VOICE_19,
    [NOTE_C7  ... NOTE_CS7] = SAMPLE_VOICE_20,
    [NOTE_D7  ... NOTE_DS7] = SAMPLE_VOICE_21,
    [NOTE_E7  ... NOTE_F7]  = SAMPLE_VOICE_22,
    [NOTE_FS7 ... NOTE_G9]  = SAMPLE_VOICE_23,
};

//28 - Electric Guitar (Muted)
//34 - Electric Bass (Pick)
//35 - Fretless Bass
//68 - Oboe
const u8 KeySplitTable20[] =
{
    [NOTE_CN1 ... NOTE_B1]  = SAMPLE_VOICE_0,
    [NOTE_C2  ... NOTE_FS2] = SAMPLE_VOICE_1,
    [NOTE_G2  ... NOTE_A2]  = SAMPLE_VOICE_2,
    [NOTE_AS2 ... NOTE_E4]  = SAMPLE_VOICE_3,
    [NOTE_F4  ... NOTE_FS4] = SAMPLE_VOICE_4,
    [NOTE_G4  ... NOTE_A4]  = SAMPLE_VOICE_5,
    [NOTE_AS4 ... NOTE_C5]  = SAMPLE_VOICE_6,
    [NOTE_CS5 ... NOTE_FS5] = SAMPLE_VOICE_7,
    [NOTE_G5]               = SAMPLE_VOICE_8,
    [NOTE_GS5 ... NOTE_D6]  = SAMPLE_VOICE_9,
    [NOTE_DS6 ... NOTE_E6]  = SAMPLE_VOICE_10,
    [NOTE_F6  ... NOTE_G6]  = SAMPLE_VOICE_11,
    [NOTE_GS6 ... NOTE_CS7] = SAMPLE_VOICE_12,
    [NOTE_D7  ... NOTE_DS7] = SAMPLE_VOICE_13,
    [NOTE_E7  ... NOTE_FS7] = SAMPLE_VOICE_14,
    [NOTE_G7  ... NOTE_G9]  = SAMPLE_VOICE_15,
};

//29 - Overdriven Guitar
//56 - Trumpet
//57 - Trombone
const u8 KeySplitTable21[] =
{
    [NOTE_CN1 ... NOTE_G2]  = SAMPLE_VOICE_0,
    [NOTE_GS2]              = SAMPLE_VOICE_1,
    [NOTE_A2  ... NOTE_CS3] = SAMPLE_VOICE_2,
    [NOTE_D3]               = SAMPLE_VOICE_3,
    [NOTE_DS3 ... NOTE_A3]  = SAMPLE_VOICE_4,
    [NOTE_AS3 ... NOTE_DS4] = SAMPLE_VOICE_5,
    [NOTE_E4]               = SAMPLE_VOICE_6,
    [NOTE_F4]               = SAMPLE_VOICE_7,
    [NOTE_FS4 ... NOTE_AS4] = SAMPLE_VOICE_8,
    [NOTE_B4  ... NOTE_C5]  = SAMPLE_VOICE_9,
    [NOTE_CS5]              = SAMPLE_VOICE_10,
    [NOTE_D5  ... NOTE_F5]  = SAMPLE_VOICE_11,
    [NOTE_FS5 ... NOTE_A5]  = SAMPLE_VOICE_12,
    [NOTE_AS5 ... NOTE_D6]  = SAMPLE_VOICE_13,
    [NOTE_DS6 ... NOTE_E6]  = SAMPLE_VOICE_14,
    [NOTE_F6]               = SAMPLE_VOICE_15,
    [NOTE_FS6 ... NOTE_A6]  = SAMPLE_VOICE_16,
    [NOTE_AS6 ... NOTE_C7]  = SAMPLE_VOICE_17,
    [NOTE_CS7 ... NOTE_G7]  = SAMPLE_VOICE_18,
    [NOTE_GS7 ... NOTE_G9]  = SAMPLE_VOICE_19,
};

//30 - Distortion Guitar
//40 - Violin
//41 - Viola
const u8 KeySplitTable22[] =
{
    [NOTE_CN1 ... NOTE_C3]  = SAMPLE_VOICE_0,
    [NOTE_CS3 ... NOTE_FS3] = SAMPLE_VOICE_1,
    [NOTE_G3  ... NOTE_B3]  = SAMPLE_VOICE_2,
    [NOTE_C4]               = SAMPLE_VOICE_3,
    [NOTE_CS4 ... NOTE_D4]  = SAMPLE_VOICE_4,
    [NOTE_DS4 ... NOTE_E4]  = SAMPLE_VOICE_5,
    [NOTE_F4  ... NOTE_GS4] = SAMPLE_VOICE_6,
    [NOTE_A4  ... NOTE_AS4] = SAMPLE_VOICE_7,
    [NOTE_B4]               = SAMPLE_VOICE_8,
    [NOTE_C5]               = SAMPLE_VOICE_9,
    [NOTE_CS5 ... NOTE_E5]  = SAMPLE_VOICE_10,
    [NOTE_F5]               = SAMPLE_VOICE_11,
    [NOTE_FS5 ... NOTE_GS5] = SAMPLE_VOICE_12,
    [NOTE_A5  ... NOTE_C6]  = SAMPLE_VOICE_13,
    [NOTE_CS6 ... NOTE_E6]  = SAMPLE_VOICE_14,
    [NOTE_F6  ... NOTE_FS6] = SAMPLE_VOICE_15,
    [NOTE_G6  ... NOTE_GS6] = SAMPLE_VOICE_16,
    [NOTE_A6  ... NOTE_C7]  = SAMPLE_VOICE_17,
    [NOTE_CS7 ... NOTE_F7]  = SAMPLE_VOICE_18,
    [NOTE_FS7 ... NOTE_A7]  = SAMPLE_VOICE_19,
    [NOTE_AS7]              = SAMPLE_VOICE_20,
    [NOTE_B7  ... NOTE_G9]  = SAMPLE_VOICE_21,
};

//36 - Slap Bass 1
//37 - Slap Bass 2
//38 - Synth Bass 1
const u8 KeySplitTable23[] =
{
    [NOTE_CN1 ... NOTE_D2]  = SAMPLE_VOICE_0,
    [NOTE_DS2 ... NOTE_A2]  = SAMPLE_VOICE_1,
    [NOTE_AS2 ... NOTE_C4]  = SAMPLE_VOICE_2,
    [NOTE_CS4 ... NOTE_G4]  = SAMPLE_VOICE_3,
    [NOTE_GS4 ... NOTE_A4]  = SAMPLE_VOICE_4,
    [NOTE_AS4 ... NOTE_FS6] = SAMPLE_VOICE_5,
    [NOTE_G6  ... NOTE_GS7] = SAMPLE_VOICE_6,
    [NOTE_A7  ... NOTE_G9]  = SAMPLE_VOICE_7,
};

//39 - Synth Bass 2
//46 - Orchestral Harp
//53 - Voice Oohs
const u8 KeySplitTable24[] =
{
    [NOTE_CN1 ... NOTE_G2]  = SAMPLE_VOICE_0,
    [NOTE_GS2 ... NOTE_D4]  = SAMPLE_VOICE_1,
    [NOTE_DS4 ... NOTE_FS4] = SAMPLE_VOICE_2,
    [NOTE_G4  ... NOTE_GS4] = SAMPLE_VOICE_3,
    [NOTE_A4  ... NOTE_E5]  = SAMPLE_VOICE_4,
    [NOTE_F5  ... NOTE_C6]  = SAMPLE_VOICE_5,
    [NOTE_CS6 ... NOTE_D6]  = SAMPLE_VOICE_6,
    [NOTE_DS6 ... NOTE_C7]  = SAMPLE_VOICE_7,
    [NOTE_CS7 ... NOTE_E7]  = SAMPLE_VOICE_8,
    [NOTE_F7  ... NOTE_G9]  = SAMPLE_VOICE_9,
};

// 42 - Cello
// 43 - Contrabass
// 65 - Alto Sax
//110 - Fiddle
const u8 KeySplitTable25[] =
{
    [NOTE_CN1 ... NOTE_A1]  = SAMPLE_VOICE_0,
    [NOTE_AS1 ... NOTE_D2]  = SAMPLE_VOICE_1,
    [NOTE_DS2 ... NOTE_A2]  = SAMPLE_VOICE_2,
    [NOTE_AS2 ... NOTE_F3]  = SAMPLE_VOICE_3,
    [NOTE_FS3]              = SAMPLE_VOICE_4,
    [NOTE_G3]               = SAMPLE_VOICE_5,
    [NOTE_GS3 ... NOTE_B3]  = SAMPLE_VOICE_6,
    [NOTE_C4  ... NOTE_DS4] = SAMPLE_VOICE_7,
    [NOTE_E4  ... NOTE_F4]  = SAMPLE_VOICE_8,
    [NOTE_FS4 ... NOTE_GS4] = SAMPLE_VOICE_9,
    [NOTE_A4]               = SAMPLE_VOICE_10,
    [NOTE_AS4]              = SAMPLE_VOICE_11,
    [NOTE_B4  ... NOTE_C5]  = SAMPLE_VOICE_12,
    [NOTE_CS5 ... NOTE_E5]  = SAMPLE_VOICE_13,
    [NOTE_F5]               = SAMPLE_VOICE_14,
    [NOTE_FS5 ... NOTE_GS5] = SAMPLE_VOICE_15,
    [NOTE_A5  ... NOTE_DS6] = SAMPLE_VOICE_16,
    [NOTE_E6]               = SAMPLE_VOICE_17,
    [NOTE_F6  ... NOTE_G6]  = SAMPLE_VOICE_18,
    [NOTE_GS6 ... NOTE_B6]  = SAMPLE_VOICE_19,
    [NOTE_C7]               = SAMPLE_VOICE_20,
    [NOTE_CS7 ... NOTE_FS7] = SAMPLE_VOICE_21,
    [NOTE_G7  ... NOTE_A7]  = SAMPLE_VOICE_22,
    [NOTE_AS7]              = SAMPLE_VOICE_23,
    [NOTE_B7  ... NOTE_G9]  = SAMPLE_VOICE_24,
};

//58 - Tuba
//66 - Tenor Sax
const u8 KeySplitTable26[] =
{
    [NOTE_CN1 ... NOTE_DS2] = SAMPLE_VOICE_0,
    [NOTE_E2  ... NOTE_G2]  = SAMPLE_VOICE_1,
    [NOTE_GS2 ... NOTE_FS3] = SAMPLE_VOICE_2,
    [NOTE_G3]               = SAMPLE_VOICE_3,
    [NOTE_GS3 ... NOTE_C4]  = SAMPLE_VOICE_4,
    [NOTE_CS4 ... NOTE_E4]  = SAMPLE_VOICE_5,
    [NOTE_F4]               = SAMPLE_VOICE_6,
    [NOTE_FS4 ... NOTE_B4]  = SAMPLE_VOICE_7,
    [NOTE_C5]               = SAMPLE_VOICE_8,
    [NOTE_CS5 ... NOTE_FS5] = SAMPLE_VOICE_9,
    [NOTE_G5  ... NOTE_A5]  = SAMPLE_VOICE_10,
    [NOTE_AS5 ... NOTE_D6]  = SAMPLE_VOICE_11,
    [NOTE_DS6 ... NOTE_E6]  = SAMPLE_VOICE_12,
    [NOTE_G6  ... NOTE_A6]  = SAMPLE_VOICE_13,
    [NOTE_AS6]              = SAMPLE_VOICE_14,
    [NOTE_B6  ... NOTE_G7]  = SAMPLE_VOICE_15,
    [NOTE_GS7 ... NOTE_G9]  = SAMPLE_VOICE_16,
};

//59 - Muted Trumpet
//64 - Soprano Sax
//69 - English Horn
//73 - Flute
const u8 KeySplitTable27[] =
{
    [NOTE_CN1 ... NOTE_A3]  = SAMPLE_VOICE_0,
    [NOTE_AS3 ... NOTE_F4]  = SAMPLE_VOICE_1,
    [NOTE_FS4]              = SAMPLE_VOICE_2,
    [NOTE_G4  ... NOTE_A4]  = SAMPLE_VOICE_3,
    [NOTE_AS4]              = SAMPLE_VOICE_4,
    [NOTE_B4  ... NOTE_D5]  = SAMPLE_VOICE_5,
    [NOTE_DS5]              = SAMPLE_VOICE_6,
    [NOTE_E5]               = SAMPLE_VOICE_7,
    [NOTE_F5]               = SAMPLE_VOICE_8,
    [NOTE_FS5 ... NOTE_A5]  = SAMPLE_VOICE_9,
    [NOTE_AS5]              = SAMPLE_VOICE_10,
    [NOTE_B5  ... NOTE_C6]  = SAMPLE_VOICE_11,
    [NOTE_CS6]              = SAMPLE_VOICE_12,
    [NOTE_D6  ... NOTE_DS6] = SAMPLE_VOICE_13,
    [NOTE_E6]               = SAMPLE_VOICE_14,
    [NOTE_F6  ... NOTE_G6]  = SAMPLE_VOICE_15,
    [NOTE_GS6 ... NOTE_A6]  = SAMPLE_VOICE_16,
    [NOTE_AS6 ... NOTE_B6]  = SAMPLE_VOICE_17,
    [NOTE_C7  ... NOTE_CS7] = SAMPLE_VOICE_18,
    [NOTE_D7  ... NOTE_E7]  = SAMPLE_VOICE_19,
    [NOTE_F7  ... NOTE_FS7] = SAMPLE_VOICE_20,
    [NOTE_G7]               = SAMPLE_VOICE_21,
    [NOTE_GS7 ... NOTE_G9] = SAMPLE_VOICE_22,
};

//60 - French Horn
//61 - Brass Section
//88 - Pad 1 (New Age)
const u8 KeySplitTable28[] =
{
    [NOTE_CN1 ... NOTE_G4]  = SAMPLE_VOICE_0,
    [NOTE_GS4]              = SAMPLE_VOICE_1,
    [NOTE_A4  ... NOTE_B4]  = SAMPLE_VOICE_2,
    [NOTE_C5  ... NOTE_GS5] = SAMPLE_VOICE_3,
    [NOTE_A5  ... NOTE_FS6] = SAMPLE_VOICE_4,
    [NOTE_G6  ... NOTE_DS7] = SAMPLE_VOICE_5,
    [NOTE_E7  ... NOTE_G9] = SAMPLE_VOICE_6,
};

// 63 - Synth Brass 2
// 70 - Bassoon
//107 - Koto
const u8 KeySplitTable29[] =
{
    [NOTE_CN1 ... NOTE_B2]  = SAMPLE_VOICE_0,
    [NOTE_C3  ... NOTE_D3]  = SAMPLE_VOICE_1,
    [NOTE_DS3 ... NOTE_G4]  = SAMPLE_VOICE_2,
    [NOTE_GS4 ... NOTE_CS5] = SAMPLE_VOICE_3,
    [NOTE_D5  ... NOTE_D6]  = SAMPLE_VOICE_4,
    [NOTE_DS6 ... NOTE_E6]  = SAMPLE_VOICE_5,
    [NOTE_F6  ... NOTE_B6]  = SAMPLE_VOICE_6,
    [NOTE_C7  ... NOTE_CS7] = SAMPLE_VOICE_7,
    [NOTE_D7  ... NOTE_F7]  = SAMPLE_VOICE_8,
    [NOTE_FS7 ... NOTE_G9]  = SAMPLE_VOICE_9,
};

// 71 - Clarinet
// 74 - Recorder
// 80 - Lead 1 (Square)
//109 - Bagpipe
const u8 KeySplitTable30[] =
{
    [NOTE_CN1 ... NOTE_D2]  = SAMPLE_VOICE_0,
    [NOTE_DS2 ... NOTE_E3]  = SAMPLE_VOICE_1,
    [NOTE_F3  ... NOTE_GS3] = SAMPLE_VOICE_2,
    [NOTE_A3]               = SAMPLE_VOICE_3,
    [NOTE_AS3 ... NOTE_DS4] = SAMPLE_VOICE_4,
    [NOTE_E4  ... NOTE_A4]  = SAMPLE_VOICE_5,
    [NOTE_AS4]              = SAMPLE_VOICE_6,
    [NOTE_B4  ... NOTE_F5]  = SAMPLE_VOICE_7,
    [NOTE_FS5]              = SAMPLE_VOICE_8,
    [NOTE_G5  ... NOTE_GS5] = SAMPLE_VOICE_9,
    [NOTE_A5  ... NOTE_CS6] = SAMPLE_VOICE_10,
    [NOTE_D6  ... NOTE_E6]  = SAMPLE_VOICE_11,
    [NOTE_F6  ... NOTE_GS6] = SAMPLE_VOICE_12,
    [NOTE_A6  ... NOTE_B6]  = SAMPLE_VOICE_13,
    [NOTE_C7  ... NOTE_CS7] = SAMPLE_VOICE_14,
    [NOTE_D7  ... NOTE_DS7] = SAMPLE_VOICE_15,
    [NOTE_E7  ... NOTE_G9]  = SAMPLE_VOICE_16,
};

// 75 - Pan Flute
// 76 - Blown Bottle
// 96 - FX 1 (Rain)
//104 - Sitar
//108 - Kalimba
const u8 KeySplitTable31[] =
{
    [NOTE_CN1 ... NOTE_AS4] = SAMPLE_VOICE_0,
    [NOTE_B4  ... NOTE_FS5] = SAMPLE_VOICE_1,
    [NOTE_G5  ... NOTE_A5]  = SAMPLE_VOICE_2,
    [NOTE_AS5 ... NOTE_CS7] = SAMPLE_VOICE_3,
    [NOTE_D7  ... NOTE_G7]  = SAMPLE_VOICE_4,
    [NOTE_GS7 ... NOTE_G9]  = SAMPLE_VOICE_5,
};

// 83 - Lead 4 (Chiff)
//103 - FX 8 (Sci-Fi)
//121 - Breath Noise
const u8 KeySplitTable32[] =
{
    [NOTE_CN1 ... NOTE_FS5] = SAMPLE_VOICE_0,
    [NOTE_G5  ... NOTE_B5]  = SAMPLE_VOICE_1,
    [NOTE_C6  ... NOTE_E6]  = SAMPLE_VOICE_2,
    [NOTE_F6  ... NOTE_E7]  = SAMPLE_VOICE_3,
    [NOTE_F7  ... NOTE_C8]  = SAMPLE_VOICE_4,
    [NOTE_CS8 ... NOTE_G9]  = SAMPLE_VOICE_5,
};

//85 - Lead 6 (Voice)
//89 - Pad 2 (Warm)
//97 - FX 2 (Soundtrack)
//98 - FX 3 (Crystal)
const u8 KeySplitTable33[] =
{
    [NOTE_CN1 ... NOTE_A4]  = SAMPLE_VOICE_0,
    [NOTE_AS4 ... NOTE_F5]  = SAMPLE_VOICE_1,
    [NOTE_FS5 ... NOTE_FS7] = SAMPLE_VOICE_2,
    [NOTE_G7  ... NOTE_GS7] = SAMPLE_VOICE_3,
    [NOTE_A7  ... NOTE_G9]  = SAMPLE_VOICE_4,
};

// 86 - Lead 7 (Fifths)
// 99 - FX 4 (Atmosphere)
//100 - FX 5 (Brightness)
//114 - Steel Drums
const u8 KeySplitTable34[] =
{
    [NOTE_CN1 ... NOTE_G5] = SAMPLE_VOICE_0,
    [NOTE_GS5]             = SAMPLE_VOICE_1,
    [NOTE_A5  ... NOTE_A7] = SAMPLE_VOICE_2,
    [NOTE_AS7]             = SAMPLE_VOICE_3,
    [NOTE_B7  ... NOTE_G9] = SAMPLE_VOICE_4,
};

//105 - Banjo
//106 - Shamisen
//111 - Shanai
//126 - Applause
const u8 KeySplitTable35[] =
{
    [NOTE_CN1 ... NOTE_B3]  = SAMPLE_VOICE_0,
    [NOTE_C4  ... NOTE_E4]  = SAMPLE_VOICE_1,
    [NOTE_F4  ... NOTE_B4]  = SAMPLE_VOICE_2,
    [NOTE_C5  ... NOTE_D5]  = SAMPLE_VOICE_3,
    [NOTE_DS5 ... NOTE_G5]  = SAMPLE_VOICE_4,
    [NOTE_GS5 ... NOTE_CS6] = SAMPLE_VOICE_5,
    [NOTE_D6  ... NOTE_B6]  = SAMPLE_VOICE_6,
    [NOTE_C7  ... NOTE_F7]  = SAMPLE_VOICE_7,
    [NOTE_FS7 ... NOTE_GS7] = SAMPLE_VOICE_8,
    [NOTE_A7  ... NOTE_G9]  = SAMPLE_VOICE_9,
};

// AR Trumpet
const u8 KeySplitTable36[] =
{
    [NOTE_CN1 ... NOTE_FS3] = SAMPLE_VOICE_0,
    [NOTE_G3]  = SAMPLE_VOICE_1,
    [NOTE_GS3] = SAMPLE_VOICE_2,
    [NOTE_A3]  = SAMPLE_VOICE_3,
    [NOTE_AS3] = SAMPLE_VOICE_4,
    [NOTE_B3]  = SAMPLE_VOICE_5,
    [NOTE_C4]  = SAMPLE_VOICE_6,
    [NOTE_CS4] = SAMPLE_VOICE_7,
    [NOTE_D4]  = SAMPLE_VOICE_8,
    [NOTE_DS4] = SAMPLE_VOICE_9,
    [NOTE_E4]  = SAMPLE_VOICE_10,
    [NOTE_F4]  = SAMPLE_VOICE_11,
    [NOTE_FS4] = SAMPLE_VOICE_12,
    [NOTE_G4]  = SAMPLE_VOICE_13,
    [NOTE_GS4] = SAMPLE_VOICE_14,
    [NOTE_A4]  = SAMPLE_VOICE_15,
    [NOTE_AS4 ... NOTE_D5] = SAMPLE_VOICE_16,
    [NOTE_DS5] = SAMPLE_VOICE_17,
    [NOTE_E5]  = SAMPLE_VOICE_18,
    [NOTE_F5]  = SAMPLE_VOICE_19,
    [NOTE_FS5] = SAMPLE_VOICE_20,
    [NOTE_G5]  = SAMPLE_VOICE_21,
    [NOTE_GS5] = SAMPLE_VOICE_22,
    [NOTE_A5]  = SAMPLE_VOICE_23,
    [NOTE_AS5] = SAMPLE_VOICE_24,
    [NOTE_B5]  = SAMPLE_VOICE_25,
    [NOTE_C6]  = SAMPLE_VOICE_26,
    [NOTE_CS6] = SAMPLE_VOICE_27,
    [NOTE_D6]  = SAMPLE_VOICE_28,
    [NOTE_DS6] = SAMPLE_VOICE_29,
    [NOTE_E6]  = SAMPLE_VOICE_30,
    [NOTE_F6 ... NOTE_G9] = SAMPLE_VOICE_31,
};

// Florestan French Horns
const u8 KeySplitTable37[] =
{
    [NOTE_CN1 ... NOTE_DS2] = SAMPLE_VOICE_0,
    [NOTE_E2  ... NOTE_A2]  = SAMPLE_VOICE_1,
    [NOTE_AS2 ... NOTE_DS3] = SAMPLE_VOICE_2,
    [NOTE_E3  ... NOTE_A3]  = SAMPLE_VOICE_3,
    [NOTE_AS3 ... NOTE_DS4] = SAMPLE_VOICE_4,
    [NOTE_E4  ... NOTE_A4]  = SAMPLE_VOICE_5,
    [NOTE_AS4 ... NOTE_G9]  = SAMPLE_VOICE_6,
};

// Guitars
const u8 KeySplitTable38[] =
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

// Guitars v2 ++
const u8 KeySplitTable39[] =
{
    [NOTE_CN1 ... NOTE_G3] = SAMPLE_VOICE_0,
    [NOTE_GS3 ... NOTE_C4] = SAMPLE_VOICE_1,
    [NOTE_CS4 ... NOTE_F4] = SAMPLE_VOICE_2,
    [NOTE_FS4 ... NOTE_A4] = SAMPLE_VOICE_3,
    [NOTE_AS4 ... NOTE_C5] = SAMPLE_VOICE_4,
    [NOTE_CS5 ... NOTE_F5] = SAMPLE_VOICE_5,
    [NOTE_FS5 ... NOTE_A5] = SAMPLE_VOICE_6,
    [NOTE_AS5 ... NOTE_C6] = SAMPLE_VOICE_7,
    [NOTE_CS6 ... NOTE_E6] = SAMPLE_VOICE_8,
    [NOTE_F6  ... NOTE_B6] = SAMPLE_VOICE_9,
    [NOTE_C7  ... NOTE_G9] = SAMPLE_VOICE_10,
};

// Guitars v3
const u8 KeySplitTable40[] =
{
    [NOTE_CN1 ... NOTE_C3]  = SAMPLE_VOICE_0,
    [NOTE_CS3 ... NOTE_FS3] = SAMPLE_VOICE_1,
    [NOTE_G3  ... NOTE_C4]  = SAMPLE_VOICE_2,
    [NOTE_CS4 ... NOTE_FS4] = SAMPLE_VOICE_3,
    [NOTE_G4  ... NOTE_C5]  = SAMPLE_VOICE_4,
    [NOTE_CS5 ... NOTE_FS5] = SAMPLE_VOICE_5,
    [NOTE_G5  ... NOTE_C6]  = SAMPLE_VOICE_6,
    [NOTE_CS6 ... NOTE_FS6] = SAMPLE_VOICE_7,
    [NOTE_G6  ... NOTE_G9]  = SAMPLE_VOICE_8,
};


//--------------------------------------------------------------
//  Universal Voicegroup FE7 - Instruments Voicegroups
//--------------------------------------------------------------

// KeySplitTable6
const union VoiceGroup voicegroup_FE7_AcousticGrandPiano[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_2, 255, 254, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_2, 255, 254, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_2, 255, 254, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_4, 255, 254, 0, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_4, 255, 254, 0, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_4, 255, 254, 0, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_5, 255, 254, 0, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_5, 255, 254, 0, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_6, 255, 254, 0, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_6, 255, 254, 0, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_7, 255, 254, 0, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_7, 255, 254, 0, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_8, 255, 254, 0, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_8, 255, 254, 0, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_8, 255, 254, 0, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_9, 255, 254, 0, 235),
    [SAMPLE_VOICE_22] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_9, 255, 254, 0, 235),
    [SAMPLE_VOICE_23] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_9, 255, 254, 0, 235),
};

// KeySplitTable6
const union VoiceGroup voicegroup_FE7_BrightAcousticPiano[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_2, 255, 254, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_2, 255, 254, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_4, 255, 254, 0, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_4, 255, 254, 0, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_4, 255, 254, 0, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_5, 255, 254, 0, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_5, 255, 254, 0, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_6, 255, 254, 0, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_6, 255, 254, 0, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_7, 255, 254, 0, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_7, 255, 254, 0, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_8, 255, 254, 0, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_8, 255, 254, 0, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_8, 255, 254, 0, 235),
    [SAMPLE_VOICE_22] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_9, 255, 254, 0, 235),
    [SAMPLE_VOICE_23] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_9, 255, 254, 0, 235),
};

// KeySplitTable6
const union VoiceGroup voicegroup_FE7_ElectricGrandPiano[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_2, 255, 254, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_2, 255, 254, 0, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_4, 255, 254, 0, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_4, 255, 254, 0, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_4, 255, 254, 0, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_5, 255, 254, 0, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_5, 255, 254, 0, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_6, 255, 254, 0, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_6, 255, 254, 0, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_7, 255, 254, 0, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_7, 255, 254, 0, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_8, 255, 254, 0, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_8, 255, 254, 0, 235),
    [SAMPLE_VOICE_22] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_8, 255, 254, 0, 235),
    [SAMPLE_VOICE_23] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_000_piano_9, 255, 254, 0, 235),
};

// KeySplitTable7
const union VoiceGroup voicegroup_FE7_HonkyTonkPiano[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_2, 255, 254, 0, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_4, 255, 254, 0, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_4, 255, 254, 0, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_4, 255, 254, 0, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_4, 255, 254, 0, 235),
};

// KeySplitTable8
const union VoiceGroup voicegroup_FE7_ElectricPiano1[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_2, 255, 254, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_2, 255, 254, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_4, 255, 254, 0, 235),
};

// KeySplitTable9
const union VoiceGroup voicegroup_FE7_ElectricPiano2[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_0, 255, 246, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_0, 255, 246, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_0, 255, 246, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_1, 255, 246, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_1, 255, 246, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_1, 255, 246, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_2, 255, 246, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_2, 255, 246, 0, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_3, 255, 246, 0, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_3, 255, 246, 0, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_4, 255, 246, 0, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_4, 255, 246, 0, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_4, 255, 246, 0, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_4, 255, 246, 0, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_5, 255, 246, 0, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_5, 255, 246, 0, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_5, 255, 246, 0, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_005_electric_piano_6, 255, 246, 0, 235),
};

// KeySplitTable10
const union VoiceGroup voicegroup_FE7_Harpsichord[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_006_harpsichord_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_006_harpsichord_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_006_harpsichord_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_006_harpsichord_2, 255, 254, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_006_harpsichord_2, 255, 254, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_006_harpsichord_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_006_harpsichord_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_006_harpsichord_3, 255, 254, 0, 235),
};

// KeySplitTable7
const union VoiceGroup voicegroup_FE7_Clavinet[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_007_clavinet_0, 255, 249, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_007_clavinet_1, 255, 249, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_007_clavinet_1, 255, 249, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_007_clavinet_1, 255, 249, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_007_clavinet_1, 255, 249, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_007_clavinet_1, 255, 249, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_007_clavinet_2, 255, 249, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_007_clavinet_2, 255, 249, 0, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_007_clavinet_3, 255, 249, 0, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_007_clavinet_3, 255, 249, 0, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_007_clavinet_3, 255, 249, 0, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_007_clavinet_3, 255, 249, 0, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_007_clavinet_4, 255, 249, 0, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_007_clavinet_4, 255, 249, 0, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_007_clavinet_4, 255, 249, 0, 235),
};

// KeySplitTable11
const union VoiceGroup voicegroup_FE7_Celesta[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_008_celesta_0, 255, 249, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_008_celesta_0, 255, 249, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_008_celesta_0, 255, 249, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_008_celesta_0, 255, 249, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_008_celesta_1, 255, 249, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_008_celesta_2, 255, 249, 0, 235),
};

// KeySplitTable12
const union VoiceGroup voicegroup_FE7_Glockenspiel[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_009_glockenspiel_0, 255, 249, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_009_glockenspiel_0, 255, 249, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_009_glockenspiel_0, 255, 249, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_009_glockenspiel_1, 255, 249, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_009_glockenspiel_2, 255, 249, 0, 235),
};

// KeySplitTable11
const union VoiceGroup voicegroup_FE7_MusicBox[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_010_music_box, 255, 249, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_010_music_box, 255, 249, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_008_celesta_1, 255, 249, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_008_celesta_1, 255, 249, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_008_celesta_1, 255, 249, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_008_celesta_2, 255, 249, 0, 235),
};

// KeySplitTable13
const union VoiceGroup voicegroup_FE7_Vibraphone[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_011_vibraphone_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_011_vibraphone_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_011_vibraphone_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_011_vibraphone_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_011_vibraphone_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_011_vibraphone_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_011_vibraphone_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_011_vibraphone_2, 255, 254, 0, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_011_vibraphone_2, 255, 254, 0, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_011_vibraphone_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_011_vibraphone_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_011_vibraphone_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_011_vibraphone_4, 255, 254, 0, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_011_vibraphone_4, 255, 254, 0, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_011_vibraphone_4, 255, 254, 0, 235),
};

// KeySplitTable14
const union VoiceGroup voicegroup_FE7_Marimba[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_012_marimba_0, 255, 249, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_012_marimba_1, 255, 249, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_012_marimba_1, 255, 249, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_012_marimba_1, 255, 249, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_008_celesta_2, 255, 249, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_008_celesta_2, 255, 249, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_008_celesta_2, 255, 249, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_008_celesta_2, 255, 249, 0, 235),
};

// KeySplitTable15
const union VoiceGroup voicegroup_FE7_Xylophone[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_013_xylophone_0, 255, 235, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_013_xylophone_0, 255, 235, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_013_xylophone_0, 255, 235, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_013_xylophone_1, 255, 235, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_008_celesta_2, 255, 235, 0, 235),
};

// KeySplitTable16
const union VoiceGroup voicegroup_FE7_Dulcimer[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_015_dulcimer_santur, 255, 249, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_015_dulcimer_santur, 255, 249, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_015_dulcimer_santur, 255, 249, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_007_clavinet_4, 255, 249, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_007_clavinet_4, 255, 249, 0, 235),
};

// KeySplitTable17
const union VoiceGroup voicegroup_FE7_DrawbarOrgan[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_016_drawbar_organ_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_016_drawbar_organ_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_016_drawbar_organ_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_016_drawbar_organ_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_016_drawbar_organ_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_016_drawbar_organ_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_016_drawbar_organ_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_016_drawbar_organ_2, 255, 0, 255, 235),
};

// KeySplitTable17
const union VoiceGroup voicegroup_FE7_PercussiveOrgan[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_017_percussive_organ_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_017_percussive_organ_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_017_percussive_organ_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_017_percussive_organ_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_017_percussive_organ_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_017_percussive_organ_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_017_percussive_organ_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_017_percussive_organ_2, 255, 0, 255, 235),
};

// KeySplitTable17
const union VoiceGroup voicegroup_FE7_RockOrgan[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_018_rock_organ_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_018_rock_organ_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_018_rock_organ_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_018_rock_organ_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_018_rock_organ_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_018_rock_organ_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_018_rock_organ_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_018_rock_organ_2, 255, 0, 255, 235),
};

// KeySplitTable13
const union VoiceGroup voicegroup_FE7_ChurchOrgan[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_019_church_organ_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_019_church_organ_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_019_church_organ_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_019_church_organ_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_019_church_organ_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_019_church_organ_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_019_church_organ_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_019_church_organ_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_019_church_organ_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_019_church_organ_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_019_church_organ_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_019_church_organ_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_019_church_organ_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_019_church_organ_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_019_church_organ_4, 255, 0, 255, 235),
};

// KeySplitTable17
const union VoiceGroup voicegroup_FE7_ReedOrgan[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_020_reed_organ_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_020_reed_organ_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_020_reed_organ_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_020_reed_organ_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_020_reed_organ_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_020_reed_organ_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_020_reed_organ_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_020_reed_organ_2, 255, 0, 255, 235),
};

// KeySplitTable18
const union VoiceGroup voicegroup_FE7_Accordion[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_2, 255, 0, 255, 235),
};

// KeySplitTable19
const union VoiceGroup voicegroup_FE7_Harmonica[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_22] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_23] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_5, 255, 0, 255, 235),
};

// KeySplitTable10
const union VoiceGroup voicegroup_FE7_TangoAccordion[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_023_tango_accordion_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_023_tango_accordion_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_023_tango_accordion_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_023_tango_accordion_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_023_tango_accordion_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_023_tango_accordion_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_020_reed_organ_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_020_reed_organ_2, 255, 0, 255, 235),
};

// KeySplitTable9
const union VoiceGroup voicegroup_FE7_AcousticGuitarNylon[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_0, 255, 253, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_1, 255, 253, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_1, 255, 253, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_1, 255, 253, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_1, 255, 253, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_2, 255, 253, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_2, 255, 253, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_2, 255, 253, 0, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_3, 255, 253, 0, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_3, 255, 253, 0, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_3, 255, 253, 0, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_3, 255, 253, 0, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_4, 255, 253, 0, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_5, 255, 253, 0, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_5, 255, 253, 0, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_5, 255, 253, 0, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_6, 255, 253, 0, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_6, 255, 253, 0, 235),
};

// KeySplitTable19
const union VoiceGroup voicegroup_FE7_AcousticGuitarSteel[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_0, 255, 253, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_0, 255, 253, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_1, 255, 253, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_2, 255, 253, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_2, 255, 253, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_2, 255, 253, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_3, 255, 253, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_3, 255, 253, 0, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_3, 255, 253, 0, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_3, 255, 253, 0, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_4, 255, 253, 0, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_4, 255, 253, 0, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_4, 255, 253, 0, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_4, 255, 253, 0, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_4, 255, 253, 0, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_5, 255, 253, 0, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_5, 255, 253, 0, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_5, 255, 253, 0, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_5, 255, 253, 0, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_5, 255, 253, 0, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_5, 255, 253, 0, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_5, 255, 253, 0, 235),
    [SAMPLE_VOICE_22] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_5, 255, 253, 0, 235),
    [SAMPLE_VOICE_23] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_5, 255, 253, 0, 235),
};

// KeySplitTable9
const union VoiceGroup voicegroup_FE7_ElectricGuitarJazz[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_0, 255, 242, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_0, 255, 242, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_1, 255, 242, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_1, 255, 242, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_2, 255, 242, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_2, 255, 242, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_2, 255, 242, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_3, 255, 242, 0, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_3, 255, 242, 0, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_4, 255, 242, 0, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_4, 255, 242, 0, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_5, 255, 242, 0, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_5, 255, 242, 0, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_5, 255, 242, 0, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_5, 255, 242, 0, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_6, 255, 242, 0, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_6, 255, 242, 0, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_6, 255, 242, 0, 235),
};

// KeySplitTable19
const union VoiceGroup voicegroup_FE7_ElectricGuitarClean[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_0, 255, 245, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_0, 255, 245, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_0, 255, 245, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_0, 255, 245, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_0, 255, 245, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_1, 255, 245, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_1, 255, 245, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_2, 255, 245, 0, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_2, 255, 245, 0, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_2, 255, 245, 0, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_2, 255, 245, 0, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_3, 255, 245, 0, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_3, 255, 245, 0, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_3, 255, 245, 0, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_4, 255, 245, 0, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_4, 255, 245, 0, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_4, 255, 245, 0, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_4, 255, 245, 0, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_4, 255, 245, 0, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_4, 255, 245, 0, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_4, 255, 245, 0, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_027_electric_guitar_clean_4, 255, 245, 0, 235),
    [SAMPLE_VOICE_22] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_5, 255, 245, 0, 235),
    [SAMPLE_VOICE_23] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_5, 255, 245, 0, 235),
};

// KeySplitTable20
const union VoiceGroup voicegroup_FE7_ElectricGuitarMuted[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_028_electric_guitar_muted_0, 255, 249, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_028_electric_guitar_muted_0, 255, 249, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_028_electric_guitar_muted_0, 255, 249, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_028_electric_guitar_muted_0, 255, 249, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_028_electric_guitar_muted_0, 255, 249, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_028_electric_guitar_muted_0, 255, 249, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_028_electric_guitar_muted_1, 255, 249, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_028_electric_guitar_muted_2, 255, 249, 0, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_028_electric_guitar_muted_2, 255, 249, 0, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_028_electric_guitar_muted_2, 255, 249, 0, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_4, 255, 249, 0, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_4, 255, 249, 0, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_5, 255, 249, 0, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_5, 255, 249, 0, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_6, 255, 249, 0, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_6, 255, 249, 0, 235),
};

// KeySplitTable21
const union VoiceGroup voicegroup_FE7_OverdrivenGuitar[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_8, 255, 0, 255, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_8, 255, 0, 255, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_9, 255, 0, 255, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_029_overdriven_guitar_9, 255, 0, 255, 235),
};

// KeySplitTable22
const union VoiceGroup voicegroup_FE7_DistortionGuitar[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_8, 255, 0, 255, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_8, 255, 0, 255, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_8, 255, 0, 255, 235),
};

// KeySplitTable16
const union VoiceGroup voicegroup_FE7_GuitarHarmonics[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_031_guitar_harmonics_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_031_guitar_harmonics_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_031_guitar_harmonics_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_031_guitar_harmonics_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_031_guitar_harmonics_1, 255, 254, 0, 235),
};

// KeySplitTable13
const union VoiceGroup voicegroup_FE7_AcousticBass[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_0, 255, 254, 51, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_1, 255, 254, 51, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_2, 255, 254, 51, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_2, 255, 254, 51, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_2, 255, 254, 51, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_2, 255, 254, 51, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_2, 255, 254, 51, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_2, 255, 254, 51, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_2, 255, 254, 51, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_2, 255, 254, 51, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_3, 255, 254, 51, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_4, 255, 254, 51, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_4, 255, 254, 51, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_4, 255, 254, 51, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_4, 255, 254, 51, 235),
};

// KeySplitTable10
const union VoiceGroup voicegroup_FE7_ElectricBassFinger[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_033_electric_bass_finger_0, 255, 242, 103, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_033_electric_bass_finger_1, 255, 242, 103, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_033_electric_bass_finger_2, 255, 242, 103, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_033_electric_bass_finger_2, 255, 242, 103, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_033_electric_bass_finger_2, 255, 242, 103, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_033_electric_bass_finger_2, 255, 242, 103, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_033_electric_bass_finger_2, 255, 242, 103, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_033_electric_bass_finger_2, 255, 242, 103, 235),
};

// KeySplitTable20
const union VoiceGroup voicegroup_FE7_ElectricBassPick[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_034_electric_bass_pick_0, 255, 242, 103, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_034_electric_bass_pick_1, 255, 242, 103, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_034_electric_bass_pick_1, 255, 242, 103, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_034_electric_bass_pick_2, 255, 242, 103, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_034_electric_bass_pick_2, 255, 242, 103, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_034_electric_bass_pick_2, 255, 242, 103, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_034_electric_bass_pick_2, 255, 242, 103, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_034_electric_bass_pick_2, 255, 242, 103, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_4, 255, 242, 103, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_4, 255, 242, 103, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_4, 255, 242, 103, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_5, 255, 242, 103, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_5, 255, 242, 103, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_6, 255, 242, 103, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_6, 255, 242, 103, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_6, 255, 242, 103, 235),
};

// KeySplitTable20
const union VoiceGroup voicegroup_FE7_FretlessBass[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_035_fretless_bass_0, 255, 254, 25, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_035_fretless_bass_0, 255, 254, 25, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_035_fretless_bass_1, 255, 254, 25, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_035_fretless_bass_1, 255, 254, 25, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_035_fretless_bass_1, 255, 254, 25, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_035_fretless_bass_2, 255, 254, 25, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_035_fretless_bass_2, 255, 254, 25, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_035_fretless_bass_2, 255, 254, 25, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_4, 255, 254, 25, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_4, 255, 254, 25, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_4, 255, 254, 25, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_5, 255, 254, 25, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_026_electric_guitar_jazz_5, 255, 254, 25, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_6, 255, 254, 25, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_6, 255, 254, 25, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_024_acoustic_guitar_nylon_6, 255, 254, 25, 235),
};

// KeySplitTable23
const union VoiceGroup voicegroup_FE7_SlapBass1[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_036_slap_bass_0, 255, 252, 51, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_036_slap_bass_1, 255, 252, 51, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_036_slap_bass_1, 255, 252, 51, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_036_slap_bass_1, 255, 252, 51, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_036_slap_bass_2, 255, 252, 51, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_036_slap_bass_2, 255, 252, 51, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_036_slap_bass_2, 255, 252, 51, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_5, 255, 252, 51, 235),
};

// KeySplitTable23
const union VoiceGroup voicegroup_FE7_SlapBass2[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_037_slap_bass, 255, 252, 51, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_037_slap_bass, 255, 252, 51, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_037_slap_bass, 255, 252, 51, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_036_slap_bass_1, 255, 252, 51, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_036_slap_bass_1, 255, 252, 51, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_036_slap_bass_2, 255, 252, 51, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_036_slap_bass_2, 255, 252, 51, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_5, 255, 252, 51, 235),
};

// KeySplitTable23
const union VoiceGroup voicegroup_FE7_SynthBass1[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_038_synth_bass1_0, 255, 249, 25, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_038_synth_bass1_0, 255, 249, 25, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_038_synth_bass1_1, 255, 249, 25, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_038_synth_bass1_1, 255, 249, 25, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_038_synth_bass1_1, 255, 249, 25, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_038_synth_bass1_2, 255, 249, 25, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_038_synth_bass1_3, 255, 249, 25, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_038_synth_bass1_3, 255, 249, 25, 235),
};

// KeySplitTable24
const union VoiceGroup voicegroup_FE7_SynthBass2[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_039_synth_bass2_0, 255, 254, 51, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_039_synth_bass2_1, 255, 254, 51, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_039_synth_bass2_1, 255, 254, 51, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_039_synth_bass2_2, 255, 254, 51, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_039_synth_bass2_2, 255, 254, 51, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_039_synth_bass2_2, 255, 254, 51, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_039_synth_bass2_2, 255, 254, 51, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_039_synth_bass2_2, 255, 254, 51, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_5, 255, 254, 51, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_025_acoustic_guitar_steel_5, 255, 254, 51, 235),
};

// KeySplitTable22
const union VoiceGroup voicegroup_FE7_Violin[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_8, 255, 0, 255, 235),
};

// KeySplitTable22
const union VoiceGroup voicegroup_FE7_Viola[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_5, 255, 0, 255, 235),
};

// KeySplitTable25
const union VoiceGroup voicegroup_FE7_Cello[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_042_cello_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_22] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_23] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_24] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_5, 255, 0, 255, 235),
};

// KeySplitTable25
const union VoiceGroup voicegroup_FE7_Contrabass[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_043_contrabass_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_043_contrabass_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_043_contrabass_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_043_contrabass_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_043_contrabass_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_043_contrabass_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_043_contrabass_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_043_contrabass_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_043_contrabass_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_043_contrabass_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_043_contrabass_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_043_contrabass_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_043_contrabass_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_22] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_23] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_24] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_5, 255, 0, 255, 235),
};

// KeySplitTable12
const union VoiceGroup voicegroup_FE7_TremoloStrings[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_044_tremolo_strings_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_044_tremolo_strings_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_044_tremolo_strings_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_044_tremolo_strings_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_044_tremolo_strings_2, 255, 0, 255, 235),
};

// KeySplitTable16
const union VoiceGroup voicegroup_FE7_PizzicatoStrings[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_045_pizzicato_strings_0, 255, 242, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_045_pizzicato_strings_0, 255, 242, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_045_pizzicato_strings_0, 255, 242, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_045_pizzicato_strings_0, 255, 242, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_045_pizzicato_strings_1, 255, 242, 0, 235),
};

// KeySplitTable24
const union VoiceGroup voicegroup_FE7_OrchestralHarp[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_046_orchestral_harp_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_046_orchestral_harp_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_046_orchestral_harp_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_046_orchestral_harp_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_046_orchestral_harp_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_4, 255, 254, 0, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_4, 255, 254, 0, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_4, 255, 254, 0, 235),
};

// KeySplitTable12
const union VoiceGroup voicegroup_FE7_StringEnsemble1[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_044_tremolo_strings_0, 128, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_044_tremolo_strings_1, 128, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_044_tremolo_strings_2, 128, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_044_tremolo_strings_2, 128, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_044_tremolo_strings_2, 128, 0, 255, 235),
};

// KeySplitTable12
const union VoiceGroup voicegroup_FE7_StringEnsemble2[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_044_tremolo_strings_0, 9, 0, 255, 249),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_044_tremolo_strings_1, 9, 0, 255, 249),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_044_tremolo_strings_2, 9, 0, 255, 249),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_044_tremolo_strings_2, 9, 0, 255, 249),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_044_tremolo_strings_2, 9, 0, 255, 249),
};

// KeySplitTable18
const union VoiceGroup voicegroup_FE7_SynthStrings1[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_0, 128, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_0, 128, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_1, 128, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_1, 128, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 128, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 128, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 128, 0, 255, 235),
};

// KeySplitTable18
const union VoiceGroup voicegroup_FE7_SynthStrings2[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_0, 128, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_1, 128, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_1, 128, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 128, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 128, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 128, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 128, 0, 255, 235),
};

// KeySplitTable16
const union VoiceGroup voicegroup_FE7_ChoirAahs[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_052_choir_aahs, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_052_choir_aahs, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
};

// KeySplitTable24
const union VoiceGroup voicegroup_FE7_VoiceOohs[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_053_voice_oohs_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_053_voice_oohs_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_053_voice_oohs_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_053_voice_oohs_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_053_voice_oohs_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_053_voice_oohs_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_053_voice_oohs_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_053_voice_oohs_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_053_voice_oohs_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_053_voice_oohs_3, 255, 0, 255, 235),
};

// KeySplitTable11
const union VoiceGroup voicegroup_FE7_SynthVoice[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_054_synth_voice_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_054_synth_voice_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_054_synth_voice_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_054_synth_voice_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_054_synth_voice_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_5, 255, 0, 255, 235),
};

// KeySplitTable21
const union VoiceGroup voicegroup_FE7_Trumpet[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_8, 255, 0, 255, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_8, 255, 0, 255, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_8, 255, 0, 255, 235),
};

// KeySplitTable21
const union VoiceGroup voicegroup_FE7_Trombone[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_8, 255, 0, 255, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_8, 255, 0, 255, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_8, 255, 0, 255, 235),
};

// KeySplitTable26
const union VoiceGroup voicegroup_FE7_Tuba[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_058_tuba_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_058_tuba_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_058_tuba_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_058_tuba_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_057_trombone_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_8, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_8, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_8, 255, 0, 255, 235),
};

// KeySplitTable27
const union VoiceGroup voicegroup_FE7_MutedTrumpet[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_059_muted_trumpet_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_059_muted_trumpet_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_059_muted_trumpet_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_059_muted_trumpet_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_059_muted_trumpet_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_059_muted_trumpet_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_059_muted_trumpet_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_059_muted_trumpet_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_059_muted_trumpet_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_059_muted_trumpet_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_059_muted_trumpet_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_059_muted_trumpet_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_059_muted_trumpet_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_059_muted_trumpet_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_8, 255, 0, 255, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_8, 255, 0, 255, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_8, 255, 0, 255, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_8, 255, 0, 255, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_056_trumpet_8, 255, 0, 255, 235),
    [SAMPLE_VOICE_22] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_8, 255, 0, 255, 235),
};

// KeySplitTable28
const union VoiceGroup voicegroup_FE7_FrenchHorn[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_060_french_horn_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_060_french_horn_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_060_french_horn_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_060_french_horn_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_060_french_horn_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_060_french_horn_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_8, 255, 0, 255, 235),
};

// KeySplitTable28
const union VoiceGroup voicegroup_FE7_BrassSection[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_061_brass_section_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_061_brass_section_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_061_brass_section_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_061_brass_section_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_061_brass_section_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_061_brass_section_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_061_brass_section_2, 255, 0, 255, 235),
};

// KeySplitTable19
const union VoiceGroup voicegroup_FE7_SynthBrass1[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_062_synth_brass1_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_22] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_23] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
};

// KeySplitTable29
const union VoiceGroup voicegroup_FE7_SynthBrass2[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_063_synth_brass2_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_063_synth_brass2_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_063_synth_brass2_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_063_synth_brass2_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_063_synth_brass2_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_063_synth_brass2_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_053_voice_oohs_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_053_voice_oohs_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_053_voice_oohs_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_053_voice_oohs_3, 255, 0, 255, 235),
};

// KeySplitTable27
const union VoiceGroup voicegroup_FE7_SopranoSax[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_8, 255, 0, 255, 235),
    [SAMPLE_VOICE_22] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_8, 255, 0, 255, 235),
};

// KeySplitTable25
const union VoiceGroup voicegroup_FE7_AltoSax[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_22] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_23] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_24] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_065_alto_sax_7, 255, 0, 255, 235),
};

// KeySplitTable26
const union VoiceGroup voicegroup_FE7_TenorSax[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_066_tenor_sax_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_066_tenor_sax_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_066_tenor_sax_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_066_tenor_sax_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_066_tenor_sax_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_066_tenor_sax_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_066_tenor_sax_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_066_tenor_sax_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_066_tenor_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_066_tenor_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_066_tenor_sax_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_066_tenor_sax_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_066_tenor_sax_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_066_tenor_sax_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_066_tenor_sax_7, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_2, 255, 0, 255, 235),
};

// KeySplitTable19
const union VoiceGroup voicegroup_FE7_BaritoneSax[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_22] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_23] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_2, 255, 0, 255, 235),
};

// KeySplitTable20
const union VoiceGroup voicegroup_FE7_Oboe[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_068_oboe_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_068_oboe_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_068_oboe_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_068_oboe_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_068_oboe_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_068_oboe_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_068_oboe_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_068_oboe_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_068_oboe_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_068_oboe_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_068_oboe_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_068_oboe_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_068_oboe_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_068_oboe_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_068_oboe_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_068_oboe_5, 255, 0, 255, 235),
};

// KeySplitTable27
const union VoiceGroup voicegroup_FE7_EnglishHorn[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_069_english_horn_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_069_english_horn_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_069_english_horn_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_069_english_horn_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_069_english_horn_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_069_english_horn_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_069_english_horn_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_069_english_horn_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_069_english_horn_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_069_english_horn_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_069_english_horn_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_069_english_horn_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_069_english_horn_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_8, 255, 0, 255, 235),
    [SAMPLE_VOICE_22] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_8, 255, 0, 255, 235),
};

// KeySplitTable29
const union VoiceGroup voicegroup_FE7_Bassoon[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_070_bassoon_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_070_bassoon_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_070_bassoon_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_070_bassoon_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_070_bassoon_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_067_baritone_sax_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_2, 255, 0, 255, 235),
};

// KeySplitTable30
const union VoiceGroup voicegroup_FE7_Clarinet[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_071_clarinet_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_071_clarinet_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_071_clarinet_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_071_clarinet_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_071_clarinet_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_071_clarinet_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_071_clarinet_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_071_clarinet_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_071_clarinet_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_071_clarinet_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_071_clarinet_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_071_clarinet_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_071_clarinet_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_071_clarinet_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_071_clarinet_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_071_clarinet_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_8, 255, 0, 255, 235),
};

// KeySplitTable11
const union VoiceGroup voicegroup_FE7_Piccolo[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_2, 255, 0, 255, 235),
};

// KeySplitTable27
const union VoiceGroup voicegroup_FE7_Flute[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_073_flute_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_22] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_2, 255, 0, 255, 235),
};

// KeySplitTable30
const union VoiceGroup voicegroup_FE7_Recorder[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_074_recorder_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_074_recorder_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_074_recorder_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_074_recorder_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_074_recorder_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_074_recorder_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_074_recorder_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_074_recorder_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_074_recorder_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_074_recorder_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_074_recorder_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_074_recorder_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_074_recorder_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_074_recorder_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_074_recorder_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_2, 255, 0, 255, 235),
};

// KeySplitTable31
const union VoiceGroup voicegroup_FE7_PanFlute[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_075_pan_flute, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_075_pan_flute, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_075_pan_flute, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_075_pan_flute, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
};

// KeySplitTable31
const union VoiceGroup voicegroup_FE7_BlownBottle[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_076_blown_bottle_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_076_blown_bottle_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_076_blown_bottle_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_076_blown_bottle_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
};

// KeySplitTable13
const union VoiceGroup voicegroup_FE7_Shakuhachi[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_077_shakuhachi_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_077_shakuhachi_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_077_shakuhachi_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_077_shakuhachi_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_077_shakuhachi_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_077_shakuhachi_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_077_shakuhachi_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_077_shakuhachi_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_077_shakuhachi_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_077_shakuhachi_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_077_shakuhachi_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_077_shakuhachi_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_077_shakuhachi_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_2, 255, 0, 255, 235),
};

// KeySplitTable7
const union VoiceGroup voicegroup_FE7_Whistle[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_078_whistle_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_078_whistle_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_078_whistle_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_078_whistle_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_078_whistle_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_078_whistle_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_078_whistle_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_078_whistle_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_2, 255, 0, 255, 235),
};

// KeySplitTable14
const union VoiceGroup voicegroup_FE7_Ocarina[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_079_ocarina_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_079_ocarina_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_079_ocarina_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_079_ocarina_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_079_ocarina_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_072_piccolo_2, 255, 0, 255, 235),
};

// KeySplitTable30
const union VoiceGroup voicegroup_FE7_Lead1_Square[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_080_lead1_square_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_080_lead1_square_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_080_lead1_square_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_080_lead1_square_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_080_lead1_square_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_080_lead1_square_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_080_lead1_square_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_080_lead1_square_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_080_lead1_square_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_080_lead1_square_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_080_lead1_square_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_080_lead1_square_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_080_lead1_square_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_080_lead1_square_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_080_lead1_square_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_080_lead1_square_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_080_lead1_square_5, 255, 0, 255, 235),
};

// KeySplitTable7
const union VoiceGroup voicegroup_FE7_Lead2_Sawtooth[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_081_lead2_sawtooth_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_081_lead2_sawtooth_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_081_lead2_sawtooth_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_081_lead2_sawtooth_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_081_lead2_sawtooth_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_081_lead2_sawtooth_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_081_lead2_sawtooth_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_081_lead2_sawtooth_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_081_lead2_sawtooth_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_081_lead2_sawtooth_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_053_voice_oohs_3, 255, 0, 255, 235),
};

// KeySplitTable14
const union VoiceGroup voicegroup_FE7_Lead3_Calliope[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_082_lead3_calliope_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_082_lead3_calliope_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_082_lead3_calliope_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_082_lead3_calliope_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_082_lead3_calliope_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_082_lead3_calliope_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_082_lead3_calliope_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
};

// KeySplitTable32
const union VoiceGroup voicegroup_FE7_Lead4_Chiff[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_083_lead4_chiff_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_083_lead4_chiff_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_083_lead4_chiff_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_083_lead4_chiff_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_083_lead4_chiff_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_083_lead4_chiff_1, 255, 0, 255, 235),
};

// KeySplitTable15
const union VoiceGroup voicegroup_FE7_Lead5_Charang[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_084_lead5_charang_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_084_lead5_charang_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_084_lead5_charang_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_084_lead5_charang_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_030_distortion_guitar_8, 255, 0, 255, 235),
};

// KeySplitTable33
const union VoiceGroup voicegroup_FE7_Lead6_Voice[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_085_lead6_voice, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_091_pad_4_choir, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_091_pad_4_choir, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_091_pad_4_choir, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_091_pad_4_choir, 255, 0, 255, 235),
};

// KeySplitTable34
const union VoiceGroup voicegroup_FE7_Lead7_Fifths[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_086_lead7_fifths_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_086_lead7_fifths_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_086_lead7_fifths_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_086_lead7_fifths_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_086_lead7_fifths_1, 255, 0, 255, 235),
};

// KeySplitTable14
const union VoiceGroup voicegroup_FE7_Lead8_Bass_Lead[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_087_lead8_bass_lead_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_087_lead8_bass_lead_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_087_lead8_bass_lead_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_087_lead8_bass_lead_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_087_lead8_bass_lead_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_087_lead8_bass_lead_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_087_lead8_bass_lead_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_087_lead8_bass_lead_2, 255, 0, 255, 235),
};

// KeySplitTable28
const union VoiceGroup voicegroup_FE7_Pad1_NewAge[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_088_pad1_new_age_0, 255, 0, 255, 238),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_088_pad1_new_age_0, 255, 0, 255, 238),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_088_pad1_new_age_0, 255, 0, 255, 238),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_088_pad1_new_age_1, 255, 0, 255, 238),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_088_pad1_new_age_1, 255, 0, 255, 238),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_088_pad1_new_age_1, 255, 0, 255, 238),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_008_celesta_2, 255, 0, 255, 238),
};

// KeySplitTable33
const union VoiceGroup voicegroup_FE7_Pad2_Warm[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_089_pad2_warm_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_089_pad2_warm_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_089_pad2_warm_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_089_pad2_warm_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_089_pad2_warm_1, 255, 0, 255, 235),
};

// KeySplitTable8
const union VoiceGroup voicegroup_FE7_Pad3_Polysynth[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_090_pad3_polysynth_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_090_pad3_polysynth_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_090_pad3_polysynth_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_090_pad3_polysynth_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_090_pad3_polysynth_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_090_pad3_polysynth_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_090_pad3_polysynth_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_090_pad3_polysynth_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_090_pad3_polysynth_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_090_pad3_polysynth_4, 255, 0, 255, 235),
};

// KeySplitTable8
const union VoiceGroup voicegroup_FE7_Pad5_Bowed[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_004_electric_piano_4, 255, 0, 255, 235),
};

// KeySplitTable7
const union VoiceGroup voicegroup_FE7_Pad6_Metallic[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_0, 255, 254, 25, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_0, 255, 254, 25, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_1, 255, 254, 25, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_1, 255, 254, 25, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_1, 255, 254, 25, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_1, 255, 254, 25, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_1, 255, 254, 25, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_2, 255, 254, 25, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_3, 255, 254, 25, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_3, 255, 254, 25, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_3, 255, 254, 25, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_4, 255, 254, 25, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_4, 255, 254, 25, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_4, 255, 254, 25, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_003_honky_tonk_piano_4, 255, 254, 25, 235),
};

// KeySplitTable15
const union VoiceGroup voicegroup_FE7_Pad7_Halo[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_052_choir_aahs, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_052_choir_aahs, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_091_pad_4_choir, 255, 0, 255, 235),
};

// KeySplitTable18
const union VoiceGroup voicegroup_FE7_Pad8_Sweep[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
};

// KeySplitTable31
const union VoiceGroup voicegroup_FE7_FX1_Rain[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_096_fx1_rain, 255, 254, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_096_fx1_rain, 255, 254, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_086_lead7_fifths_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_086_lead7_fifths_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_086_lead7_fifths_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_086_lead7_fifths_1, 255, 254, 0, 235),
};

// KeySplitTable33
const union VoiceGroup voicegroup_FE7_FX2_Soundtrack[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_097_fx2_soundtrack_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_097_fx2_soundtrack_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_097_fx2_soundtrack_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_097_fx2_soundtrack_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_097_fx2_soundtrack_1, 255, 0, 255, 235),
};

// KeySplitTable33
const union VoiceGroup voicegroup_FE7_FX3_Crystal[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_098_fx3_crystal, 255, 252, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_098_fx3_crystal, 255, 252, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_098_fx3_crystal, 255, 252, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_088_pad1_new_age_1, 255, 252, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_088_pad1_new_age_1, 255, 252, 0, 235),
};

// KeySplitTable34
const union VoiceGroup voicegroup_FE7_FX4_Atmosphere[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_099_fx4_atmosphere_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_099_fx4_atmosphere_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_099_fx4_atmosphere_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_099_fx4_atmosphere_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_099_fx4_atmosphere_1, 255, 0, 255, 235),
};

// KeySplitTable34
const union VoiceGroup voicegroup_FE7_FX5_Brightness[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_085_lead6_voice, 255, 254, 25, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_085_lead6_voice, 255, 254, 25, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_089_pad2_warm_1, 255, 254, 25, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_089_pad2_warm_1, 255, 254, 25, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_089_pad2_warm_1, 255, 254, 25, 235),
};

// KeySplitTable15
const union VoiceGroup voicegroup_FE7_FX7_Echoes[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_052_choir_aahs, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_052_choir_aahs, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_050_synth_strings_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_091_pad_4_choir, 255, 0, 255, 235),
};

// KeySplitTable32
const union VoiceGroup voicegroup_FE7_FX8_Sci_Fi[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_103_fx8_sci_fi_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_103_fx8_sci_fi_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_103_fx8_sci_fi_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_103_fx8_sci_fi_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
};

// KeySplitTable31
const union VoiceGroup voicegroup_FE7_Sitar[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_104_sistar_0, 255, 254, 25, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_104_sistar_1, 255, 254, 25, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_104_sistar_1, 255, 254, 25, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_104_sistar_2, 255, 254, 25, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_2, 255, 254, 25, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_021_accordion_2, 255, 254, 25, 235),
};

// KeySplitTable35
const union VoiceGroup voicegroup_FE7_Banjo[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_105_banjo_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_105_banjo_0, 255, 254, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_105_banjo_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_105_banjo_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_105_banjo_1, 255, 254, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_105_banjo_2, 255, 254, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_105_banjo_2, 255, 254, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_006_harpsichord_3, 255, 254, 0, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_020_reed_organ_2, 255, 254, 0, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_020_reed_organ_2, 255, 254, 0, 235),
};

// KeySplitTable35
const union VoiceGroup voicegroup_FE7_Shamisen[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_106_shamisen_0, 255, 252, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_106_shamisen_1, 255, 252, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_106_shamisen_1, 255, 252, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_106_shamisen_1, 255, 252, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_106_shamisen_2, 255, 252, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_106_shamisen_2, 255, 252, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_106_shamisen_3, 255, 252, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_106_shamisen_3, 255, 252, 0, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_106_shamisen_3, 255, 252, 0, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_020_reed_organ_2, 255, 252, 0, 235),
};

// KeySplitTable29
const union VoiceGroup voicegroup_FE7_Koto[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_107_koto_0, 255, 252, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_107_koto_0, 255, 252, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_107_koto_0, 255, 252, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_107_koto_0, 255, 252, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_107_koto_1, 255, 252, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_107_koto_1, 255, 252, 0, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_107_koto_1, 255, 252, 0, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_107_koto_1, 255, 252, 0, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_006_harpsichord_3, 255, 252, 0, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_020_reed_organ_2, 255, 252, 0, 235),
};

// KeySplitTable31
const union VoiceGroup voicegroup_FE7_Kalimba[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_108_kalimba, 255, 242, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_108_kalimba, 255, 242, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_108_kalimba, 255, 242, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_108_kalimba, 255, 242, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_108_kalimba, 255, 242, 0, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_4, 255, 242, 0, 235),
};

// KeySplitTable30
const union VoiceGroup voicegroup_FE7_Bagpipe[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
};

// KeySplitTable25
const union VoiceGroup voicegroup_FE7_Fiddle[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_10] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_11] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_12] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_13] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_14] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_15] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_16] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_17] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_18] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_19] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_20] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_21] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_040_violin_6, 255, 0, 255, 235),
    [SAMPLE_VOICE_22] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_23] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_24] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_064_soprano_sax_5, 255, 0, 255, 235),
};

// KeySplitTable35
const union VoiceGroup voicegroup_FE7_Shanai[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_2, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_3, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_109_bagpipe_4, 255, 0, 255, 235),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_5, 255, 0, 255, 235),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_022_harmonica_5, 255, 0, 255, 235),
};

// KeySplitTable34
const union VoiceGroup voicegroup_FE7_SteelDrums[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_114_steel_drums, 255, 252, 0, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_114_steel_drums, 255, 252, 0, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_114_steel_drums, 255, 252, 0, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_114_steel_drums, 255, 252, 0, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_032_acoustic_bass_4, 255, 252, 0, 235),
};

// KeySplitTable32
const union VoiceGroup voicegroup_FE7_BreathNoise[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_121_breath_noise_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_121_breath_noise_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_121_breath_noise_0, 255, 0, 255, 235),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_121_breath_noise_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_121_breath_noise_1, 255, 0, 255, 235),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_121_breath_noise_2, 255, 0, 255, 235),
};

// KeySplitTable35
const union VoiceGroup voicegroup_FE7_Applause[] =
{
    [SAMPLE_VOICE_0]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_126_applause_0, 255, 0, 255, 165),
    [SAMPLE_VOICE_1]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_126_applause_1, 255, 0, 255, 165),
    [SAMPLE_VOICE_2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_126_applause_1, 255, 0, 255, 165),
    [SAMPLE_VOICE_3]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_126_applause_2, 255, 0, 255, 165),
    [SAMPLE_VOICE_4]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_126_applause_2, 255, 0, 255, 165),
    [SAMPLE_VOICE_5]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_126_applause_2, 255, 0, 255, 165),
    [SAMPLE_VOICE_6]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_126_applause_2, 255, 0, 255, 165),
    [SAMPLE_VOICE_7]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_126_applause_2, 255, 0, 255, 165),
    [SAMPLE_VOICE_8]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_126_applause_2, 255, 0, 255, 165),
    [SAMPLE_VOICE_9]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_126_applause_2, 255, 0, 255, 165),
};

// FE7 Drumkit ?
const union VoiceGroup voicegroup_FE7_Gunshot[] =
{
    [NOTE_CN1]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_CSN1]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_DN1]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_DSN1]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_ESN1]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_FN1]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_FSN1]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_GN1]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_GSN1]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_AN1]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_ASN1]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_BN1]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_C0]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_CS0]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_D0]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_DS0]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_E0]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_F0]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_FS0]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_G0]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_GS0]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_A0]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_AS0]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_B0]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_C1]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_CS1]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [NOTE_D1]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [HIGH_Q_GM2]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [SLAP_GM2]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [SCRATCH_PUSH_GM2]    = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [SCRATCH_PULL_GM2]    = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_30, 255, 0, 255, 165),
    [STICKS_GM2]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_31, 8, 0, 255, 165 ),
    [SQUARE_CLICK_GM2]    = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_32, 255, 0, 255, 127),
    [METRONOME_CLICK_GM2] = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 0, 255, 127),
    [METRONOME_BELL_GM2]  = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_34, 255, 0, 255, 165),
    [BASS_DRUM_2]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_35, 255, 0, 255, 242),
    [BASS_DRUM_1]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_36, 255, 0, 255, 242),
    [SIDE_STICK]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_37, 255, 240, 0, 240),
    [SNARE_DRUM_1]        = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_38, 255, 0, 255, 242),
    [HAND_CLAP]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_39, 255, 0, 255, 165),
    [SNARE_DRUM_2]        = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_40, 255, 240, 0, 154),
    [LOW_TOM_2]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_41, 255, 0, 255, 165),
    [CLOSED_HI_HAT]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_42, 255, 165, 0, 165),
    [LOW_TOM_1]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_43, 255, 0, 255, 165),
    [PEDAL_HI_HAT]        = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_44, 255, 0, 255, 165),
    [MID_TOM_2]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_45, 255, 0, 255, 165),
    [OPEN_HI_HAT]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_46, 255, 220, 0, 165),
    [MID_TOM_1]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_47, 255, 0, 255, 165),
    [HIGH_TOM_2]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_48, 255, 245, 0, 216),
    [CRASH_CYMBAL_1]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_49, 255, 240, 0, 216),
    [HIGH_TOM_1]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_50, 255, 245, 0, 216),
    [RIDE_CYMBAL_1]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_51, 255, 245, 0, 216),
    [CHINESE_CYMBAL]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_52, 255, 240, 0, 165),
    [RIDE_BELL]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_53, 255, 165, 0, 127),
    [TAMBOURINE]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_54, 255, 0, 255, 165),
    [SPLASH_CYMBAL]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_55, 255, 231, 255, 165),
    [COWBELL]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_56, 255, 0, 255, 127),
    [CRASH_CYMBAL_2]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_57, 255, 245, 0, 216),
    [VIBRA_SLAP]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_58, 255, 245, 0, 216),
    [RIDE_CYMBAL_2]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_59, 255, 240, 0, 127),
    [HIGH_BONGO]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_60, 255, 0, 255, 127),
    [LOW_BONGO]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_61, 255, 0, 255, 127),
    [MUTE_HIGH_CONGA]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_62, 255, 0, 255, 127),
    [OPEN_HIGH_CONGA]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_63, 255, 0, 255, 127),
    [LOW_CONGA]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_64, 255, 0, 255, 127),
    [HIGH_TIMBALE]        = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_66, 255, 0, 255, 127),
    [LOW_TIMBALE]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_66, 255, 0, 255, 127),
    [HIGH_AGOGO]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_68, 255, 0, 255, 165),
    [LOW_AGOGO]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_68, 255, 0, 255, 127),
    [CABASA]              = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_69, 255, 0, 255, 127),
    [MARACAS]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_70, 255, 0, 255, 127),
    [SHORT_WHISTLE]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_71, 255, 0, 255, 127),
    [LONG_WHISTLE]        = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_72, 255, 0, 255, 127),
    [SHORT_GUIRO]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_73, 255, 0, 255, 127),
    [LOGN_GUIRO]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_74, 255, 0, 255, 127),
    [CLAVES]              = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_75, 255, 0, 255, 127),
    [HIGH_WOOD_BLOCK]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_76, 255, 0, 255, 165),
    [LOW_WOOD_BLOCK]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_77, 255, 0, 255, 165),
    [MUTE_CUICA]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_78, 255, 0, 255, 165),
    [OPEN_CUICA]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_79, 255, 0, 255, 165),
    [MUTE_TRIANGLE]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_80, 255, 230, 0, 165),
    [OPEN_TRIANGLE]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_81, 255, 230, 0, 165),
    [SHAKER_GM2]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_82, 255, 230, 0, 165),
    [JINGLE_BELL_GM2]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_83, 255, 230, 0, 165),
    [BELLTREE_GM2]        = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_drumkit_84, 255, 230, 0, 165),
    [CASTANETS_GM2]       = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [MUTE_SURDO_GM2]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [OPEN_SURDO_GM2]      = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_E6]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_F6]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_FS6]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_G6]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_GS6]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_A6]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_AS6]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_B6]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_C7]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_CS7]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_D7]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_DS7]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_E7]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_F7]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_FS7]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_G7]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_GS7]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_A7]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_AS7]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_B7]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_C8]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_CS8]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_D8]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_DS8]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_E8]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_F8]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_FS8]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_G8]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_GS8]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_A8]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_AS8]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_B8]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_C9]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_CS9]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_D9]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_DS9]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_E9]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_F9]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_FS9]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
    [NOTE_G9]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_127_gunshot, 255, 230, 0, 165),
};


//--------------------------------------------------------------
//  Universal Voicegroup FE7 - Universal Voicegroups
//--------------------------------------------------------------

//used GUNSHOT as DRUMKIT_CM_64_32L
const union VoiceGroup voicegroup191[] =
{
    [ACOUSTIC_GRAND_PIANO]  = VOICE_KEYSPLIT(voicegroup_FE7_AcousticGrandPiano, KeySplitTable6),
    [BRIGHT_ACOUSTIC_PIANO] = VOICE_KEYSPLIT(voicegroup_FE7_BrightAcousticPiano, KeySplitTable6),
    [ELECTRIC_GRAND_PIANO]  = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGrandPiano, KeySplitTable6),
    [HONKY_TONK_PIANO]      = VOICE_KEYSPLIT(voicegroup_FE7_HonkyTonkPiano, KeySplitTable7),
    [ELECTRIC_PIANO_1]      = VOICE_KEYSPLIT(voicegroup_FE7_ElectricPiano1, KeySplitTable8),
    [ELECTRIC_PIANO_2]      = VOICE_KEYSPLIT(voicegroup_FE7_ElectricPiano2, KeySplitTable9),
    [HARPSICHORD]           = VOICE_KEYSPLIT(voicegroup_FE7_Harpsichord, KeySplitTable10),
    [CLAVINET]              = VOICE_KEYSPLIT(voicegroup_FE7_Clavinet, KeySplitTable7),
    [CELESTA]               = VOICE_KEYSPLIT(voicegroup_FE7_Celesta, KeySplitTable11),
    [GLOCKENSPIEL]          = VOICE_KEYSPLIT(voicegroup_FE7_Glockenspiel, KeySplitTable12),
    [MUSIC_BOX]             = VOICE_KEYSPLIT(voicegroup_FE7_MusicBox, KeySplitTable11),
    [VIBRAPHONE]            = VOICE_KEYSPLIT(voicegroup_FE7_Vibraphone, KeySplitTable13),
    [MARINBA]               = VOICE_KEYSPLIT(voicegroup_FE7_Marimba, KeySplitTable14),
    [XYLOPHONE]             = VOICE_KEYSPLIT(voicegroup_FE7_Xylophone, KeySplitTable15),
    [TUBULAR_BELLS]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_014_tubular_bells, 255, 249, 0, 235),
    [DULCIMER]              = VOICE_KEYSPLIT(voicegroup_FE7_Dulcimer, KeySplitTable16),
    [DRAWBAR_ORGAN]         = VOICE_KEYSPLIT(voicegroup_FE7_DrawbarOrgan, KeySplitTable17),
    [PERCUSIVE_ORGAN]       = VOICE_KEYSPLIT(voicegroup_FE7_PercussiveOrgan, KeySplitTable17),
    [ROCK_ORGAN]            = VOICE_KEYSPLIT(voicegroup_FE7_RockOrgan, KeySplitTable17),
    [CHURCH_ORGAN]          = VOICE_KEYSPLIT(voicegroup_FE7_ChurchOrgan, KeySplitTable13),
    [REED_ORGAN]            = VOICE_KEYSPLIT(voicegroup_FE7_ReedOrgan, KeySplitTable17),
    [ACCORDION]             = VOICE_KEYSPLIT(voicegroup_FE7_Accordion, KeySplitTable18),
    [HARMONICA]             = VOICE_KEYSPLIT(voicegroup_FE7_Harmonica, KeySplitTable19),
    [TANGO_ACCORDION]       = VOICE_KEYSPLIT(voicegroup_FE7_TangoAccordion, KeySplitTable10),
    [ACOUSTIC_GUITAR_NYLON] = VOICE_KEYSPLIT(voicegroup_FE7_AcousticGuitarNylon, KeySplitTable9),
    [ACOUSTIC_GUITAR_STEEL] = VOICE_KEYSPLIT(voicegroup_FE7_AcousticGuitarSteel, KeySplitTable19),
    [ELECTRIC_GUITAR_JAZZ]  = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGuitarJazz, KeySplitTable9),
    [ELECTRIC_GUITAR_CLEAN] = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGuitarClean, KeySplitTable19),
    [ELECTRIC_GUITAR_MUTED] = VOICE_KEYSPLIT(voicegroup_FE7_ElectricGuitarMuted, KeySplitTable20),
    [OVERDRIVEN_GUITAR]     = VOICE_KEYSPLIT(voicegroup_FE7_OverdrivenGuitar, KeySplitTable21),
    [DISTORTION_GUITAR]     = VOICE_KEYSPLIT(voicegroup_FE7_DistortionGuitar, KeySplitTable22),
    [GUITAR_HARMONICS]      = VOICE_KEYSPLIT(voicegroup_FE7_GuitarHarmonics, KeySplitTable16),
    [ACOUSTIC_BASS]         = VOICE_KEYSPLIT(voicegroup_FE7_AcousticBass, KeySplitTable13),
    [ELECTRIC_BASS_FINGER]  = VOICE_KEYSPLIT(voicegroup_FE7_ElectricBassFinger, KeySplitTable10),
    [ELECTRIC_BASS_PICK]    = VOICE_KEYSPLIT(voicegroup_FE7_ElectricBassPick, KeySplitTable20),
    [FRETLESS_BASS]         = VOICE_KEYSPLIT(voicegroup_FE7_FretlessBass, KeySplitTable20),
    [SLAP_BASS_1]           = VOICE_KEYSPLIT(voicegroup_FE7_SlapBass1, KeySplitTable23),
    [SLAP_BASS_2]           = VOICE_KEYSPLIT(voicegroup_FE7_SlapBass2, KeySplitTable23),
    [SYNTH_BASS_1]          = VOICE_KEYSPLIT(voicegroup_FE7_SynthBass1, KeySplitTable23),
    [SYNTH_BASS_2]          = VOICE_KEYSPLIT(voicegroup_FE7_SynthBass2, KeySplitTable24),
    [VIOLIN]                = VOICE_KEYSPLIT(voicegroup_FE7_Violin, KeySplitTable22),
    [VIOLA]                 = VOICE_KEYSPLIT(voicegroup_FE7_Viola, KeySplitTable22),
    [CELLO]                 = VOICE_KEYSPLIT(voicegroup_FE7_Cello, KeySplitTable25),
    [CONTRABASS]            = VOICE_KEYSPLIT(voicegroup_FE7_Contrabass, KeySplitTable25),
    [TREMOLO_STRINGS]       = VOICE_KEYSPLIT(voicegroup_FE7_TremoloStrings, KeySplitTable12),
    [PIZZICATO_STRINGS]     = VOICE_KEYSPLIT(voicegroup_FE7_PizzicatoStrings, KeySplitTable16),
    [ORCHESTRAL_HARP]       = VOICE_KEYSPLIT(voicegroup_FE7_OrchestralHarp, KeySplitTable24),
    [TIMPANI]               = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_047_timpani, 255, 0, 255, 235),
    [STRING_ENSEMBLE_1]     = VOICE_KEYSPLIT(voicegroup_FE7_StringEnsemble1, KeySplitTable12),
    [STRING_ENSEMBLE_2]     = VOICE_KEYSPLIT(voicegroup_FE7_StringEnsemble2, KeySplitTable12),
    [SYNTH_STRINGS_1]       = VOICE_KEYSPLIT(voicegroup_FE7_SynthStrings1, KeySplitTable18),
    [SYNTH_STRINGS_2]       = VOICE_KEYSPLIT(voicegroup_FE7_SynthStrings2, KeySplitTable18),
    [CHOIR_AAHS]            = VOICE_KEYSPLIT(voicegroup_FE7_ChoirAahs, KeySplitTable16),
    [VOICE_OOHS]            = VOICE_KEYSPLIT(voicegroup_FE7_VoiceOohs, KeySplitTable24),
    [SYNTH_VOICE]           = VOICE_KEYSPLIT(voicegroup_FE7_SynthVoice, KeySplitTable11),
    [ORCHESTRA_HIT]         = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_055_orchestra_hit, 255, 253, 0, 235),
    [TRUMPET]               = VOICE_KEYSPLIT(voicegroup_FE7_Trumpet, KeySplitTable21),
    [TROMBONE]              = VOICE_KEYSPLIT(voicegroup_FE7_Trombone, KeySplitTable21),
    [TUBA]                  = VOICE_KEYSPLIT(voicegroup_FE7_Tuba, KeySplitTable26),
    [MUTED_TRUMPET]         = VOICE_KEYSPLIT(voicegroup_FE7_MutedTrumpet, KeySplitTable27),
    [FRENCH_HORN]           = VOICE_KEYSPLIT(voicegroup_FE7_FrenchHorn, KeySplitTable28),
    [BRASS_SECTION]         = VOICE_KEYSPLIT(voicegroup_FE7_BrassSection, KeySplitTable28),
    [SYNTH_BRASS_1]         = VOICE_KEYSPLIT(voicegroup_FE7_SynthBrass1, KeySplitTable19),
    [SYNTH_BRASS_2]         = VOICE_KEYSPLIT(voicegroup_FE7_SynthBrass2, KeySplitTable29),
    [SOPRANO_SAX]           = VOICE_KEYSPLIT(voicegroup_FE7_SopranoSax, KeySplitTable27),
    [ALTO_SAX]              = VOICE_KEYSPLIT(voicegroup_FE7_AltoSax, KeySplitTable25),
    [TENOR_SAX]             = VOICE_KEYSPLIT(voicegroup_FE7_TenorSax, KeySplitTable26),
    [BARITONE_SAX]          = VOICE_KEYSPLIT(voicegroup_FE7_BaritoneSax, KeySplitTable19),
    [OBOE]                  = VOICE_KEYSPLIT(voicegroup_FE7_Oboe, KeySplitTable20),
    [ENGLISH_HORN]          = VOICE_KEYSPLIT(voicegroup_FE7_EnglishHorn, KeySplitTable27),
    [BASSOON]               = VOICE_KEYSPLIT(voicegroup_FE7_Bassoon, KeySplitTable29),
    [CLARINET]              = VOICE_KEYSPLIT(voicegroup_FE7_Clarinet, KeySplitTable30),
    [PICCOLO]               = VOICE_KEYSPLIT(voicegroup_FE7_Piccolo, KeySplitTable11),
    [FLUTE]                 = VOICE_KEYSPLIT(voicegroup_FE7_Flute, KeySplitTable27),
    [RECORDER]              = VOICE_KEYSPLIT(voicegroup_FE7_Recorder, KeySplitTable30),
    [PAN_FLUTE]             = VOICE_KEYSPLIT(voicegroup_FE7_PanFlute, KeySplitTable31),
    [BLOWN_BOTTLE]          = VOICE_KEYSPLIT(voicegroup_FE7_BlownBottle, KeySplitTable31),
    [SHAKUHACHI]            = VOICE_KEYSPLIT(voicegroup_FE7_Shakuhachi, KeySplitTable13),
    [WHISTLE]               = VOICE_KEYSPLIT(voicegroup_FE7_Whistle, KeySplitTable7),
    [OCARINA]               = VOICE_KEYSPLIT(voicegroup_FE7_Ocarina, KeySplitTable14),
    [LEAD_1_SQUARE]         = VOICE_KEYSPLIT(voicegroup_FE7_Lead1_Square, KeySplitTable30),
    [LEAD_2_SAWTOOTH]       = VOICE_KEYSPLIT(voicegroup_FE7_Lead2_Sawtooth, KeySplitTable7),
    [LEAD_3_CALLIOPE]       = VOICE_KEYSPLIT(voicegroup_FE7_Lead3_Calliope, KeySplitTable14),
    [LEAD_4_CHIFF]          = VOICE_KEYSPLIT(voicegroup_FE7_Lead4_Chiff, KeySplitTable32),
    [LEAD_5_CHARANG]        = VOICE_KEYSPLIT(voicegroup_FE7_Lead5_Charang, KeySplitTable15),
    [LEAD_6_VOICE]          = VOICE_KEYSPLIT(voicegroup_FE7_Lead6_Voice, KeySplitTable33),
    [LEAD_7_FIFTHS]         = VOICE_KEYSPLIT(voicegroup_FE7_Lead7_Fifths, KeySplitTable34),
    [LEAD_8_BASS_LEAD]      = VOICE_KEYSPLIT(voicegroup_FE7_Lead8_Bass_Lead, KeySplitTable14),
    [PAD_1_NEW_AGE]         = VOICE_KEYSPLIT(voicegroup_FE7_Pad1_NewAge, KeySplitTable28),
    [PAD_2_WARM]            = VOICE_KEYSPLIT(voicegroup_FE7_Pad2_Warm, KeySplitTable33),
    [PAD_3_POLYSYNTH]       = VOICE_KEYSPLIT(voicegroup_FE7_Pad3_Polysynth, KeySplitTable8),
    [PAD_4_CHOIR]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_091_pad_4_choir, 255, 0, 255, 235),
    [PAD_5_BOWED]           = VOICE_KEYSPLIT(voicegroup_FE7_Pad5_Bowed, KeySplitTable8),
    [PAD_6_METALLIC]        = VOICE_KEYSPLIT(voicegroup_FE7_Pad6_Metallic, KeySplitTable7),
    [PAD_7_HALO]            = VOICE_KEYSPLIT(voicegroup_FE7_Pad7_Halo, KeySplitTable15),
    [PAD_8_SWEEP]           = VOICE_KEYSPLIT(voicegroup_FE7_Pad8_Sweep, KeySplitTable18),
    [FX_1_RAIN]             = VOICE_KEYSPLIT(voicegroup_FE7_FX1_Rain, KeySplitTable31),
    [FX_2_SOUNDTRACK]       = VOICE_KEYSPLIT(voicegroup_FE7_FX2_Soundtrack, KeySplitTable33),
    [FX_3_CRYSTAL]          = VOICE_KEYSPLIT(voicegroup_FE7_FX3_Crystal, KeySplitTable33),
    [FX_4_ATMOSPHERE]       = VOICE_KEYSPLIT(voicegroup_FE7_FX4_Atmosphere, KeySplitTable34),
    [FX_5_BRIGHTNESS]       = VOICE_KEYSPLIT(voicegroup_FE7_FX5_Brightness, KeySplitTable34),
    [FX_6_GOBLINS]          = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_101_fx_6_goblins, 255, 0, 255, 235),
    [FX_7_ECHOES]           = VOICE_KEYSPLIT(voicegroup_FE7_FX7_Echoes, KeySplitTable15),
    [FX_8_SCI_FI]           = VOICE_KEYSPLIT(voicegroup_FE7_FX8_Sci_Fi, KeySplitTable32),
    [SITAR]                 = VOICE_KEYSPLIT(voicegroup_FE7_Sitar, KeySplitTable31),
    [BANJO]                 = VOICE_KEYSPLIT(voicegroup_FE7_Banjo, KeySplitTable35),
    [SHAMISEN]              = VOICE_KEYSPLIT(voicegroup_FE7_Shamisen, KeySplitTable35),
    [KOTO]                  = VOICE_KEYSPLIT(voicegroup_FE7_Koto, KeySplitTable29),
    [KALIMBA]               = VOICE_KEYSPLIT(voicegroup_FE7_Kalimba, KeySplitTable31),
    [BAG_PIPE]              = VOICE_KEYSPLIT(voicegroup_FE7_Bagpipe, KeySplitTable30),
    [FIDDLE]                = VOICE_KEYSPLIT(voicegroup_FE7_Fiddle, KeySplitTable25),
    [SHANAI]                = VOICE_KEYSPLIT(voicegroup_FE7_Shanai, KeySplitTable35),
    [TINKLE_BELL]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_112_tinkle_bell, 255, 252, 0, 235),
    [AGOGO]                 = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_113_agogo, 255, 242, 0, 235),
    [STEEL_DRUMS]           = VOICE_KEYSPLIT(voicegroup_FE7_SteelDrums, KeySplitTable34),
    [WOODBLOCK]             = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_115_woodblock, 255, 0, 255, 235),
    [TAIKO_DRUM]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_116_taiko_drum, 255, 0, 255, 235),
    [MELODIC_TOM]           = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_117_melodic_tom, 255, 0, 255, 235),
    [SYNTH_DRUM]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_118_synth_drum, 255, 0, 255, 235),
    [REVERSE_CYMBAL]        = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_119_reverse_cymbal, 255, 0, 255, 235),
    [GUITAR_FRET_NOISE]     = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_120_guitar_fret_noise, 255, 0, 255, 235),
    [BREATH_NOISE]          = VOICE_KEYSPLIT(voicegroup_FE7_BreathNoise, KeySplitTable32),
    [SEASHORE]              = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_122_seashore, 255, 0, 255, 235),
    [BIRD_TWEET]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_123_bird_tweet, 255, 0, 255, 235),
    [TELEPHONE_RING]        = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_124_telephone_ring, 255, 0, 255, 235),
    [HELICOPTER]            = VOICE_DIRECTSOUND(60, 0, DirectSoundWaveData_FE7_125_helicopter, 255, 0, 255, 235),
    [APPLAUSE]              = VOICE_KEYSPLIT(voicegroup_FE7_Applause, KeySplitTable35),
    [DRUMKIT_CM_64_32L]     = VOICE_KEYSPLIT_ALL(voicegroup_FE7_Gunshot),
};

