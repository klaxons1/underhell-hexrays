int __thiscall sub_10131E50(_BYTE *this)
{
  int result; // eax

  if ( this[385] )
  {
    (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 772))(this, *((_DWORD *)this + 68));
    return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 16))(this);
  }
  return result;
}
