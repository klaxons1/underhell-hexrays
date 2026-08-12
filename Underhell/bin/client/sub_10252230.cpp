int __thiscall sub_10252230(_BYTE *this)
{
  int result; // eax

  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 864))(this);
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 900))(this);
  result = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 48))(this, 0);
  if ( this[340] )
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 996))(this);
  return result;
}
