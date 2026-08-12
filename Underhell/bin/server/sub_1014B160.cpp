double __thiscall sub_1014B160(_DWORD *this, int a2, int a3)
{
  double v3; // st7
  double v4; // st6
  int v5; // edi
  bool v6; // c0
  bool v7; // c3
  float *v8; // edi
  double v9; // st6
  double v10; // st6
  int v11; // edi
  double v12; // st5
  float *v13; // edi
  double v14; // st5
  double v15; // st5
  double v16; // st6
  float *v17; // edi
  double v18; // st4
  int v19; // ebx
  double v20; // st6
  float *v21; // edi
  double v22; // st4
  float *v23; // edi
  double v24; // st6
  float *v25; // edi
  double v26; // st6
  float *v27; // edi
  double v28; // st5
  double v29; // st6
  int v30; // eax
  double v31; // st4
  float *v32; // ecx
  int v34; // [esp+8h] [ebp-4h]

  v3 = 0.0;
  v34 = this[245] - 1;
  if ( a3 == v34 )
  {
    v4 = 1.01;
  }
  else
  {
    v5 = a3 + 1 + 16 * a2;
    v6 = *(float *)&this[v5 + 257] > 0.0;
    v7 = 0.0 == *(float *)&this[v5 + 257];
    v8 = (float *)&this[v5 + 257];
    if ( v6 || v7 )
      v9 = *v8;
    else
      v9 = 0.0;
    v4 = v9 + 0.0099999998;
  }
  if ( a3 )
  {
    v11 = a3 - 1 + 16 * a2;
    v12 = *(float *)&this[v11 + 257];
    v13 = (float *)&this[v11 + 257];
    if ( v12 >= 0.0 )
      v14 = *v13;
    else
      v14 = 0.0;
    v10 = v4 + v14 * 1.25;
  }
  else
  {
    v10 = v4 + 1.25;
  }
  v15 = 1.0;
  if ( a2 )
  {
    v17 = (float *)&this[16 * a2 + 241 + a3];
    if ( *v17 >= 0.0 )
      v18 = *v17;
    else
      v18 = 0.0;
    v16 = v10 + v18;
  }
  else
  {
    v16 = v10 + 1.0;
  }
  v19 = this[244] - 1;
  if ( a2 == v19 )
  {
    v20 = v16 + 1.0;
  }
  else
  {
    v21 = (float *)&this[16 * a2 + 273 + a3];
    if ( *v21 >= 0.0 )
      v22 = *v21;
    else
      v22 = 0.0;
    v20 = v16 + v22;
  }
  if ( a3 && a2 )
  {
    v23 = (float *)&this[16 * a2 + 240 + a3];
    if ( *v23 >= 0.0 )
      v24 = v20 + *v23;
    else
      v24 = v20 + 0.0;
  }
  else
  {
    v24 = v20 + 1.0;
  }
  if ( a3 && a2 != v19 )
  {
    v25 = (float *)&this[16 * a2 + 272 + a3];
    if ( *v25 >= 0.0 )
      v15 = *v25;
    else
      v15 = 0.0;
  }
  v26 = v24 + v15;
  if ( a3 == v34 || a2 == v19 )
  {
    v28 = 0.25;
    v29 = v26 + 0.25;
  }
  else
  {
    v27 = (float *)&this[16 * a2 + 274 + a3];
    v28 = 0.25;
    if ( *v27 >= 0.0 )
      v29 = v26 + *v27 * 0.25;
    else
      v29 = v26 + 0.0 * 0.25;
  }
  if ( a3 == v34 || !a2 )
    return v28 + v29;
  v30 = a3 + 1 + 16 * (a2 - 1);
  v31 = *(float *)&this[v30 + 257];
  v32 = (float *)&this[v30 + 257];
  if ( v31 >= 0.0 )
    v3 = *v32;
  return v3 * v28 + v29;
}
