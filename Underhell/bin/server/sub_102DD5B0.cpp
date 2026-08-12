void __thiscall sub_102DD5B0(_DWORD *this)
{
  _DWORD *v1; // ecx

  if ( *((_BYTE *)this - 4996) )
  {
    *((_BYTE *)this - 4992) |= 1u;
  }
  else
  {
    v1 = (_DWORD *)*(this - 1264);
    if ( v1 )
    {
      *v1 |= 0x101u;
      *(_WORD *)(sub_10153460(v1) + 2) = 0;
    }
  }
}
