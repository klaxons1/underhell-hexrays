float *__cdecl sub_10101270(int a1, float a2, float *a3, int a4, int a5, float *a6)
{
  unsigned __int8 v6; // al
  unsigned __int16 *v7; // esi
  double v8; // st7
  float *result; // eax
  int v10; // esi
  float *v11; // edi
  int v12; // ebx
  int v13; // eax
  double v14; // st7
  __int16 v15; // ax
  int v16; // eax
  int v17; // eax
  double v18; // st7
  __int16 v19; // ax
  int v20; // eax
  float v21; // [esp+0h] [ebp-34h]
  float v22; // [esp+4h] [ebp-30h]
  float v23; // [esp+18h] [ebp-1Ch]
  float v24; // [esp+1Ch] [ebp-18h]
  int v25; // [esp+24h] [ebp-10h] BYREF
  int v26; // [esp+28h] [ebp-Ch] BYREF
  float v27; // [esp+2Ch] [ebp-8h]
  int i; // [esp+30h] [ebp-4h]

  v6 = *(_BYTE *)(a5 + 1);
  if ( (v6 & 1) != 0 )
  {
    v7 = (unsigned __int16 *)(a5 + 6 * ((v6 >> 1) & 1) + 8 * ((v6 >> 5) & 1) + 4);
    v23 = sub_10065370(*v7);
    v24 = sub_10065370(v7[1]);
    v8 = sub_10065370(v7[2]);
    result = a6;
    *a6 = v23;
    a6[1] = v24;
    a6[2] = v8;
  }
  else if ( (v6 & 4) != 0 )
  {
    v10 = 0;
    v11 = a6;
    v12 = a5 + 6 * ((v6 >> 3) & 1) + 4;
    if ( a2 <= 0.001 )
    {
      v17 = a4 - (_DWORD)a6;
      for ( i = a4 - (_DWORD)a6; ; v17 = i )
      {
        v18 = *(float *)((char *)v11 + v17);
        v19 = *(_WORD *)(v12 + 2 * v10);
        v20 = v19 <= 0 ? 0 : v12 + v19;
        v22 = v18;
        result = (float *)sub_100FE2B0(a1, v20, v22, v11);
        ++v10;
        ++v11;
        if ( v10 >= 3 )
          break;
      }
    }
    else
    {
      v13 = a4 - (_DWORD)a6;
      i = a4 - (_DWORD)a6;
      v27 = 1.0 - a2;
      while ( 1 )
      {
        v14 = *(float *)((char *)v11 + v13);
        v15 = *(_WORD *)(v12 + 2 * v10);
        v16 = v15 <= 0 ? 0 : v12 + v15;
        v21 = v14;
        result = (float *)sub_100FE1A0(a1, v16, v21, (float *)&v26, (float *)&v25);
        ++v10;
        *v11++ = v27 * *(float *)&v26 + *(float *)&v25 * a2;
        if ( v10 >= 3 )
          break;
        v13 = i;
      }
    }
    if ( (*(_BYTE *)(a5 + 1) & 0x10) == 0 )
    {
      result = a6;
      *a6 = *a3 + *a6;
      a6[1] = a3[1] + a6[1];
      a6[2] = a3[2] + a6[2];
    }
  }
  else if ( (v6 & 0x10) != 0 )
  {
    result = a6;
    *a6 = 0.0;
    a6[1] = 0.0;
    a6[2] = 0.0;
  }
  else
  {
    result = a3;
    *a6 = *a3;
    a6[1] = a3[1];
    a6[2] = a3[2];
  }
  return result;
}
