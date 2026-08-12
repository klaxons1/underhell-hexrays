bool __thiscall sub_10209990(_DWORD *this)
{
  bool result; // al
  int v3; // ecx

  result = 0;
  if ( (this[62] & 0x200) == 0 )
  {
    v3 = this[106];
    if ( !v3 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 40))(v3) || (this[62] & 0x40) != 0 )
      return 1;
  }
  return result;
}
