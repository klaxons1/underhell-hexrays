int __thiscall sub_100E85C0(_DWORD *this)
{
  int result; // eax

  if ( *this )
  {
    if ( (dword_10435710 & 1) == 0 )
    {
      dword_10435710 |= 1u;
      sub_100E8090(dword_104356B8);
      atexit(sub_102CAF10);
    }
    result = (*(int (__thiscall **)(int *, _DWORD))(dword_104356B8[0] + 12))(dword_104356B8, *this);
    *this = 0;
  }
  return result;
}
