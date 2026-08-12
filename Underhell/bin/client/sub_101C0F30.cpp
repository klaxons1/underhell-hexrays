_BYTE *__usercall sub_101C0F30@<eax>(
        _BYTE *result@<eax>,
        int a2@<edx>,
        _BYTE *a3@<edi>,
        int a4,
        _BYTE *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  int i; // esi
  char v8; // cl
  unsigned __int8 *v9; // [esp+Ch] [ebp-2Ch]
  int v10; // [esp+10h] [ebp-28h]
  _DWORD v11[4]; // [esp+18h] [ebp-20h]
  _DWORD v12[4]; // [esp+28h] [ebp-10h]

  v11[0] = 3;
  v11[1] = 12;
  v11[2] = 48;
  v11[3] = 192;
  v12[0] = 0;
  v12[1] = 2;
  v12[2] = 4;
  v12[3] = 6;
  v9 = (unsigned __int8 *)(a4 + 4);
  v10 = 4;
  do
  {
    for ( i = 0; i < 4; ++i )
    {
      switch ( ((unsigned int)*v9 & v11[i]) >> v12[i] )
      {
        case 0u:
          *result = a5[2];
          result[1] = a5[1];
          result[2] = *a5;
          v8 = a5[3];
          goto LABEL_8;
        case 1u:
          *result = a6[2];
          result[1] = a6[1];
          result[2] = *a6;
          v8 = a6[3];
          goto LABEL_8;
        case 2u:
          *result = a7[2];
          result[1] = a7[1];
          result[2] = *a7;
          v8 = a7[3];
          goto LABEL_8;
        case 3u:
          *result = a3[2];
          result[1] = a3[1];
          result[2] = *a3;
          v8 = a3[3];
LABEL_8:
          result[3] = v8;
          break;
        default:
          break;
      }
      result += 4;
    }
    result += 4 * a2 - 16;
    ++v9;
    --v10;
  }
  while ( v10 );
  return result;
}
