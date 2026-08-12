int __thiscall sub_100B6440(_DWORD *this, int a2, float *a3, float *a4, float *a5, float *a6)
{
  unsigned int v6; // eax
  int *v7; // ecx
  int v8; // eax
  int v9; // esi
  int result; // eax
  int v11; // edi
  const char *v12; // eax
  float *v13; // edi
  double v14; // st4
  double v15; // st3
  double v16; // st6
  double v17; // st2
  double v18; // st4
  int v19; // eax
  double v20; // st7
  double v21; // st6
  double v22; // st5
  float v23; // [esp+8h] [ebp-3Ch] BYREF
  float v24; // [esp+Ch] [ebp-38h]
  float v25; // [esp+10h] [ebp-34h]
  float v26; // [esp+14h] [ebp-30h] BYREF
  float v27; // [esp+18h] [ebp-2Ch]
  float v28; // [esp+1Ch] [ebp-28h]
  float v29; // [esp+20h] [ebp-24h] BYREF
  float v30; // [esp+24h] [ebp-20h]
  float v31; // [esp+28h] [ebp-1Ch]
  _DWORD *v32; // [esp+2Ch] [ebp-18h]
  float v33; // [esp+30h] [ebp-14h]
  float v34; // [esp+34h] [ebp-10h]
  int v35; // [esp+38h] [ebp-Ch]
  int v36; // [esp+3Ch] [ebp-8h]
  int v37; // [esp+40h] [ebp-4h]

  v32 = this;
  if ( !a2 )
  {
    v6 = this[912];
    if ( v6 == -1 || (v7 = &off_1061BE18[4 * (this[912] & 0xFFF) + 1], v7[1] != v6 >> 12) )
      v8 = 0;
    else
      v8 = *v7;
    a2 = v8;
  }
  v9 = a2;
  result = sub_101ACC70(a2, 1);
  if ( result )
  {
    v34 = 1000000000.0;
    v35 = 0;
    v33 = 1000000000.0;
    v36 = 0;
    while ( 1 )
    {
      sub_101ACB10();
      if ( sub_101ACC70(v9, 1) )
      {
        do
        {
          if ( (unsigned __int8)sub_101ACB50(v9) )
            break;
          sub_101ACB40(v9);
          if ( v36 )
          {
            v37 = sub_101ACC90(v9);
            v11 = v37;
          }
          else
          {
            v11 = sub_101ACCC0(v9);
            v37 = v11;
          }
          if ( *(_DWORD *)(v9 + 808) )
          {
            v12 = (const char *)v32[65];
            if ( !v12 )
              v12 = String;
            Warning("%s: Alternative paths in path_track not allowed when using the leading behavior!\n", v12);
          }
          if ( !sub_101ACC70(v11, 1) )
            break;
          if ( (*(_DWORD *)(v11 + 252) & 0x800) != 0 )
            sub_100DAE60(v11);
          if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
            sub_100DAE60(v9);
          v13 = (float *)(v11 + 580);
          sub_10424670(a3, v9 + 580, v13, &v23, 0);
          v14 = v24 - a3[1];
          v15 = v23 - *a3;
          v16 = v15 * v15 + v14 * v14;
          if ( v34 >= v16 )
          {
            v17 = v25 - a3[2];
            v18 = v17 * v17 + v16;
            if ( v16 != v34 || v33 > v18 )
            {
              if ( v36 )
                v35 = v37;
              else
                v35 = v9;
              v19 = *(_DWORD *)(v9 + 252);
              v34 = v16;
              v33 = v18;
              v26 = v23;
              v27 = v24;
              v28 = v25;
              if ( (v19 & 0x800) != 0 )
                sub_100DAE60(v9);
              if ( (*(_DWORD *)(v37 + 252) & 0x800) != 0 )
                sub_100DAE60(v37);
              v20 = *v13 - *(float *)(v9 + 580);
              v29 = v20;
              v21 = v13[1] - *(float *)(v9 + 584);
              v30 = v21;
              v22 = v13[2] - *(float *)(v9 + 588);
              v31 = v22;
              if ( !v36 )
              {
                v29 = v20 * -1.0;
                v30 = v21 * -1.0;
                v31 = -1.0 * v22;
              }
            }
          }
          v9 = v37;
        }
        while ( sub_101ACC70(v37, 1) );
      }
      sub_101ACB30();
      if ( ++v36 >= 2 )
        break;
      v9 = a2;
    }
    off_10689714();
    *a6 = sub_100B50E0(&v26, &v29, a3);
    *a4 = v26;
    a4[1] = v27;
    a4[2] = v28;
    *a5 = v29;
    a5[1] = v30;
    a5[2] = v31;
    return v35;
  }
  return result;
}
