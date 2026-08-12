unsigned int __thiscall sub_10044230(_DWORD *this, int ArgList)
{
  unsigned int result; // eax
  _DWORD *v3; // ecx
  char Buffer[64]; // [esp+0h] [ebp-40h] BYREF

  result = this[1032];
  if ( result != -1 )
  {
    v3 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[1032] & 0xFFF) + 4);
    result >>= 12;
    if ( v3[1] == result )
    {
      if ( *v3 )
      {
        result = ArgList;
        if ( ArgList <= 0 )
        {
          sub_10228370(Buffer, 0x40u, "vehicleRole %i\n", ArgList);
          return (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)dword_1041315C + 24))(dword_1041315C, Buffer, 1);
        }
      }
    }
  }
  return result;
}
