int __thiscall sub_10182450(_DWORD *this, char a2)
{
  int result; // eax

  if ( !this[15] )
    (*(void (__thiscall **)(_DWORD *, int, int))(*(this - 63) + 244))(this - 63, 1, 1);
  if ( !a2 )
    this[56] = -1;
  result = sub_10236340(this - 63);
  if ( (_BYTE)result != a2 )
  {
    if ( a2 )
    {
      (*(void (__thiscall **)(_DWORD *))(*this + 12))(this);
      (*(void (__thiscall **)(_DWORD *))(*this + 16))(this);
      (*(void (__thiscall **)(_DWORD *, int))(*(this - 63) + 124))(this - 63, 1);
      return (*(int (__thiscall **)(_DWORD *))(*(this - 63) + 212))(this - 63);
    }
    else
    {
      sub_10236310(0);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*(this - 63) + 520))(this - 63, 0);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*(this - 63) + 524))(this - 63, 0);
    }
  }
  return result;
}
