int __thiscall sub_102644E0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // esi

  result = this[75];
  if ( result == -1 )
    return (*(int (__thiscall **)(_DWORD *))(*this + 916))(this);
  v3 = this[72];
  while ( *(_DWORD *)(*(_DWORD *)(v3 + 12 * result) + 4) != a2 )
  {
    result = *(_DWORD *)(v3 + 12 * result + 8);
    if ( result == -1 )
      return (*(int (__thiscall **)(_DWORD *))(*this + 916))(this);
  }
  return result;
}
