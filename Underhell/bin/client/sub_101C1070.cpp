_DWORD *__usercall sub_101C1070@<eax>(
        _DWORD *result@<eax>,
        int a2@<ecx>,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v7; // ebx
  unsigned __int8 *v8; // edi
  int i; // esi
  _DWORD *v10; // edx
  _DWORD v11[4]; // [esp+10h] [ebp-20h]
  _DWORD v12[4]; // [esp+20h] [ebp-10h]

  v7 = 4;
  v11[0] = 3;
  v11[1] = 12;
  v11[2] = 48;
  v11[3] = 192;
  v12[0] = 0;
  v12[1] = 2;
  v12[2] = 4;
  v12[3] = 6;
  v8 = (unsigned __int8 *)(a2 + 4);
  do
  {
    for ( i = 0; i < 4; ++i )
    {
      switch ( ((unsigned int)*v8 & v11[i]) >> v12[i] )
      {
        case 0u:
          v10 = a4;
          goto LABEL_8;
        case 1u:
          v10 = a5;
          goto LABEL_8;
        case 2u:
          v10 = a6;
          goto LABEL_8;
        case 3u:
          v10 = a7;
LABEL_8:
          *result = *v10;
          break;
        default:
          break;
      }
      ++result;
    }
    ++v8;
    result += a3 - 4;
    --v7;
  }
  while ( v7 );
  return result;
}
