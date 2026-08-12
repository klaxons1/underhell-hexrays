_WORD *__usercall sub_101C1350@<eax>(
        _WORD *result@<eax>,
        int a2@<edx>,
        unsigned __int8 *a3@<edi>,
        unsigned __int8 *a4@<esi>,
        int a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7)
{
  __int16 v7; // cx
  __int16 v8; // dx
  unsigned __int8 v9; // cl
  __int16 v10; // cx
  __int16 v11; // cx
  __int16 v12; // cx
  int i; // [esp+8h] [ebp-30h]
  unsigned __int8 *v14; // [esp+Ch] [ebp-2Ch]
  int v15; // [esp+10h] [ebp-28h]
  int v16; // [esp+14h] [ebp-24h]
  _DWORD v17[4]; // [esp+18h] [ebp-20h]
  _DWORD v18[4]; // [esp+28h] [ebp-10h]

  v16 = 2 * a2 - 8;
  v17[0] = 3;
  v17[1] = 12;
  v17[2] = 48;
  v17[3] = 192;
  v18[0] = 0;
  v18[1] = 2;
  v18[2] = 4;
  v18[3] = 6;
  v14 = (unsigned __int8 *)(a5 + 4);
  v15 = 4;
  do
  {
    for ( i = 0; i < 4; ++i )
    {
      switch ( ((unsigned int)*v14 & v17[i]) >> v18[i] )
      {
        case 0u:
          v7 = *result & 0x7FF | (a6[2] >> 3 << 11);
          *result = v7;
          v8 = v7 & 0xF81F | (32 * (a6[1] >> 2));
          *result = v8;
          v9 = *a6;
          goto LABEL_8;
        case 1u:
          v10 = *result & 0x7FF | (a7[2] >> 3 << 11);
          *result = v10;
          v8 = v10 & 0xF81F | (32 * (a7[1] >> 2));
          *result = v8;
          v9 = *a7;
          goto LABEL_8;
        case 2u:
          v11 = *result & 0x7FF | (a3[2] >> 3 << 11);
          *result = v11;
          v8 = v11 & 0xF81F | (32 * (a3[1] >> 2));
          *result = v8;
          v9 = *a3;
          goto LABEL_8;
        case 3u:
          v12 = *result & 0x7FF | (a4[2] >> 3 << 11);
          *result = v12;
          v8 = v12 & 0xF81F | (32 * (a4[1] >> 2));
          *result = v8;
          v9 = *a4;
LABEL_8:
          *result = v8 & 0xFFE0 | (v9 >> 3);
          break;
        default:
          break;
      }
      ++result;
    }
    result = (_WORD *)((char *)result + v16);
    ++v14;
    --v15;
  }
  while ( v15 );
  return result;
}
