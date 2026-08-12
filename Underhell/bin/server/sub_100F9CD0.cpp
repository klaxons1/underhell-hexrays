unsigned int __thiscall sub_100F9CD0(_DWORD *this, int a2, int a3)
{
  unsigned int result; // eax

  result = this[62];
  if ( (result & 0x30) != 0 )
  {
    result >>= 4;
    if ( (result & 1) != 0 )
      result = ((int (__thiscall *)(int (__stdcall ***)(char), int, int, int, _DWORD))(*off_1061B7A0)[3])(
                 off_1061B7A0,
                 a2,
                 1,
                 1,
                 0);
    if ( (this[62] & 0x20) != 0 )
      return ((int (__thiscall *)(int (__stdcall ***)(char), int, int, int, _DWORD))(*off_1061B7A0)[3])(
               off_1061B7A0,
               a3,
               1,
               1,
               0);
  }
  return result;
}
