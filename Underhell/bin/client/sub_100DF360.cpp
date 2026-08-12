_DWORD *__thiscall sub_100DF360(_DWORD *this, char *Destination, _DWORD *a3)
{
  char *v4; // eax
  char *v6; // ecx
  char v7; // dl
  int v8; // ebx
  int v9; // esi
  int v10; // eax
  _DWORD *v11; // esi
  int v12; // eax
  _DWORD *v13; // edx
  char *v14; // eax
  _DWORD *v15; // ecx
  char v16[128]; // [esp+10h] [ebp-208h] BYREF
  char v17[256]; // [esp+90h] [ebp-188h] BYREF
  char Str[128]; // [esp+190h] [ebp-88h] BYREF
  int v19; // [esp+210h] [ebp-8h]
  _DWORD *v20; // [esp+214h] [ebp-4h]
  char *Destinationa; // [esp+220h] [ebp+8h]

  strcpy(v17, "scripts/");
  v20 = this;
  memset(&v17[9], 0, 0xF7u);
  strcpy(Str, Destination);
  v4 = strstr(Str, ".txt");
  if ( !v4 )
  {
    Msg("ERROR: FILENAME INVALID\n");
    return 0;
  }
  v6 = v4 + 5;
  do
  {
    v7 = *v6;
    v6[v16 - (v4 + 5)] = *v6;
    ++v6;
  }
  while ( v7 );
  v4[4] = 0;
  sub_10228100((int)v17, Str, 256, -1);
  v8 = this[4288] + 1;
  if ( v8 >= 8 )
    v8 = 0;
  if ( sub_10229D00(32) )
  {
    v9 = sub_10229D20("message_list");
    v19 = v9;
  }
  else
  {
    v19 = 0;
    v9 = 0;
  }
  if ( dword_1047C968 )
    v10 = dword_1047C968 + 4;
  else
    v10 = 0;
  if ( (unsigned __int8)sub_10229D70(v10, v17, "GAME") )
  {
    if ( !sub_1022A6A0(v16, 0) )
    {
      Msg("ERROR: MESSAGE NAME NOT FOUND\n");
      sub_1022AF00(v9);
      return 0;
    }
    v11 = &v20[16 * v8];
    *((_BYTE *)v11 + 260) = sub_1022A800("r1", 0);
    *((_BYTE *)v11 + 261) = sub_1022A800("g1", 0);
    *((_BYTE *)v11 + 262) = sub_1022A800("b1", 0);
    *((_BYTE *)v11 + 263) = sub_1022A800("a1", 0);
    *((_BYTE *)v11 + 264) = sub_1022A800("r2", 0);
    *((_BYTE *)v11 + 265) = sub_1022A800("g2", 0);
    *((_BYTE *)v11 + 266) = sub_1022A800("b2", 0);
    *((_BYTE *)v11 + 267) = sub_1022A800("a2", 0);
    sub_1022A940("positionx", 0.0);
    *((float *)v11 + 67) = 0.0;
    sub_1022A940("positiony", 0.0);
    *((float *)v11 + 68) = 0.0;
    sub_1022A940("fadein", 0.0);
    *((float *)v11 + 69) = 0.0;
    sub_1022A940("fadeout", 0.0);
    *((float *)v11 + 70) = 0.0;
    sub_1022A940("holdtime", 0.0);
    *((float *)v11 + 71) = 0.0;
    v12 = sub_1022A800("effect", 0);
    v20[16 * v8 + 64] = v12;
    sub_1022A940("fxtime", 0.0);
    *((float *)v11 + 72) = 0.0;
    *a3 = sub_1022A800("channel", -1);
    v13 = v20;
    v11[74] = Destination;
    Destinationa = (char *)&v13[512 * v8 + 192];
    v14 = (char *)sub_1022B4C0("Message", (int)"ERROR:NO MESSAGE DETECTED");
    sub_102282F0(Destinationa, v14, 0x800u);
    v15 = v20;
    *((float *)v11 + 77) = 0.0;
    v11[75] = Destinationa;
    *((_BYTE *)v11 + 304) = 0;
    v9 = v19;
    v15[4288] = v8;
  }
  else
  {
    Msg("ERROR: FAILED TO LOAD FILE\n");
  }
  sub_1022AF00(v9);
  return &v20[16 * v8 + 64];
}
