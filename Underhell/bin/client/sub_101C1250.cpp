_BYTE *__usercall sub_101C1250@<eax>(
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
  char *v9; // ecx
  char v10; // cl
  int v11; // [esp+10h] [ebp-28h]
  int v12; // [esp+14h] [ebp-24h]
  _DWORD v13[4]; // [esp+18h] [ebp-20h]
  _DWORD v14[4]; // [esp+28h] [ebp-10h]

  v13[0] = 3;
  v13[1] = 12;
  v13[2] = 48;
  v13[3] = 192;
  v14[0] = 0;
  v14[1] = 2;
  v14[2] = 4;
  v14[3] = 6;
  v12 = 3 * a2 - 12;
  v7 = (unsigned __int8 *)(a3 + 4);
  v11 = 4;
  do
  {
    for ( i = 0; i < 4; ++i )
    {
      switch ( ((unsigned int)*v7 & v13[i]) >> v14[i] )
      {
        case 0u:
          v9 = a4;
          goto LABEL_5;
        case 1u:
          v9 = a5;
LABEL_5:
          result[2] = v9[2];
          result[1] = v9[1];
          v10 = *v9;
          goto LABEL_9;
        case 2u:
          result[2] = a6[2];
          result[1] = a6[1];
          *result = *a6;
          break;
        case 3u:
          result[2] = a7[2];
          result[1] = a7[1];
          v10 = *a7;
LABEL_9:
          *result = v10;
          break;
        default:
          break;
      }
      result += 3;
    }
    result += v12;
    ++v7;
    --v11;
  }
  while ( v11 );
  return result;
}
