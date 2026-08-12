void __thiscall sub_1012E770(_DWORD *this)
{
  _DWORD *v1; // ecx

  if ( *((_BYTE *)this - 720) )
  {
    *((_BYTE *)this - 716) |= 1u;
  }
  else
  {
    v1 = (_DWORD *)*(this - 195);
    if ( v1 )
    {
      *v1 |= 0x101u;
      *(_WORD *)(sub_10153460(v1) + 2) = 0;
    }
  }
}
