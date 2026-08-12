void __thiscall sub_1025C1A0(_WORD *this, int a2)
{
  if ( a2 == 65 || a2 == 64 )
  {
    (*(void (__thiscall **)(_WORD *, int))(*(_DWORD *)this + 908))(this, 1);
    this[146] |= 0x20u;
    (*(void (__thiscall **)(_WORD *, int))(*(_DWORD *)this + 400))(this, 107);
    if ( (*(unsigned __int8 (__thiscall **)(_WORD *))(*(_DWORD *)this + 948))(this) )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA68 + 8))(dword_1047CA68, 0);
  }
  else
  {
    this[146] &= ~0x20u;
    sub_10236C80(this, a2);
  }
}
