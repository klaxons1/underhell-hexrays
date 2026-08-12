unsigned int __usercall sub_101C1540@<eax>(
        int a1@<eax>,
        _WORD *a2@<ecx>,
        int a3,
        _BYTE *a4,
        _BYTE *a5,
        _BYTE *a6,
        _BYTE *a7)
{
  int v8; // ebp
  unsigned __int8 *v9; // ebx
  int i; // edi
  unsigned int result; // eax
  _BYTE *v12; // eax
  int v13; // [esp+10h] [ebp-24h]
  _DWORD v14[4]; // [esp+14h] [ebp-20h]
  _DWORD v15[4]; // [esp+24h] [ebp-10h]

  v8 = 4;
  v14[0] = 3;
  v14[1] = 12;
  v14[2] = 48;
  v14[3] = 192;
  v15[0] = 0;
  v15[1] = 2;
  v15[2] = 4;
  v15[3] = 6;
  v13 = 2 * a1 - 8;
  v9 = (unsigned __int8 *)(a3 + 4);
  do
  {
    for ( i = 0; i < 4; ++i )
    {
      result = ((unsigned int)*v9 & v14[i]) >> v15[i];
      switch ( result )
      {
        case 0u:
          v12 = a4;
          goto LABEL_8;
        case 1u:
          result = (unsigned int)sub_101BF490(a2, a5);
          break;
        case 2u:
          result = (unsigned int)sub_101BF490(a2, a6);
          break;
        case 3u:
          v12 = a7;
LABEL_8:
          result = (unsigned int)sub_101BF490(a2, v12);
          break;
        default:
          break;
      }
      ++a2;
    }
    a2 = (_WORD *)((char *)a2 + v13);
    ++v9;
    --v8;
  }
  while ( v8 );
  return result;
}
