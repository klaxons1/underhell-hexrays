int __cdecl sub_100F7F30(int a1, _DWORD *a2)
{
  _DWORD **v2; // eax
  int v3; // ecx
  _DWORD *v4; // edx

  if ( *a2 != -1 )
  {
    v2 = (_DWORD **)((char *)off_103DCD74 + 16 * (*a2 & 0xFFF) + 4);
    v3 = *a2 >> 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (*a2 & 0xFFF) + 2) == v3 )
    {
      v4 = *v2;
      if ( *v2 )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (*a2 & 0xFFF) + 2) == v3 && v4 && a1 )
          sub_1000DEC0(v4, 1);
      }
    }
  }
  *(_DWORD *)(a2[1] + 8) = a2[2];
  *(_DWORD *)(a2[2] + 4) = a2[1];
  --dword_10435EFC;
  return sub_1022FD10(a2);
}
