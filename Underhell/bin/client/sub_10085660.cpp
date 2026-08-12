int __thiscall sub_10085660(_DWORD *this, unsigned __int16 a2)
{
  int result; // eax
  int v4; // eax
  int v5; // edx
  int v6; // eax

  result = 0xFFFF;
  if ( a2 != 0xFFFF )
  {
    v4 = this[9] + 168 * a2;
    *(_WORD *)(v4 + 8) |= 0x20u;
    result = sub_100855D0((int)this, a2);
    if ( result )
    {
      result = (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)result + 28))(result);
      if ( (_WORD)result != 0xFFFF )
      {
        v5 = (unsigned __int16)result;
        v6 = this[9];
        v5 *= 168;
        *(_WORD *)(v5 + v6 + 8) |= 0x20u;
        return v5 + v6 + 8;
      }
    }
  }
  return result;
}
