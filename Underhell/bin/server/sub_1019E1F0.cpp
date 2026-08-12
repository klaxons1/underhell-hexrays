int sub_1019E1F0()
{
  int result; // eax
  double v1; // st7
  double v2; // st6
  int v3; // eax
  float *v4; // esi
  float v5; // [esp+0h] [ebp-24h]
  float v6[3]; // [esp+Ch] [ebp-18h] BYREF
  float v7; // [esp+18h] [ebp-Ch] BYREF
  float v8; // [esp+1Ch] [ebp-8h]
  float v9; // [esp+20h] [ebp-4h] BYREF
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  result = sub_1025EF10();
  if ( (_BYTE)result )
  {
    if ( *(_DWORD *)(dword_106B8394 + 48) )
    {
      v1 = *(float *)(dword_106B8370 + 1076);
      v7 = *(float *)(dword_106B8370 + 1076);
      v8 = *(float *)(dword_106B8370 + 1080);
      v2 = *(float *)(dword_106B8370 + 1084);
    }
    else
    {
      v3 = sub_1025FC50();
      v4 = (float *)v3;
      if ( !v3 )
        return Msg("ERROR: No local player!\n");
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      v1 = v4[145];
      v7 = v4[145];
      v8 = v4[146];
      v2 = v4[147];
    }
    v9 = v2;
    v5 = v1;
    v7 = sub_10192230(v5, 1);
    v8 = sub_10192230(v8, 1);
    if ( sub_1019DEA0((int)&savedregs, &v7, &v9, v6) )
    {
      sub_1019BE10((int *)dword_106B8370, &v7, v6);
      return Msg("Walkable position marked.\n");
    }
    else
    {
      return Msg("ERROR: Invalid ground position.\n");
    }
  }
  return result;
}
