int __thiscall sub_1003D9E0(_WORD *this)
{
  int result; // eax
  int v3; // esi

  result = 0xFFFF;
  if ( this[586] == 0xFFFF )
  {
    v3 = (unsigned __int16)sub_100EC160(0);
    sub_1016F8E0(0xFFFF, v3);
    result = dword_103D8A7C + 8 * v3;
    if ( result )
      *(_DWORD *)result = this;
    this[586] = v3;
  }
  return result;
}
