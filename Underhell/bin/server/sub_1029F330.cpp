char __thiscall sub_1029F330(_DWORD *this, int a2, float *a3, float *a4)
{
  char v5; // bl
  int v6; // edi
  int v7; // edi
  int v8; // esi
  double v9; // st5
  int v10; // eax
  int v12[3]; // [esp+1Ch] [ebp-3Ch] BYREF
  float v13[3]; // [esp+28h] [ebp-30h] BYREF
  _DWORD v14[3]; // [esp+34h] [ebp-24h] BYREF
  float v15[3]; // [esp+40h] [ebp-18h] BYREF
  int v16; // [esp+4Ch] [ebp-Ch] BYREF
  float v17; // [esp+50h] [ebp-8h]
  float v18; // [esp+54h] [ebp-4h]
  int savedregs; // [esp+58h] [ebp+0h] BYREF

  v5 = 1;
  sub_100BFA80(this[1], a2, 0.0, 1.0, (int)&v16, (int)v12);
  v6 = this[1];
  v14[0] = v16;
  *(float *)&v14[1] = v17;
  *(float *)&v14[2] = v18;
  if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
    sub_100DAE60(v6);
  sub_10424E70(v14, v6 + 704, &v16);
  if ( a3 )
  {
    v7 = this[1];
    if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
      sub_100DAE60(this[1]);
    v13[0] = *(float *)(v7 + 580) + *(float *)&v16;
    v13[1] = *(float *)(v7 + 584) + v17;
    v13[2] = *(float *)(v7 + 588) + v18;
    if ( !sub_1029EFC0((int)this, COERCE_FLOAT(&savedregs), (int)this, v13, 16.0, 64.0, v15) || !sub_1029F240(this, v15) )
      v5 = 0;
    *a3 = v15[0];
    a3[1] = v15[1];
    a3[2] = v15[2];
  }
  if ( a4 )
  {
    v8 = this[1];
    if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
      sub_100DAE60(v8);
    v9 = (double)(unsigned __int16)(int)((*(float *)(v8 + 708) + *(float *)&v12[1]) * 182.04445) * 0.0054931641;
    v10 = (int)(182.04445 * (*(float *)(v8 + 712) + *(float *)&v12[2]));
    *a4 = (double)(unsigned __int16)(int)((*(float *)(v8 + 704) + *(float *)v12) * 182.04445) * 0.0054931641;
    a4[1] = v9;
    a4[2] = 0.0054931641 * (double)(unsigned __int16)v10;
  }
  return v5;
}
