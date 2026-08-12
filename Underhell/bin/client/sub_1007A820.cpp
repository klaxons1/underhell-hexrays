int __thiscall sub_1007A820(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int result; // eax
  int v4; // eax
  _DWORD *v5; // esi

  if ( !a2 )
  {
    v2 = (_DWORD *)this[16385];
    if ( v2 )
    {
      while ( 1 )
      {
        if ( *v2 )
        {
          result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v2 + 28))(*v2);
          if ( result )
            break;
        }
        v2 = (_DWORD *)v2[3];
        if ( !v2 )
          return 0;
      }
      return result;
    }
    return 0;
  }
  v4 = (int)&this[4 * (*(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) & 0xFFF) + 1];
  if ( !v4 )
    return 0;
  v5 = *(_DWORD **)(v4 + 12);
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    if ( *v5 )
    {
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v5 + 28))(*v5);
      if ( result )
        break;
    }
    v5 = (_DWORD *)v5[3];
    if ( !v5 )
      return 0;
  }
  return result;
}
