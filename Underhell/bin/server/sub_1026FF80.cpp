void __thiscall sub_1026FF80(_DWORD *this)
{
  _DWORD *v1; // ecx

  if ( *((_BYTE *)this - 1500) )
  {
    *((_BYTE *)this - 1496) |= 1u;
  }
  else
  {
    v1 = (_DWORD *)*(this - 390);
    if ( v1 )
    {
      *v1 |= 0x101u;
      *(_WORD *)(sub_10153460(v1) + 2) = 0;
    }
  }
}
