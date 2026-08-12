int __thiscall sub_10275FD0(_DWORD *this, int a2, char a3)
{
  int result; // eax
  int v5; // edx

  result = a2;
  if ( a2 >= 0 && a2 < this[54] && a2 <= this[60] )
  {
    v5 = 12 * a2 + this[53];
    if ( *(_DWORD *)(v5 + 4) != a2 || *(_DWORD *)(v5 + 8) == a2 )
    {
      sub_10275580(*(_DWORD *)(12 * a2 + this[53]), a3);
      return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
    }
  }
  return result;
}
