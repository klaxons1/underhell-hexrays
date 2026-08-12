int __thiscall sub_1023AEF0(_DWORD *this)
{
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 128))(this) )
  {
    if ( this[12] )
      sub_1025D700();
    if ( *((char *)this + 80) < 0 )
    {
      *((_WORD *)this + 40) |= 0x800u;
      *((_WORD *)this + 40) &= ~0x80u;
      (*(void (__thiscall **)(_DWORD *))(*this + 508))(this);
      *((_WORD *)this + 40) &= ~0x800u;
    }
  }
  return (*(int (__thiscall **)(_DWORD *))(*this + 380))(this);
}
