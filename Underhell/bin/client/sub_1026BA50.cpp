int __thiscall sub_1026BA50(_DWORD *this)
{
  int result; // eax
  int v3; // edx

  result = this[89];
  if ( result >= 0 && result < this[59] && result <= this[65] )
  {
    v3 = this[58];
    if ( *(_DWORD *)(v3 + 12 * result + 4) != result || *(_DWORD *)(v3 + 12 * result + 8) == result )
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 12 * result) + 1056))(*(_DWORD *)(v3 + 12 * result));
  }
  this[89] = -1;
  return result;
}
