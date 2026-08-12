int __thiscall sub_1026E490(_DWORD *this, int a2)
{
  int result; // eax

  sub_1025BC50(this, a2);
  result = this[97];
  if ( result )
    return (*(int (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 836))(this, 1, result, 0);
  return result;
}
