_BYTE *__usercall sub_101C1140@<eax>(
        _BYTE *result@<eax>,
        int a2@<ecx>,
        int a3,
        char *a4,
        char *a5,
        _BYTE *a6,
        char *a7)
{
  unsigned __int8 *v7; // edi
  int i; // esi
  char v9; // cl
  int v10; // [esp+10h] [ebp-28h]
  int v11; // [esp+14h] [ebp-24h]
  _DWORD v12[4]; // [esp+18h] [ebp-20h]
  _DWORD v13[4]; // [esp+28h] [ebp-10h]

  v12[0] = 3;
  v12[1] = 12;
  v12[2] = 48;
  v12[3] = 192;
  v13[0] = 0;
  v13[1] = 2;
  v13[2] = 4;
  v13[3] = 6;
  v11 = 3 * a2 - 12;
  v7 = (unsigned __int8 *)(a3 + 4);
  v10 = 4;
  do
  {
    for ( i = 0; i < 4; ++i )
    {
      switch ( ((unsigned int)*v7 & v12[i]) >> v13[i] )
      {
        case 0u:
          *result = a4[2];
          result[1] = a4[1];
          v9 = *a4;
          goto LABEL_8;
        case 1u:
          *result = a5[2];
          result[1] = a5[1];
          v9 = *a5;
          goto LABEL_8;
        case 2u:
          *result = a6[2];
          result[1] = a6[1];
          result[2] = *a6;
          break;
        case 3u:
          *result = a7[2];
          result[1] = a7[1];
          v9 = *a7;
LABEL_8:
          result[2] = v9;
          break;
        default:
          break;
      }
      result += 3;
    }
    result += v11;
    ++v7;
    --v10;
  }
  while ( v10 );
  return result;
}
