int __thiscall sub_10131ED0(_BYTE *this, int a2)
{
  int result; // eax

  if ( a2 == 107 )
  {
    if ( this[386] )
    {
      (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 772))(this, *((_DWORD *)this + 70));
      return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 16))(this);
    }
  }
  return result;
}
