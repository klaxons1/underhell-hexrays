int __thiscall sub_101B6020(_DWORD *this, int a2)
{
  int result; // eax

  result = sub_100422D0();
  if ( result )
  {
    sub_10236050(this + 14);
    result = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 84))(this, this[114], this[113]);
    if ( result )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
      return sub_10248C80("WeaponHighlight");
    }
  }
  return result;
}
