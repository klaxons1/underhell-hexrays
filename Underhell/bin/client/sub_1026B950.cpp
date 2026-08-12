int __thiscall sub_1026B950(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 >= 0 && a2 < this[75] )
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 920))(this, *(_DWORD *)(this[72] + 4 * a2));
  return result;
}
