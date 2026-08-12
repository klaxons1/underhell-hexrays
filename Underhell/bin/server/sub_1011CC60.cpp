unsigned int __cdecl sub_1011CC60(
        float *a1,
        int a2,
        float *a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10)
{
  float *v10; // esi
  double v11; // st7
  float *v12; // ebx
  float *v13; // edi
  double v14; // st5
  double v15; // st6
  double v16; // rt0
  double v17; // st5
  double v18; // st7
  long double v19; // st7
  float *v20; // eax
  double v21; // st7
  double v22; // st6
  unsigned int result; // eax
  int v24[3]; // [esp+10h] [ebp-34h] BYREF
  int v25; // [esp+1Ch] [ebp-28h] BYREF
  float v26; // [esp+20h] [ebp-24h]
  float v27; // [esp+24h] [ebp-20h]
  int v28; // [esp+28h] [ebp-1Ch] BYREF
  float v29; // [esp+2Ch] [ebp-18h]
  float v30; // [esp+30h] [ebp-14h]
  float v31; // [esp+34h] [ebp-10h]
  float *v32; // [esp+38h] [ebp-Ch]
  float **v33; // [esp+3Ch] [ebp-8h]
  float v34; // [esp+40h] [ebp-4h] BYREF

  v10 = (float *)a2;
  v11 = *(float *)a2;
  v12 = a3;
  v13 = a1;
  v14 = *(float *)(a2 + 4);
  a2 = 1;
  v15 = a4 * v10[2];
  v16 = v14 * a4;
  *(float *)&v25 = v11 * a4 + *a1;
  v17 = a1[1];
  v28 = v25;
  v32 = &v34;
  v26 = v16 + v17;
  v29 = v26;
  v18 = v15 + a1[2];
  v33 = &a1;
  v27 = v18;
  v30 = v27;
  do
  {
    v24[0] = v28;
    *(float *)&v24[1] = v29;
    *(float *)&v24[2] = v30;
    v31 = (double)a2 * 0.39269909;
    v19 = sin(v31);
    v20 = (float *)v33;
    *v32 = cos(v31);
    *v20 = v19;
    v21 = *(float *)&a1 * v12[1] * a4 + v10[1] * v34 * a4 + v13[1];
    v22 = *(float *)&a1 * v12[2] * a4 + a4 * (v34 * v10[2]) + v13[2];
    *(float *)&v28 = *(float *)&a1 * *v12 * a4 + *v10 * v34 * a4 + *v13;
    v29 = v21;
    v30 = v22;
    sub_1011BC50((float *)v24, (float *)&v28, a5, a6, a7, a9, a10);
    if ( a8 )
    {
      if ( a2 > 1 )
        (*(void (__thiscall **)(int, int *, int *, int *, int, int, int, int, int, _DWORD))(*(_DWORD *)dword_106B3200 + 8))(
          dword_106B3200,
          &v25,
          v24,
          &v28,
          a5,
          a6,
          a7,
          a8,
          a9,
          LODWORD(a10));
    }
    result = a2 + 1;
    a2 = result;
  }
  while ( result <= 0x10 );
  return result;
}
