int __thiscall sub_10266760(int (__thiscall ***this)(_DWORD), int a2, int a3)
{
  int result; // eax

  result = (*this[371])(this + 371);
  if ( result )
    return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)result + 272))(result, a2, a3);
  return result;
}
