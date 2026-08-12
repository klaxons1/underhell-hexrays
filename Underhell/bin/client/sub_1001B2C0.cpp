int __usercall sub_1001B2C0@<eax>(int a1@<edi>, int a2@<esi>, float a3, float *a4, int a5)
{
  __int16 v5; // ax
  int v6; // eax
  __int16 v7; // ax
  int v8; // eax
  __int16 v9; // ax
  int v10; // eax
  double v11; // st6
  double v12; // st2
  double v13; // st3
  double v14; // st6
  double v15; // st7
  __int16 v16; // ax
  int v17; // eax
  __int16 v18; // ax
  int v19; // eax
  __int16 v20; // ax
  int v21; // eax
  int v23; // eax
  __int16 v24; // ax
  int v25; // eax
  __int16 v26; // ax
  int v27; // eax
  __int16 v28; // ax
  int v29; // eax
  __int16 v30; // ax
  int v31; // eax
  __int16 v32; // ax
  int v33; // eax
  int v34[4]; // [esp+10h] [ebp-50h] BYREF
  int v35[4]; // [esp+20h] [ebp-40h] BYREF
  int v36; // [esp+30h] [ebp-30h] BYREF
  int v37; // [esp+34h] [ebp-2Ch] BYREF
  int v38; // [esp+38h] [ebp-28h] BYREF
  int v39; // [esp+3Ch] [ebp-24h] BYREF
  int v40; // [esp+40h] [ebp-20h] BYREF
  int v41; // [esp+44h] [ebp-1Ch] BYREF
  int v42; // [esp+48h] [ebp-18h] BYREF
  int v43; // [esp+4Ch] [ebp-14h] BYREF
  int v44; // [esp+50h] [ebp-10h] BYREF
  int v45; // [esp+54h] [ebp-Ch] BYREF
  int v46; // [esp+58h] [ebp-8h] BYREF
  int v47; // [esp+5Ch] [ebp-4h] BYREF

  v5 = *(_WORD *)(a2 + 24);
  if ( a3 <= 0.000099999997 )
  {
    if ( v5 <= 0 )
      v23 = 0;
    else
      v23 = a2 + v5;
    sub_1001AE60(a1, v23, *(float *)a2, a4);
    v24 = *(_WORD *)(a2 + 26);
    if ( v24 <= 0 )
      v25 = 0;
    else
      v25 = a2 + v24;
    sub_1001AE60(a1, v25, *(float *)(a2 + 4), a4 + 1);
    v26 = *(_WORD *)(a2 + 28);
    if ( v26 <= 0 )
      v27 = 0;
    else
      v27 = a2 + v26;
    sub_1001AE60(a1, v27, *(float *)(a2 + 8), a4 + 2);
    v28 = *(_WORD *)(a2 + 30);
    if ( v28 <= 0 )
      v29 = 0;
    else
      v29 = a2 + v28;
    sub_1001AE60(a1, v29, *(float *)(a2 + 12), (float *)&v36);
    v30 = *(_WORD *)(a2 + 32);
    if ( v30 <= 0 )
      v31 = 0;
    else
      v31 = a2 + v30;
    sub_1001AE60(a1, v31, *(float *)(a2 + 16), (float *)&v37);
    v32 = *(_WORD *)(a2 + 34);
    if ( v32 <= 0 )
      v33 = 0;
    else
      v33 = a2 + v32;
    sub_1001AE60(a1, v33, *(float *)(a2 + 20), (float *)&v38);
    return sub_101EEF50(&v36, a5);
  }
  else
  {
    if ( v5 <= 0 )
      v6 = 0;
    else
      v6 = a2 + v5;
    sub_1001AD50(a1, v6, *(float *)a2, (float *)&v36, (float *)&v39);
    v7 = *(_WORD *)(a2 + 26);
    if ( v7 <= 0 )
      v8 = 0;
    else
      v8 = a2 + v7;
    sub_1001AD50(a1, v8, *(float *)(a2 + 4), (float *)&v37, (float *)&v40);
    v9 = *(_WORD *)(a2 + 28);
    if ( v9 <= 0 )
      v10 = 0;
    else
      v10 = a2 + v9;
    sub_1001AD50(a1, v10, *(float *)(a2 + 8), (float *)&v38, (float *)&v41);
    v11 = 1.0 - a3;
    v12 = *(float *)&v36 * v11;
    v13 = *(float *)&v37 * v11;
    v14 = v11 * *(float *)&v38 + *(float *)&v41 * a3;
    v15 = *(float *)&v40 * a3 + v13;
    *a4 = *(float *)&v39 * a3 + v12;
    a4[1] = v15;
    a4[2] = v14;
    v16 = *(_WORD *)(a2 + 30);
    if ( v16 <= 0 )
      v17 = 0;
    else
      v17 = a2 + v16;
    sub_1001AD50(a1, v17, *(float *)(a2 + 12), (float *)&v45, (float *)&v42);
    v18 = *(_WORD *)(a2 + 32);
    if ( v18 <= 0 )
      v19 = 0;
    else
      v19 = a2 + v18;
    sub_1001AD50(a1, v19, *(float *)(a2 + 16), (float *)&v46, (float *)&v43);
    v20 = *(_WORD *)(a2 + 34);
    if ( v20 <= 0 )
      v21 = 0;
    else
      v21 = a2 + v20;
    sub_1001AD50(a1, v21, *(float *)(a2 + 20), (float *)&v47, (float *)&v44);
    if ( *(float *)&v42 == *(float *)&v45 && *(float *)&v43 == *(float *)&v46 && *(float *)&v44 == *(float *)&v47 )
    {
      return sub_101EEF50(&v45, a5);
    }
    else
    {
      sub_101EEF50(&v45, v34);
      sub_101EEF50(&v42, v35);
      return sub_101F17B0((int)v34, (int)v35, a3, a5);
    }
  }
}
