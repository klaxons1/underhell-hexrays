int __cdecl sub_1021CF10(_DWORD *a1, int a2)
{
  _DWORD *v2; // esi
  int v3; // edx
  int v4; // ecx
  _DWORD *v5; // eax

  v2 = a1;
  if ( !a1 )
    return 0;
  while ( 1 )
  {
    v3 = v2[1];
    v4 = 0;
    if ( v3 > 0 )
      break;
LABEL_7:
    v2 = (_DWORD *)v2[3];
    if ( !v2 )
      return 0;
  }
  v5 = (_DWORD *)(*v2 + 28);
  while ( (*((_BYTE *)v5 - 10) & 0x20) == 0 || *v5 != a2 )
  {
    ++v4;
    v5 += 13;
    if ( v4 >= v3 )
      goto LABEL_7;
  }
  return *(_DWORD *)(52 * v4 + *v2 + 4);
}
