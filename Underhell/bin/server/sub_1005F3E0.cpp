void __thiscall sub_1005F3E0(int this)
{
  bool v2; // cc
  int v3; // eax
  _DWORD *v4; // esi
  float *v5; // eax
  double v6; // st6
  double v7; // st7
  int i; // esi
  int v9; // edx
  float *v10; // eax
  int v11; // edx
  int v12; // [esp+0h] [ebp-48h]
  float v13; // [esp+14h] [ebp-34h] BYREF
  float v14; // [esp+18h] [ebp-30h]
  float v15; // [esp+1Ch] [ebp-2Ch]
  float v16; // [esp+20h] [ebp-28h] BYREF
  float v17; // [esp+24h] [ebp-24h]
  float v18; // [esp+28h] [ebp-20h]
  int v19[3]; // [esp+2Ch] [ebp-1Ch] BYREF
  float v20; // [esp+38h] [ebp-10h]
  float v21; // [esp+3Ch] [ebp-Ch]
  float v22; // [esp+40h] [ebp-8h]
  char v23; // [esp+47h] [ebp-1h]

  if ( *(float *)(dword_106B31C8 + 12) == *(float *)(this + 176) )
    return;
  *(float *)(this + 176) = *(float *)(dword_106B31C8 + 12);
  *(_DWORD *)(this + 192) = 0;
  if ( *(float *)(this + 48) == 3.4028235e38
    && *(float *)(this + 52) == 3.4028235e38
    && *(float *)(this + 56) == 3.4028235e38 )
  {
    v2 = *(_DWORD *)(dword_106B31C8 + 20) <= 1;
    v23 = 0;
    if ( v2 )
    {
      v3 = sub_10261B20();
      if ( v3 )
      {
        if ( (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 1080))(*(_DWORD *)(this + 4), v3) == 3 )
        {
          if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4)) )
          {
            if ( *(_BYTE *)(this + 69) )
            {
              v4 = (_DWORD *)sub_10261B20();
              if ( sub_1005D710((_DWORD **)this, &v16) )
              {
                v20 = v16 * 180.0;
                v21 = v17 * 180.0;
                v22 = 180.0 * v18;
                v5 = (float *)sub_10019640(v4);
LABEL_12:
                v6 = v5[1] + v21;
                v12 = *(_DWORD *)(this + 192);
                v7 = v5[2] + v22;
                v13 = *v5 + v20;
                v14 = v6;
                v15 = v7;
                sub_1039A340(v12, &v13);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    v23 = 1;
    if ( sub_1005D710((_DWORD **)this, &v16) )
    {
      v20 = v16 * 180.0;
      v21 = v17 * 180.0;
      v22 = 180.0 * v18;
      v5 = (float *)sub_1005DB80(this, v19);
      goto LABEL_12;
    }
  }
  for ( i = sub_1012BC90(0, "ai_battle_line"); i; i = sub_1012BC90(i, "ai_battle_line") )
  {
    if ( *(_BYTE *)(i + 804) && (*(_BYTE *)(i + 805) || !v23) && sub_1005D160((_DWORD *)i, *(_DWORD **)(this + 4)) )
    {
      if ( (*(_DWORD *)(i + 252) & 0x800) != 0 )
        sub_100DAE60(i);
      v9 = *(_DWORD *)(i + 252);
      v13 = *(float *)(i + 580);
      v14 = *(float *)(i + 584);
      v15 = *(float *)(i + 588);
      if ( (v9 & 0x800) != 0 )
        sub_100DAE60(i);
      v10 = (float *)sub_102650F0((int)v19, *(float *)(i + 708));
      v11 = *(_DWORD *)(this + 192);
      v16 = *v10;
      v17 = v10[1];
      v18 = v10[2];
      sub_1039A340(v11, &v13);
    }
  }
}
