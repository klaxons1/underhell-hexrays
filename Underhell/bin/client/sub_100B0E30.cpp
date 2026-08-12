int __thiscall sub_100B0E30(_WORD *this)
{
  int result; // eax
  int v3; // esi

  result = 1;
  this[77] = 1;
  if ( this[78] == 0xFFFF )
  {
    v3 = (unsigned __int16)sub_100EC160(0);
    sub_1016F8E0(0xFFFF, v3);
    result = dword_1042F804 + 8 * v3;
    if ( result )
      *(_DWORD *)result = this;
    this[78] = v3;
  }
  return result;
}
