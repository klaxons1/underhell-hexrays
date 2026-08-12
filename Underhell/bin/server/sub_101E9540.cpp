_DWORD *__thiscall sub_101E9540(_DWORD *this)
{
  _DWORD *v3; // ecx

  if ( *((_BYTE *)this - 4324) )
  {
    *((_BYTE *)this - 4320) |= 1u;
    return this;
  }
  else
  {
    v3 = (_DWORD *)*(this - 1096);
    if ( v3 )
    {
      *v3 |= 0x101u;
      *(_WORD *)(sub_10153460(v3) + 2) = 0;
    }
    return this;
  }
}
