int __thiscall sub_10086FF0(_DWORD *this)
{
  int result; // eax
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // eax

  for ( result = *((unsigned __int16 *)this + 24);
        (_WORD)result != 0xFFFF;
        result = *(unsigned __int16 *)(this[9] + v5 + 166) )
  {
    v3 = (unsigned __int16)result;
    v4 = this[9];
    v5 = 168 * v3;
    if ( (*(_BYTE *)(v4 + v5 + 8) & 1) == 0 )
    {
      v6 = sub_1007A730(off_103DCD78, *(_DWORD *)(v4 + v5));
      if ( v6 )
        (*(void (__thiscall **)(_DWORD *, int, int))(*this + 88))(this, v6, 1);
    }
  }
  return result;
}
