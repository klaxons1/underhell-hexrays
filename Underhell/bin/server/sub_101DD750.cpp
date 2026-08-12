bool __thiscall sub_101DD750(_DWORD *this)
{
  bool result; // al
  int v3; // ecx

  result = 0;
  if ( (this[62] & 0x200000) == 0 )
  {
    v3 = this[106];
    if ( v3 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 36))(v3) || (this[62] & 0x20000) != 0 )
        return 1;
    }
  }
  return result;
}
