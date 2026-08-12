int __usercall sub_103CC150@<eax>(int a1@<ecx>, int a2@<edi>)
{
  unsigned int v3; // edx
  int *v4; // ecx
  unsigned int v5; // edx
  int v6; // edi
  float *v7; // eax
  double v8; // st7
  int v9; // edi
  double v10; // st7
  double v11; // st6
  long double v12; // st7
  long double v13; // st7
  double v14; // st3
  long double v15; // st4
  long double v16; // st5
  long double v17; // st7
  long double v18; // st3
  double v19; // st1
  float *v20; // eax
  double v21; // st6
  double v22; // st5
  float v24; // [esp+0h] [ebp-4Ch]
  float v25; // [esp+0h] [ebp-4Ch]
  float v27[3]; // [esp+Ch] [ebp-40h] BYREF
  float v28[6]; // [esp+18h] [ebp-34h] BYREF
  float v29; // [esp+30h] [ebp-1Ch] BYREF
  float v30; // [esp+34h] [ebp-18h]
  float v31; // [esp+38h] [ebp-14h]
  float v32; // [esp+3Ch] [ebp-10h] BYREF
  float v33; // [esp+40h] [ebp-Ch]
  float v34; // [esp+44h] [ebp-8h]
  float v35; // [esp+48h] [ebp-4h]
  int savedregs; // [esp+4Ch] [ebp+0h] BYREF

  v3 = *(_DWORD *)(a1 + 804);
  if ( v3 == -1 )
    return sub_103C9F50(a1);
  v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 804) & 0xFFF) + 1];
  v5 = v3 >> 12;
  if ( v4[1] != v5 || !*v4 || *(float *)(dword_106B31C8 + 12) > (double)*(float *)(a1 + 800) )
    return sub_103C9F50(a1);
  if ( v4[1] == v5 )
    v6 = *v4;
  else
    v6 = 0;
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 576))(v6);
  v29 = *v7 - *(float *)(a1 + 580);
  v30 = v7[1] - *(float *)(a1 + 584);
  v31 = v7[2] - *(float *)(a1 + 588);
  off_10689714();
  if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
    sub_100DAFD0(a1);
  v24 = *(float *)(a1 + 480) * *(float *)(a1 + 480)
      + *(float *)(a1 + 476) * *(float *)(a1 + 476)
      + *(float *)(a1 + 484) * *(float *)(a1 + 484);
  v8 = off_10689708(v24);
  v9 = dword_106B31C8;
  v35 = v8;
  v10 = *(float *)(v9 + 12) - sub_100E92C0((_DWORD *)a1, 0);
  if ( v35 < 320.0 )
  {
    v11 = v35 + v10 * 320.0;
    v35 = v11;
    if ( v11 > 320.0 )
      v35 = 320.0;
  }
  sub_10421D80(&v29, v28);
  v33 = flt_106F1CAC;
  v12 = *(float *)(dword_106B31C8 + 12) * 20.0;
  v32 = flt_106F1CA8;
  v34 = flt_106F1CB0;
  v13 = cos(v12);
  v14 = *(float *)(dword_106B31C8 + 16);
  v15 = v28[3] * v13 * 200.0 * v14;
  v16 = v28[4] * v13 * 200.0 * v14 + flt_106F1CAC;
  v17 = v13 * v28[5] * 200.0 * v14 + flt_106F1CB0;
  v18 = sin(*(float *)(dword_106B31C8 + 12) * 15.0);
  v19 = *(float *)(dword_106B31C8 + 16);
  v32 = v15 + flt_106F1CA8 + v28[0] * v18 * 200.0 * v19;
  v33 = v16 + v28[1] * v18 * 200.0 * v19;
  v34 = v17 + 200.0 * (v18 * v28[2]) * v19;
  v20 = sub_103CBDF0(a1, (int)&savedregs, a2, a1, v27, &v29);
  v21 = v20[1] + v33;
  v22 = v20[2] + v34;
  v32 = v32 + *v20 + v29 * v35;
  v33 = v21 + v30 * v35;
  v34 = v35 * v31 + v22;
  sub_100DD660(a1, &v32);
  v25 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
  return sub_100EC4A0((int *)a1, v25, 0);
}
