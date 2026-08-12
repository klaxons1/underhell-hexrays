void __thiscall sub_102003C0(int this, float *a2, int a3, int a4, float *a5, float a6)
{
  float v7; // edx
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st0
  double v12; // st7
  __m128 *v13; // esi
  int v14; // eax
  int v15; // ebp
  int v16; // ebx
  __m128 *v17; // esi
  int v18; // eax
  int v19; // ebp
  int v20; // ebx
  float v21; // [esp+4h] [ebp-18h] BYREF
  float v22; // [esp+8h] [ebp-14h]
  float v23; // [esp+Ch] [ebp-10h]
  float v24; // [esp+10h] [ebp-Ch] BYREF
  float v25; // [esp+14h] [ebp-8h]
  float v26; // [esp+18h] [ebp-4h]
  int v27; // [esp+20h] [ebp+4h]
  int v28; // [esp+20h] [ebp+4h]
  int v29; // [esp+24h] [ebp+8h]
  int v30; // [esp+24h] [ebp+8h]
  int v31; // [esp+2Ch] [ebp+10h]
  int v32; // [esp+2Ch] [ebp+10h]

  if ( *(_DWORD *)(this + 7872) && a3 == 2 )
    return;
  v21 = a2[22];
  v7 = a2[23];
  v23 = a2[24];
  v22 = v7;
  if ( a5 )
  {
    v8 = *a5 + v21;
    v21 = v8;
    v9 = a5[1] + v22;
    v22 = v9;
    v10 = a5[2] + v23;
    v23 = v10;
  }
  else
  {
    v9 = v22;
    v10 = v23;
    v8 = v21;
  }
  if ( *(float *)(this + 7880) > 0.0 )
  {
    v11 = v8 - *(float *)(this + 7884);
    if ( a6 * a6 > v11 * v11
                 + (v10 - *(float *)(this + 7892)) * (v10 - *(float *)(this + 7892))
                 + (v9 - *(float *)(this + 7888)) * (v9 - *(float *)(this + 7888)) )
      return;
  }
  *(float *)(this + 7884) = v8;
  *(float *)(this + 7888) = v9;
  *(float *)(this + 7892) = v10;
  *(_DWORD *)(this + 7872) = 0;
  if ( a3 == 1 )
  {
    v13 = 0;
    v12 = 1000.0;
    v14 = -1;
    v29 = -1;
    do
    {
      v15 = -1;
      v31 = -1;
      do
      {
        v16 = -1;
        v27 = -1;
        do
        {
          if ( v14 || v15 || v16 )
          {
            v24 = (double)v29 * v12;
            v25 = (double)v31 * v12;
            v26 = v12 * (double)v27;
            sub_10200100((_OWORD *)this, v13, &v21, &v24, a4, 0);
            v12 = 1000.0;
            v14 = v29;
            v13 = (__m128 *)((char *)v13 + 1);
          }
          v27 = ++v16;
        }
        while ( v16 <= 1 );
        v31 = ++v15;
      }
      while ( v15 <= 1 );
      v29 = ++v14;
    }
    while ( v14 <= 1 );
    *(_DWORD *)(this + 7876) = v13;
    *(_DWORD *)(this + 7872) = v13;
LABEL_24:
    v17 = 0;
    v18 = -1;
    v30 = -1;
    do
    {
      v19 = -1;
      v32 = -1;
      do
      {
        v20 = -1;
        v28 = -1;
        do
        {
          if ( v18 || v19 || v20 )
          {
            v24 = (double)v30 * v12;
            v25 = (double)v32 * v12;
            v26 = v12 * (double)v28;
            sub_10200100((_OWORD *)this, v17, &v21, &v24, a4, 1);
            v12 = 1000.0;
            v18 = v30;
            v17 = (__m128 *)((char *)v17 + 1);
          }
          v28 = ++v20;
        }
        while ( v20 <= 1 );
        v32 = ++v19;
      }
      while ( v19 <= 1 );
      v30 = ++v18;
    }
    while ( v18 <= 1 );
    *(_DWORD *)(this + 7876) = v17;
    *(_DWORD *)(this + 7872) = v17;
    return;
  }
  if ( a3 == 2 )
  {
    v24 = -1000.0;
    v25 = 0.0;
    v26 = 0.0;
    sub_10200100((_OWORD *)this, 0, &v21, &v24, a4, 0);
    *(_DWORD *)(this + 7872) = 1;
    *(_DWORD *)(this + 7876) = 1;
    return;
  }
  v12 = 1000.0;
  if ( a3 == 3 )
    goto LABEL_24;
}
