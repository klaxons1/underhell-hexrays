int __thiscall sub_1025C210(_BYTE *this, int a2)
{
  if ( (this[292] & 0x20) != 0 && (a2 == 65 || a2 == 64) )
  {
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 908))(this, 1);
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 408))(this, 107);
  }
  else
  {
    sub_10236DE0(this, a2);
  }
  *((_WORD *)this + 146) &= ~0x20u;
  return (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 908))(this, 0);
}
