int __thiscall sub_10233FD0(int this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  int v5; // eax
  int v7; // ecx
  int v8; // esi
  char *v9; // eax
  double v10; // st4
  double v11; // st5
  double v12; // st7
  int v13; // esi
  int v14; // eax
  float v15; // [esp+4h] [ebp-820h]
  _DWORD v16[514]; // [esp+14h] [ebp-810h] BYREF
  float v17; // [esp+81Ch] [ebp-8h]
  int v18; // [esp+820h] [ebp-4h]

  v2 = *(char **)(this + 3636);
  if ( !v2 )
    v2 = (char *)String;
  v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  v4 = v3;
  if ( v3 )
  {
    if ( (v3[64] & 0x2000) != 0 )
    {
      v5 = sub_100D7680((int)v3);
      if ( dword_106C4714 > 0 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)v5 + 896))(
               v5,
               dword_106C4714,
               0,
               this) )
        {
          return (int)v4;
        }
      }
    }
  }
  v7 = *(_DWORD *)(this + 252) >> 11;
  v17 = 16384.0;
  v18 = 0;
  if ( (v7 & 1) != 0 )
    sub_100DAE60(this);
  sub_10261520(this + 580, *(float *)(this + 3640), 0);
  v8 = sub_1025EEE0(v16);
  if ( !v8 )
    return 0;
  do
  {
    if ( (*(_DWORD *)(v8 + 256) & 0x2000) != 0 )
    {
      v9 = *(char **)(this + 3636);
      if ( !v9 )
        v9 = (char *)String;
      if ( *(char **)(v8 + 92) == v9 || sub_100D6240((_DWORD *)v8, v9) )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
          sub_100DAE60(v8);
        v10 = *(float *)(v8 + 584) - *(float *)(this + 584);
        v11 = *(float *)(v8 + 588) - *(float *)(this + 588);
        v15 = v11 * v11
            + v10 * v10
            + (*(float *)(v8 + 580) - *(float *)(this + 580)) * (*(float *)(v8 + 580) - *(float *)(this + 580));
        v12 = off_10689708(v15);
        if ( v17 > v12 )
        {
          v17 = v12;
          v18 = v8;
        }
      }
    }
    ++v16[0];
    v8 = sub_1025EEE0(v16);
  }
  while ( v8 );
  v13 = v18;
  if ( v18
    && (v14 = sub_100D7680(v18), dword_106C4714 > 0)
    && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)v14 + 896))(v14, dword_106C4714, 0, this) )
  {
    return v13;
  }
  else
  {
    return 0;
  }
}
