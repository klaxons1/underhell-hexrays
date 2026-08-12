int __thiscall sub_102740F0(int this, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *v4; // esi
  int i; // eax
  int v6; // edx

  v2 = *(_DWORD *)(this + 232);
  result = 0;
  if ( v2 > 0 )
  {
    v4 = *(_DWORD **)(this + 220);
    do
    {
      if ( *v4 == a2 )
        break;
      ++result;
      ++v4;
    }
    while ( result < v2 );
  }
  if ( result != v2 )
  {
    if ( result )
    {
      for ( i = *(_DWORD *)(*(_DWORD *)(this + 220) + 4 * result - 4);
            *(_BYTE *)(i + 240);
            i = *(_DWORD *)(*(_DWORD *)(i + 220) + 4 * v6 - 4) )
      {
        v6 = *(_DWORD *)(i + 232);
        if ( v6 <= 0 )
          break;
      }
      return (*(int (__thiscall **)(_DWORD, _DWORD, int, int, int))(**(_DWORD **)(this + 268) + 820))(
               *(_DWORD *)(this + 268),
               *(_DWORD *)(i + 208),
               1,
               1,
               1);
    }
    else
    {
      return (*(int (__thiscall **)(_DWORD, _DWORD, int, int, int))(**(_DWORD **)(this + 268) + 820))(
               *(_DWORD *)(this + 268),
               *(_DWORD *)(this + 208),
               1,
               1,
               1);
    }
  }
  return result;
}
