void __cdecl sub_101DB700(
        int a1,
        unsigned __int16 a2,
        _BYTE *a3,
        int a4,
        char a5,
        float *a6,
        char a7,
        float a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int8 a11)
{
  char v11; // bl
  char v12; // di
  unsigned int v13; // edx
  int v14; // ebp
  int v15; // esi
  int v16; // ebx
  int v17; // edi
  unsigned int v18; // esi
  int v19; // ecx
  int v20; // edx
  double v21; // st7
  int v22; // ecx
  double v23; // st7
  int v24; // edx
  double v25; // st6
  float *v26; // edx
  double v27; // st5
  float *v28; // ecx
  int v29; // ebx
  double v30; // rt0
  double v31; // st5
  double v32; // st6
  double v33; // rt1
  double v34; // rt2
  int v35; // [esp+10h] [ebp-42Ch]
  int v36; // [esp+10h] [ebp-42Ch]
  int v37; // [esp+10h] [ebp-42Ch]
  float v38; // [esp+10h] [ebp-42Ch]
  float v39; // [esp+14h] [ebp-428h]
  char v40; // [esp+18h] [ebp-424h]
  float v41[8]; // [esp+1Ch] [ebp-420h] BYREF
  char v42[4]; // [esp+3Ch] [ebp-400h] BYREF
  _BYTE v43[4]; // [esp+40h] [ebp-3FCh] BYREF
  _BYTE v44[1016]; // [esp+44h] [ebp-3F8h] BYREF

  v11 = byte_103EDE68[a10];
  v12 = byte_103EDE68[a9];
  v40 = byte_103EDE68[a11];
  v13 = ((unsigned __int8)(v40 & *a3) >> (8 - a11))
      | ((unsigned __int8)(v12 & a3[4]) << (a11 + a10 + a9 - 8))
      | ((unsigned __int8)(v11 & a3[2]) << (a11 + a10 - 8));
  v14 = 1;
  v15 = ((unsigned __int8)(v11 & a3[3]) << (a11 + a10 - 8)) | ((unsigned __int8)(v40 & a3[1]) >> (8 - a11));
  v16 = (unsigned __int8)(v12 & a3[5]) << (a11 + a10 + a9 - 8);
  v17 = 0;
  v18 = v16 | v15;
  if ( (a5 & 1) == 0 && v13 <= v18 || (a5 & 1) != 0 && v13 > v18 )
  {
    v17 = 1;
    v14 = 0;
  }
  v19 = (unsigned __int8)a3[v17 + 2];
  v35 = (unsigned __int8)a3[v14 + 4];
  v20 = (unsigned __int8)a3[v14 + 2];
  v41[4] = (float)(unsigned __int8)a3[v17 + 4];
  v21 = (double)v35;
  v36 = v19;
  v22 = (unsigned __int8)a3[v17];
  v41[5] = v21;
  v23 = (double)v36;
  v37 = v20;
  v24 = (unsigned __int8)a3[v14];
  v41[2] = v23;
  v41[3] = (float)v37;
  v41[0] = (float)v22;
  v41[1] = (float)v24;
  if ( a2 )
  {
    v25 = 1.0;
    v26 = (float *)v42;
    v27 = 0.0;
    v28 = (float *)(a1 + 4);
    v29 = a2;
    do
    {
      *(float *)&v43[(_DWORD)v28 - a1] = v28[1];
      *(float *)&v42[(_DWORD)v28 - a1] = *v28;
      *v26 = *(v28 - 1);
      if ( a7 )
      {
        v38 = a8 * 255.0;
        if ( v28[2] < (double)v38 )
        {
          v39 = v27;
          v33 = v27;
          v31 = v25;
          v32 = v33;
        }
        else
        {
          v30 = v27;
          v31 = v25;
          v32 = v30;
          v39 = v31;
        }
        *(float *)&v44[(_DWORD)v28 - a1] = v39;
        v34 = v31;
        v27 = v32;
        v25 = v34;
      }
      v26 += 4;
      v28 += 4;
      --v29;
    }
    while ( v29 );
  }
  sub_101DB290(a11, a10, a4, (int)v42, (int)v41, a2, a5, a6, a7, a9);
}
