int __thiscall sub_10027180(_DWORD *this)
{
  int result; // eax

  if ( *((_BYTE *)this + 1760) )
  {
    if ( this[452] != -1 )
    {
      (*(void (__thiscall **)(_DWORD *, int))(*this + 364))(this, 1);
      return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 680))(this, 0.0);
    }
  }
  return result;
}
