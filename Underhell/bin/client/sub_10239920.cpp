bool __thiscall sub_10239920(_BYTE *this)
{
  return (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 128))(this)
      && (this[80] & 8) != 0
      && this[131] == 0xFF;
}
