void __thiscall sub_102616F0(_BYTE *this, int a2)
{
  if ( a2 == 107 )
  {
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 400))(this, 107);
    if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 940))(this) > 0 && (this[377] & 1) == 0 )
      (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 468))(this, 64);
  }
}
