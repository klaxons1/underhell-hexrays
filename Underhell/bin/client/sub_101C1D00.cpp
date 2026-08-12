char *__usercall sub_101C1D00@<eax>(__int16 *a1@<eax>, unsigned __int8 *a2, int a3, int a4)
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
  __int16 v24; // bx
  __int16 v25; // cx

  v5 = *a2;
  word_1044F998[0] = v5;
  v6 = a2[1];
  word_1044F99A = v6;
  if ( v5 <= v6 )
  {
    word_1044F99C = (__int16)(v6 + 4 * v5) / 5;
    word_1044F99E = (__int16)(3 * v5 + 2 * v6) / 5;
    word_1044F9A0 = (__int16)(3 * v6 + 2 * v5) / 5;
    v7 = (int)((unsigned __int64)(1717986919LL * (v5 + 4 * v6)) >> 32) >> 1;
    word_1044F9A2 = v7 + (v7 >> 31);
    word_1044F9A4 = 0;
    word_1044F9A6 = 255;
  }
  else
  {
    word_1044F99C = (__int16)(v6 + 6 * v5) / 7;
    word_1044F99E = (__int16)(5 * v5 + 2 * v6) / 7;
    word_1044F9A0 = (__int16)(3 * v6 + 4 * v5) / 7;
    word_1044F9A2 = (__int16)(3 * v5 + 4 * v6) / 7;
    word_1044F9A4 = (__int16)(5 * v6 + 2 * v5) / 7;
    word_1044F9A6 = (v5 + 6 * v6) / 7;
  }
  v8 = *(_DWORD *)(a2 + 2) >> 6;
  v9 = (*(_DWORD *)(a2 + 2) >> 3) & 7;
  byte_1044F988 = *(_DWORD *)(a2 + 2) & 7;
  v10 = v8;
  v8 >>= 3;
  byte_1044F989 = v9;
  v11 = v8;
  v8 >>= 3;
  byte_1044F98A = v10 & 7;
  v12 = v8;
  v8 >>= 3;
  byte_1044F98B = v11 & 7;
  v13 = v8;
  v8 >>= 3;
  byte_1044F98C = v12 & 7;
  byte_1044F98D = v13 & 7;
  byte_1044F98F = (v8 >> 3) & 7;
  byte_1044F98E = v8 & 7;
  v14 = *(_DWORD *)(a2 + 5) >> 3;
  v15 = *(_DWORD *)(a2 + 5) >> 6;
  byte_1044F990 = *(_DWORD *)(a2 + 5) & 7;
  v16 = v15;
  v15 >>= 3;
  byte_1044F991 = v14 & 7;
  v17 = v15;
  v15 >>= 3;
  byte_1044F992 = v16 & 7;
  v18 = v15;
  v15 >>= 3;
  byte_1044F993 = v17 & 7;
  v19 = v15;
  v15 >>= 3;
  byte_1044F994 = v18 & 7;
  byte_1044F996 = v15 & 7;
  byte_1044F997 = (v15 >> 3) & 7;
  byte_1044F995 = v19 & 7;
  v20 = &byte_1044F989;
  v21 = (char *)&unk_1044F94F;
  do
  {
    *(v21 - 4) = word_1044F998[(unsigned __int8)*(v20 - 1)];
    *v21 = word_1044F998[(unsigned __int8)*v20];
    v21[4] = word_1044F998[(unsigned __int8)v20[1]];
    v21[8] = word_1044F998[(unsigned __int8)v20[2]];
    v21 += 16;
    v20 += 4;
  }
  while ( (int)v21 < (int)&byte_1044F98F );
  result = (char *)&unk_1044F94B;
  do
  {
    v23 = 4;
    do
    {
      if ( a4 )
      {
        v24 = *a1;
        if ( a4 == 1 )
        {
          v25 = v24 & 0xFC1F | (32 * (*result & 0x1F));
        }
        else if ( a4 == 2 )
        {
          v25 = v24 & 0xFFE0 | *result & 0x1F;
        }
        else
        {
          v25 = v24 & 0x7FFF | ((unsigned __int8)*result << 15);
        }
      }
      else
      {
        v25 = (*result & 0x1F) << 10;
      }
      *a1++ = v25;
      result += 4;
      --v23;
    }
    while ( v23 );
    a1 += a3 - 4;
  }
  while ( (int)result < (int)&byte_1044F98B );
  return result;
}
