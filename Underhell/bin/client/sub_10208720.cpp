void __thiscall sub_10208720(float *this, _DWORD *a2, int a3, int a4, char a5, int a6)
{
  int v8; // ecx
  float *v9; // edi
  int v10; // ecx
  int v11; // edx
  double v12; // st7
  __int16 v13; // ax
  double v14; // st6
  double v15; // st5
  double v16; // st5
  double v17; // st4
  double v18; // st6
  double v19; // rtt
  double v20; // st5
  double v21; // rt0
  double v22; // st5
  double v23; // st6
  double v24; // rt1
  double v25; // st5
  double v26; // st7
  float v28; // [esp+24h] [ebp-60h]
  float v29; // [esp+28h] [ebp-5Ch]
  float v30; // [esp+2Ch] [ebp-58h]
  float v31; // [esp+30h] [ebp-54h]
  float v32; // [esp+34h] [ebp-50h]
  float v33; // [esp+38h] [ebp-4Ch]
  float v34; // [esp+3Ch] [ebp-48h]
  float v35; // [esp+40h] [ebp-44h]
  float v36; // [esp+44h] [ebp-40h]
  int v37; // [esp+48h] [ebp-3Ch] BYREF
  float v38; // [esp+4Ch] [ebp-38h]
  float v39; // [esp+50h] [ebp-34h]
  int v40; // [esp+54h] [ebp-30h] BYREF
  float v41; // [esp+58h] [ebp-2Ch]
  float v42; // [esp+5Ch] [ebp-28h]
  int v43[4]; // [esp+60h] [ebp-24h] BYREF
  float v44; // [esp+70h] [ebp-14h]
  float v45; // [esp+74h] [ebp-10h]
  float v46; // [esp+7Ch] [ebp-8h]
  float *v47; // [esp+88h] [ebp+4h]

  for ( ; a4; ++a3 )
  {
    v8 = a3 & 3;
    v9 = (float *)(a2[1517] + 4 * (v8 + a3 / 4 * a2[1581]));
    v47 = (float *)(a2[1519] + 4 * (v8 + a3 / 4 * a2[1583]));
    --a4;
    sub_101F96B0(
      a2,
      (int)(this + 12),
      *(float *)(a2[1525] + 4 * (v8 + a3 / 4 * a2[1589])),
      (float *)&v37,
      (float *)&v40,
      (float *)v43);
    v10 = a2[1655];
    v11 = a2[1656];
    a2[1655] = v10 + 1;
    v12 = flt_103EE7C0[((_WORD)v11 + (_WORD)v10) & 0xFFF];
    v13 = v11 + v10 + 1;
    v14 = -this[11];
    v15 = this[11];
    a2[1655] = v10 + 2;
    v16 = v15 - v14;
    v34 = flt_103EE7C0[v13 & 0xFFF] * v16 + v14;
    v35 = flt_103EE7C0[(v13 + 1) & 0xFFF] * v16 + v14;
    v36 = v14 + v16 * flt_103EE7C0[(v13 + 2) & 0xFFF];
    v44 = v41 - v38;
    v45 = v42 - v39;
    v28 = *(float *)v43 - *(float *)&v40;
    v29 = *(float *)&v43[1] - v41;
    v30 = *(float *)&v43[2] - v42;
    v46 = v44 * v12;
    v17 = *(float *)&v37 + (*(float *)&v40 - *(float *)&v37) * v12;
    v31 = v28 * v12;
    v32 = v29 * v12;
    v33 = v30 * v12;
    v18 = v46 + v38 + (v41 + v32 - (v46 + v38)) * v12 + v35;
    v19 = v39 + v45 * v12 + v12 * (v42 + v33 - (v39 + v45 * v12)) + v36;
    v20 = v17 + (*(float *)&v40 + v31 - v17) * v12 + v34;
    *v9 = v20;
    v21 = v20;
    v22 = v18;
    v23 = v21;
    v9[4] = v22;
    v24 = v22;
    v25 = v19;
    v26 = v24;
    v9[8] = v19;
    if ( v47 )
    {
      if ( (a5 & 4) != 0 )
      {
        *v47 = v23;
        v47[4] = v26;
        v47[8] = v25;
      }
    }
  }
}
