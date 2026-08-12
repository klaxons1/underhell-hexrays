int __thiscall sub_1024AA90(_DWORD *this, int a2)
{
  int result; // eax

  result = this[65];
  if ( a2 != result )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 900))(this, a2);
    result = this[65];
    if ( result >= 0 )
      *(_DWORD *)(this[55] + 12 * result) = 0;
    if ( a2 > -1 )
      *(_DWORD *)(this[55] + 12 * a2) = this[54];
    this[65] = a2;
  }
  return result;
}
