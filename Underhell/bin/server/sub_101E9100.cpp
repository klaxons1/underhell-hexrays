void __thiscall sub_101E9100(_DWORD *this)
{
  _DWORD *v1; // ecx

  if ( *((_BYTE *)this - 2108) )
  {
    *((_BYTE *)this - 2104) |= 1u;
  }
  else
  {
    v1 = (_DWORD *)*(this - 542);
    if ( v1 )
    {
      *v1 |= 0x101u;
      *(_WORD *)(sub_10153460(v1) + 2) = 0;
    }
  }
}
