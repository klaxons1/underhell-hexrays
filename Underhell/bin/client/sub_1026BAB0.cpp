int __thiscall sub_1026BAB0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // eax

  result = this[89];
  if ( a2 != result )
  {
    if ( result >= 0 && result < this[59] && result <= this[65] )
    {
      v4 = this[58];
      if ( *(_DWORD *)(v4 + 12 * result + 4) != result || *(_DWORD *)(v4 + 12 * result + 8) == result )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 12 * result) + 1056))(*(_DWORD *)(v4 + 12 * result));
    }
    v5 = (_DWORD *)sub_10229D00(32);
    if ( v5 )
      v6 = sub_1022B1A0(v5, (int)"MenuItemHighlight", "itemID", a2);
    else
      v6 = 0;
    result = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*this + 180))(this, v6);
    this[89] = a2;
  }
  return result;
}
