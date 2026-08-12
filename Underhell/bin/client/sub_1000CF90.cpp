char __thiscall sub_1000CF90(_DWORD *this)
{
  int v2; // eax

  LOBYTE(v2) = 2;
  if ( this[500] == 2 )
  {
    if ( this[502] != 2 || (v2 = this[452], v2 != this[501]) )
    {
      LOBYTE(v2) = sub_1000BE10(this);
      if ( (_BYTE)v2 )
        LOBYTE(v2) = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 852))(this, this[502]);
    }
  }
  return v2;
}
