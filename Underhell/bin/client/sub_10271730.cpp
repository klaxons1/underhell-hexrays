int __thiscall sub_10271730(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 == this[95] )
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 928))(this, 0);
  return result;
}
