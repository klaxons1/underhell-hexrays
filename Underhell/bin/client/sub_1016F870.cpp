int __thiscall sub_1016F870(_WORD *this)
{
  int i; // eax
  int v3; // esi
  void (__thiscall ***v4)(_DWORD, _DWORD); // edi
  int result; // eax

  for ( i = (unsigned __int16)this[32]; i != 0xFFFF; i = *(unsigned __int16 *)(*((_DWORD *)this + 13) + v3 + 6) )
  {
    v3 = 8 * (unsigned __int16)i;
    v4 = *(void (__thiscall ****)(_DWORD, _DWORD))(v3 + *((_DWORD *)this + 13));
    if ( v4 )
      (**v4)(v4, 0);
    sub_1022FD10(v4);
  }
  sub_100EC500(this + 26);
  result = sub_1009C990(&dword_103E9D04);
  dword_103E9D20 = 0;
  return result;
}
