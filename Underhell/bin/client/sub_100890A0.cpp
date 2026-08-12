int sub_100890A0()
{
  unsigned __int16 v0; // ax
  int v1; // ecx
  int v2; // eax
  int result; // eax

  v0 = unk_1042C4F8;
  if ( unk_1042C4F8 != 0xFFFF )
  {
    v1 = dword_1042C4EC;
    do
    {
      v2 = 168 * v0;
      *(_WORD *)(v1 + v2 + 8) |= 0x20u;
      v1 = dword_1042C4EC;
      v0 = *(_WORD *)(dword_1042C4EC + v2 + 166);
    }
    while ( v0 != 0xFFFF );
  }
  result = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(dword_1042C4C8 + 124))(
             &dword_1042C4C8,
             (unsigned __int8)byte_1042C4D8,
             (unsigned __int8)byte_1042C4D9,
             (unsigned __int8)byte_1042C4DA);
  algn_1042C599[0] = 1;
  return result;
}
