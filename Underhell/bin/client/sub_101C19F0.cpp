char *__usercall sub_101C19F0@<eax>(char *a1@<eax>, unsigned __int8 *a2, int a3, int a4)
{
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // dx
  unsigned int v7; // edx
  unsigned int v8; // eax
  char v9; // cl
  char v10; // dl
  char v11; // cl
  char v12; // dl
  char v13; // cl
  char v14; // dl
  unsigned int v15; // eax
  char v16; // cl
  char v17; // dl
  char v18; // cl
  char v19; // dl
  char *v20; // ecx
  char *v21; // eax
  char *result; // eax
  int v23; // edx
  char v24; // cl

  v5 = *a2;
  word_1044F938[0] = v5;
  v6 = a2[1];
  word_1044F93A = v6;
  if ( v5 <= v6 )
  {
    word_1044F93C = (__int16)(v6 + 4 * v5) / 5;
    word_1044F93E = (__int16)(3 * v5 + 2 * v6) / 5;
    word_1044F940 = (__int16)(3 * v6 + 2 * v5) / 5;
    v7 = (int)((unsigned __int64)(1717986919LL * (v5 + 4 * v6)) >> 32) >> 1;
    word_1044F942 = v7 + (v7 >> 31);
    word_1044F944 = 0;
    word_1044F946 = 255;
  }
  else
  {
    word_1044F93C = (__int16)(v6 + 6 * v5) / 7;
    word_1044F93E = (__int16)(5 * v5 + 2 * v6) / 7;
    word_1044F940 = (__int16)(3 * v6 + 4 * v5) / 7;
    word_1044F942 = (__int16)(3 * v5 + 4 * v6) / 7;
    word_1044F944 = (__int16)(5 * v6 + 2 * v5) / 7;
    word_1044F946 = (v5 + 6 * v6) / 7;
  }
  v8 = *(_DWORD *)(a2 + 2) >> 6;
  v9 = (*(_DWORD *)(a2 + 2) >> 3) & 7;
  byte_1044F928 = *(_DWORD *)(a2 + 2) & 7;
  v10 = v8;
  v8 >>= 3;
  byte_1044F929 = v9;
  v11 = v8;
  v8 >>= 3;
  byte_1044F92A = v10 & 7;
  v12 = v8;
  v8 >>= 3;
  byte_1044F92B = v11 & 7;
  v13 = v8;
  v8 >>= 3;
  byte_1044F92C = v12 & 7;
  byte_1044F92D = v13 & 7;
  byte_1044F92F = (v8 >> 3) & 7;
  byte_1044F92E = v8 & 7;
  v14 = *(_DWORD *)(a2 + 5) >> 3;
  v15 = *(_DWORD *)(a2 + 5) >> 6;
  byte_1044F930 = *(_DWORD *)(a2 + 5) & 7;
  v16 = v15;
  v15 >>= 3;
  byte_1044F931 = v14 & 7;
  v17 = v15;
  v15 >>= 3;
  byte_1044F932 = v16 & 7;
  v18 = v15;
  v15 >>= 3;
  byte_1044F933 = v17 & 7;
  v19 = v15;
  v15 >>= 3;
  byte_1044F934 = v18 & 7;
  byte_1044F936 = v15 & 7;
  byte_1044F937 = (v15 >> 3) & 7;
  byte_1044F935 = v19 & 7;
  v20 = &byte_1044F929;
  v21 = (char *)&unk_1044F8EF;
  do
  {
    *(v21 - 4) = word_1044F938[(unsigned __int8)*(v20 - 1)];
    *v21 = word_1044F938[(unsigned __int8)*v20];
    v21[4] = word_1044F938[(unsigned __int8)v20[1]];
    v21[8] = word_1044F938[(unsigned __int8)v20[2]];
    v21 += 16;
    v20 += 4;
  }
  while ( (int)v21 < (int)&byte_1044F92F );
  result = (char *)&unk_1044F8EB;
  do
  {
    v23 = 4;
    do
    {
      if ( a4 )
      {
        if ( a4 == 1 )
        {
          a1[1] = *result;
        }
        else
        {
          v24 = *result;
          if ( a4 == 2 )
            a1[2] = v24;
          else
            a1[3] = v24;
        }
      }
      else
      {
        *a1 = *result;
        a1[1] = 0;
        a1[2] = 0;
        a1[3] = 0;
      }
      a1 += 4;
      result += 4;
      --v23;
    }
    while ( v23 );
    a1 += 4 * a3 - 16;
  }
  while ( (int)result < (int)&byte_1044F92B );
  return result;
}
