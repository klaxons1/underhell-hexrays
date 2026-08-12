int __thiscall sub_1038E430(_DWORD *this)
{
  float *v2; // eax
  double v3; // st7
  double v4; // st6
  double v5; // st7
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st7
  void (__thiscall *v11)(int, _DWORD, _DWORD); // edx
  int i; // edi
  _DWORD *v13; // ecx
  float v14; // [esp+8h] [ebp-68h]
  float v15; // [esp+10h] [ebp-60h]
  float v16; // [esp+14h] [ebp-5Ch]
  float v17; // [esp+14h] [ebp-5Ch]
  float v18[2]; // [esp+1Ch] [ebp-54h]
  float v19; // [esp+24h] [ebp-4Ch]
  float v20; // [esp+28h] [ebp-48h]
  float v21; // [esp+2Ch] [ebp-44h]
  float v22[3]; // [esp+30h] [ebp-40h] BYREF
  _DWORD v23[2]; // [esp+3Ch] [ebp-34h]
  int v24; // [esp+44h] [ebp-2Ch] BYREF
  int v25; // [esp+48h] [ebp-28h]
  int v26; // [esp+4Ch] [ebp-24h]
  int v27; // [esp+50h] [ebp-20h] BYREF
  float v28; // [esp+54h] [ebp-1Ch]
  float v29; // [esp+58h] [ebp-18h]
  float v30; // [esp+5Ch] [ebp-14h]
  float v31; // [esp+60h] [ebp-10h]
  int v32; // [esp+64h] [ebp-Ch]
  float v33; // [esp+68h] [ebp-8h]
  float v34; // [esp+6Ch] [ebp-4h]

  if ( (this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_1038C4E0(this, v22, (int)(this + 145), 0);
  v2 = (float *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 968))(this, &v24);
  v3 = *v2 - v22[0];
  *(float *)&v27 = v3;
  v4 = v2[1] - v22[1];
  v28 = v4;
  v29 = v2[2] - v22[2];
  v16 = v3 * v3 + v4 * v4;
  v5 = off_10689708(v16);
  v34 = v5;
  if ( 0.0 == v5 )
  {
    v31 = 0.0;
    v30 = 0.0;
  }
  else
  {
    v30 = *(float *)&v27 * (1.0 / v5);
    v31 = 1.0 / v5 * v28;
  }
  if ( (this[62] & 0x400000) != 0 && v5 > 6000.0 )
    return 0;
  *(float *)&v32 = *(float *)(dword_106E9D74 + 44) + *(float *)(dword_106E9D74 + 44);
  sub_10388FC0(this, v32, (float *)&v24);
  v17 = *(float *)&v25 * *(float *)&v25 + *(float *)&v24 * *(float *)&v24;
  v7 = off_10689708(v17);
  v33 = v7;
  v8 = 0.0;
  if ( 0.0 == v7 )
  {
    v9 = 0.0;
  }
  else
  {
    v9 = *(float *)&v24 * (1.0 / v7);
    v8 = 1.0 / v7 * *(float *)&v25;
  }
  v31 = v8 * v31 + v9 * v30;
  v14 = v7;
  v18[0] = sub_1038E250((int)this, v34, v14, v31, *(float *)&v32, (float *)&v27);
  v18[1] = v18[0];
  v19 = sub_10389940(this, v34, v33, (float *)&v27, (float *)&v24) + v18[0];
  v10 = sub_103898A0(this, v34, v33, v31) + v19;
  v20 = v10;
  v21 = v10;
  if ( 0.0 == v10 )
    return 0;
  v11 = *(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
  v15 = v10;
  v23[0] = 101;
  v23[1] = 102;
  v24 = 103;
  v25 = 104;
  v26 = 105;
  v11(dword_106B31E4, 0.0, LODWORD(v15));
  for ( i = 0; i < 5; ++i )
  {
    if ( v18[i] >= 0.0 )
      break;
  }
  if ( i >= 3 && sub_1004AE20(this, 14, 15) )
    return v23[i];
  if ( sub_1004AE20(this, 0, 1) )
  {
    v13 = (_DWORD *)this[699];
    if ( v13 )
    {
      if ( i < 2 )
        sub_100B1890(v13, dword_106E9D48, 0, 0);
    }
    return v23[i];
  }
  return 0;
}
