float *__thiscall sub_10058040(int this, int a2, float *a3, float *a4, float *a5, float *a6)
{
  float *v8; // eax
  double v9; // st7
  float *result; // eax
  double v11; // st5
  double v12; // st6
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // st4
  double v17; // st7
  float v18; // [esp+0h] [ebp-28h]
  float v19; // [esp+4h] [ebp-24h]
  float v20; // [esp+8h] [ebp-20h]
  float v21; // [esp+Ch] [ebp-1Ch]
  float v22; // [esp+10h] [ebp-18h]
  float v23; // [esp+1Ch] [ebp-Ch]
  float v24; // [esp+20h] [ebp-8h]
  float v25; // [esp+24h] [ebp-4h]
  int v26; // [esp+34h] [ebp+Ch]
  int v27; // [esp+38h] [ebp+10h]

  *a4 = a3[3];
  *a5 = a3[4];
  v8 = (float *)sub_101422C0();
  v23 = *v8 - *(float *)(this + 164);
  v24 = v8[1] - *(float *)(this + 168);
  v25 = v8[2] - *(float *)(this + 172);
  v9 = off_103EDFEC();
  if ( *(_BYTE *)(this + 200)
    && *(float *)(this + 180) * v24 + *(float *)(this + 176) * v23 + *(float *)(this + 184) * v25 < 0.0 )
  {
    result = a6;
    *a6 = 0.0;
    a6[1] = 0.0;
    a6[2] = 0.0;
  }
  else
  {
    v27 = *(_DWORD *)(this + 196);
    v26 = *(_DWORD *)(this + 192);
    if ( v27 <= v26 || (v11 = (double)v26, v11 >= v9) )
    {
      v22 = 1.0;
      v21 = 0.0;
      v20 = (float)v26;
      v12 = (double)*(int *)(this + 188);
    }
    else
    {
      v12 = v11;
      v22 = 0.0;
      v21 = 1.0;
      v20 = (float)v27;
    }
    v19 = v12;
    v18 = v9;
    v13 = sub_100260E0(v18, v19, v20, v21, v22);
    result = a6;
    v14 = *a3 * v13;
    v15 = a3[1] * v13;
    v16 = *(float *)(this + 148);
    v17 = v13 * a3[2] * v16;
    *a6 = v14 * v16;
    a6[1] = v15 * v16;
    a6[2] = v17;
  }
  return result;
}
