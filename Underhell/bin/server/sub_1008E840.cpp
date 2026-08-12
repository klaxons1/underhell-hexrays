int __thiscall sub_1008E840(_DWORD *this, float *a2, float *a3, float *a4, int a5, int a6)
{
  float *v8; // eax
  float v9; // ecx
  float v10; // edx
  float v11; // eax
  int v12; // ecx
  double v13; // st7
  double v14; // st6
  double v15; // rt0
  double v16; // st6
  int v17; // edi
  int v18; // ebx
  int v19; // esi
  int result; // eax
  int v21; // [esp-4h] [ebp-58h]
  _BYTE v22[12]; // [esp+Ch] [ebp-48h] BYREF
  _BYTE v23[12]; // [esp+18h] [ebp-3Ch] BYREF
  _BYTE v24[12]; // [esp+24h] [ebp-30h] BYREF
  _BYTE v25[12]; // [esp+30h] [ebp-24h] BYREF
  float v26; // [esp+3Ch] [ebp-18h] BYREF
  float v27; // [esp+40h] [ebp-14h]
  float v28; // [esp+44h] [ebp-10h]
  float v29; // [esp+48h] [ebp-Ch]
  float v30; // [esp+4Ch] [ebp-8h]
  _DWORD *v31; // [esp+50h] [ebp-4h]
  float v32; // [esp+60h] [ebp+Ch]
  float v33; // [esp+64h] [ebp+10h]
  float v34; // [esp+64h] [ebp+10h]
  float v35; // [esp+64h] [ebp+10h]

  v31 = this;
  if ( (unsigned __int8)sub_101119E0(a3) )
    return 0;
  v8 = (float *)sub_10022D70();
  *v8 = a4[85] - a4[82];
  v8[1] = a4[86] - a4[83];
  v8[2] = a4[87] - a4[84];
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v26 = v9;
  v12 = this[1];
  v28 = v11;
  v21 = *(_DWORD *)(v12 + 1676);
  v27 = v10;
  v13 = sub_100737B0(v21) * 0.5;
  v14 = v13 / v26;
  v33 = v14;
  v15 = v14;
  v16 = v13 / v27;
  v30 = v16;
  v29 = -v15;
  v26 = v29;
  v32 = v16 + 1.0;
  v27 = v32;
  v28 = 0.25;
  sub_101117D0(&v26, v22);
  v34 = v33 + 1.0;
  v26 = v34;
  v27 = v32;
  v28 = 0.25;
  sub_101117D0(&v26, v23);
  v26 = v34;
  v35 = -v30;
  v27 = v35;
  v28 = 0.25;
  sub_101117D0(&v26, v24);
  v26 = v29;
  v27 = v35;
  v28 = 0.25;
  sub_101117D0(&v26, v25);
  v17 = sub_1008D740(a2, (int)v22, 4);
  v18 = sub_1008D740(a3, (int)v22, 4);
  if ( v17 == v18 )
    return 0;
  v19 = sub_1008D8C0(a2, v17, v18, (int)v22, 4);
  result = sub_1008DEF0(v31, (int)v22, 4, v19, v17, v18, a6, a5);
  if ( !result )
  {
    result = sub_1008DEF0(v31, (int)v22, 4, -v19, v17, v18, a6, a5);
    if ( !result )
      return 0;
  }
  return result;
}
