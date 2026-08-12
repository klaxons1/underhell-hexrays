void __thiscall sub_102BBB00(_DWORD *this)
{
  _DWORD *v1; // ecx

  if ( *((_BYTE *)this - 1040) )
  {
    *((_BYTE *)this - 1036) |= 1u;
  }
  else
  {
    v1 = (_DWORD *)*(this - 275);
    if ( v1 )
    {
      *v1 |= 0x101u;
      *(_WORD *)(sub_10153460(v1) + 2) = 0;
    }
  }
}
