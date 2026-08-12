char __thiscall sub_1025C0B0(_BYTE *this)
{
  char result; // al

  result = this[292] >> 5;
  if ( (this[292] & 0x20) == 0 )
    return (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 908))(this, 0);
  return result;
}
