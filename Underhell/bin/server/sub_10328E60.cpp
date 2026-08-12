void __thiscall sub_10328E60(int this)
{
  int v2; // esi
  int v3; // eax
  int v4; // esi
  int v5; // edx
  double v6; // st3
  double v7; // st7
  float v8; // [esp+10h] [ebp-44h]
  int v9; // [esp+14h] [ebp-40h]
  float v10[3]; // [esp+24h] [ebp-30h] BYREF
  float v11; // [esp+30h] [ebp-24h] BYREF
  float v12; // [esp+34h] [ebp-20h]
  float v13; // [esp+38h] [ebp-1Ch]
  float v14; // [esp+3Ch] [ebp-18h]
  float v15; // [esp+40h] [ebp-14h]
  float v16; // [esp+44h] [ebp-10h]
  float v17; // [esp+48h] [ebp-Ch] BYREF
  float v18; // [esp+4Ch] [ebp-8h]
  float v19; // [esp+50h] [ebp-4h]

  v2 = *(_DWORD *)(this + 424);
  if ( v2 )
  {
    (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v2 + 188))(v2, &v17, 0);
    (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v2 + 204))(v2, &v11, 0);
    v3 = dword_106B31C8;
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    {
      v4 = sub_10261B20();
      if ( v4 )
      {
        if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
          sub_100DAE60(v4);
        v14 = *(float *)(v4 + 580) - v17;
        v15 = *(float *)(v4 + 584) - v18;
        v16 = *(float *)(v4 + 588) - v19;
        off_10689714();
        if ( v15 * v12 + v14 * v11 + v16 * v13 > 0.5 )
        {
          v5 = *(_DWORD *)(v4 + 252) >> 11;
          v6 = *(float *)(dword_106B31C8 + 28) + *(float *)(dword_106B31C8 + 28);
          v10[0] = v11 * v6 + v17;
          v10[1] = v12 * v6 + v18;
          v10[2] = v6 * v13 + v19;
          if ( (v5 & 1) != 0 )
            sub_100DAE60(v4);
          if ( sub_104246F0(v4 + 580, &v17, v10, 0) < 200.0 )
          {
            sub_10328900((_BYTE *)this, (int)"DiveBombFlyby");
            v7 = *(float *)(dword_106B31C8 + 12) + 0.5;
            v9 = off_1066DC68;
LABEL_13:
            v8 = v7;
            sub_100EC3F0((_DWORD *)this, (int)sub_10328E60, v8, v9);
            return;
          }
        }
      }
      v3 = dword_106B31C8;
    }
    v9 = off_1066DC68;
    v7 = *(float *)(v3 + 28) + *(float *)(v3 + 28) + *(float *)(v3 + 12);
    goto LABEL_13;
  }
}
