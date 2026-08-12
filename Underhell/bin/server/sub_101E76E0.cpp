char __thiscall sub_101E76E0(_DWORD *this, int a2)
{
  int v4; // edi
  _DWORD *i; // ebx
  int *v6; // ecx
  int v7; // esi

  if ( a2 < 0 )
    return 0;
  if ( sub_100CF5D0(this, a2) )
    return 1;
  v4 = 0;
  for ( i = this + 477; ; ++i )
  {
    if ( *i != -1 )
    {
      v6 = &off_1061BE18[4 * (*i & 0xFFF) + 1];
      if ( off_1061BE18[4 * (*i & 0xFFF) + 2] == *i >> 12 )
      {
        v7 = *v6;
        if ( *v6 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 1272))(*v6)
            && (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1284))(v7) == a2
            && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 972))(v7)
            || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 1276))(v7)
            && (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 1288))(v7) == a2
            && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 976))(v7) )
          {
            break;
          }
        }
      }
    }
    if ( ++v4 >= 48 )
      return 0;
  }
  return 1;
}
