void __thiscall sub_100DA4D0(_DWORD *this)
{
  _DWORD *v1; // ecx

  if ( *((_BYTE *)this - 236) )
  {
    *((_BYTE *)this - 232) |= 1u;
  }
  else
  {
    v1 = (_DWORD *)*(this - 74);
    if ( v1 )
    {
      *v1 |= 0x101u;
      *(_WORD *)(sub_10153460(v1) + 2) = 0;
    }
  }
}
