char __thiscall sub_102A1630(_DWORD *this, float a2, _BYTE *a3, float *a4, float *a5)
{
  int v5; // ebx
  int v7; // edi
  _DWORD *v8; // edi
  double v9; // st7
  int v10; // ecx
  int v11; // ecx
  float *v12; // eax
  double v13; // st6
  double v14; // st7
  double v15; // st6
  double v16; // rt2
  float *v18; // esi
  float v19; // [esp+4h] [ebp-40h]
  int v20[3]; // [esp+20h] [ebp-24h] BYREF
  _DWORD v21[3]; // [esp+2Ch] [ebp-18h] BYREF
  int v22; // [esp+38h] [ebp-Ch] BYREF
  float v23; // [esp+3Ch] [ebp-8h]
  float v24; // [esp+40h] [ebp-4h]

  v5 = dword_10700AC8;
  v7 = this[1];
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(v7 + 1100) && sub_100D7240((void *)v7) )
    sub_100BD750((volatile signed __int32 *)v7);
  v8 = *(_DWORD **)(v7 + 1100);
  if ( !v8 || !*v8 )
    v8 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
  if ( v8 )
  {
    v9 = sub_102A0A80(this, *(_DWORD *)(this[1] + 908), a2);
    v10 = this[1];
    if ( *(_BYTE *)(v10 + 897) || v9 <= 1.0 )
    {
      *a3 = 0;
    }
    else
    {
      sub_100C0F70(v10, *(_DWORD *)(v10 + 908));
      v9 = 1.0;
      *a3 = 1;
    }
    v19 = v9;
    if ( sub_10100AE0(
           (int)v8,
           *(_DWORD *)(this[1] + 908),
           *(float *)(this[1] + 904),
           v19,
           this[1] + 912,
           (float *)&v22,
           (float *)v20) )
    {
      *(float *)&v21[1] = v23;
      v11 = this[1];
      v21[0] = v22;
      *(float *)&v21[2] = v24;
      sub_10424E70(v21, v11 + 728, &v22);
      v12 = (float *)this[1];
      v13 = v12[180] + v23;
      v14 = v12[181] + v24;
      *a4 = v12[179] + *(float *)&v22;
      a4[1] = v13;
      a4[2] = v14;
      v15 = v12[183] + *(float *)&v20[1];
      v16 = v12[184] + *(float *)&v20[2];
      *a5 = v12[182] + *(float *)v20;
      a5[1] = v15;
      a5[2] = v16;
      return 1;
    }
    v18 = (float *)this[1];
    *a4 = v18[179];
    a4[1] = v18[180];
    a4[2] = v18[181];
    *a5 = v18[182];
    a5[1] = v18[183];
    a5[2] = v18[184];
  }
  return 0;
}
