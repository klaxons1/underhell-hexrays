int __thiscall sub_101909C0(_DWORD *this, int a2)
{
  int result; // eax

  result = sub_1003CD40(this, a2);
  if ( !a2 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*(this - 2) + 408))(this - 2, -1293.0);
    return sub_10190E10(this - 2);
  }
  return result;
}
