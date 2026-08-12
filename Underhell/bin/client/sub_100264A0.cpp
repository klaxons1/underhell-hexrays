int __thiscall sub_100264A0(int this, int a2, int a3)
{
  int i; // esi

  if ( !*(_DWORD *)(this + 1192) || *(_BYTE *)(this + 84) != 23 )
    return sub_10035880(a2, a3);
  for ( i = 0; i < (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1192) + 16))(*(_DWORD *)(this + 1192)); ++i )
  {
    if ( i >= a3 )
      break;
    *(_DWORD *)(a2 + 4 * i) = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1192) + 20))(
                                *(_DWORD *)(this + 1192),
                                i);
  }
  return i;
}
