_DWORD *__usercall sub_10121F80@<eax>(_DWORD *result@<eax>, _DWORD *a2@<ecx>)
{
  int i; // ebx
  int v4; // esi
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  int v7; // eax

  for ( i = a2[7] - 1; i >= 0; --i )
  {
    result = (_DWORD *)a2[4];
    v4 = result[i];
    if ( *(_DWORD *)(v4 + 68) )
    {
      v5 = *(_DWORD *)(v4 + 52);
      if ( v5 != -1 )
      {
        result = (_DWORD *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(v4 + 52) & 0xFFF) + 4);
        v6 = v5 >> 12;
        if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v4 + 52) & 0xFFF) + 2) == v6 )
        {
          if ( *result )
          {
            v7 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v4 + 52) & 0xFFF) + 2) == v6 ? *result : 0;
            result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(v7 + 8) + 36))(v7 + 8);
            if ( (int)result >= 0 )
              result = (_DWORD *)sub_101209D0((int)result, *(_DWORD *)(v4 + 56), *(_BYTE **)(v4 + 44));
          }
        }
      }
      *(_DWORD *)(v4 + 68) = 0;
    }
  }
  a2[7] = 0;
  if ( (int)a2[6] >= 0 )
  {
    result = (_DWORD *)a2[4];
    if ( result )
    {
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, a2[4]);
      a2[4] = 0;
    }
    a2[5] = 0;
  }
  a2[8] = a2[4];
  a2[12] = 0;
  return result;
}
