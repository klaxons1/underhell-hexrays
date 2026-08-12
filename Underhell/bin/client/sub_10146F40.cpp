int __thiscall sub_10146F40(_DWORD *this, const void *a2, int a3, char a4, int a5, _BYTE *a6, int a7)
{
  int result; // eax

  sub_10145000(this, a2);
  this[34] = a3;
  this[33] = 0x2000;
  if ( (*a6 & 0x20) != 0 )
  {
    if ( sub_10144E30((int)a6, a5, (int)this, *(float *)(a5 + 16), *(_DWORD *)a5) )
    {
      this[33] |= 0x30u;
    }
    else if ( *(_BYTE *)(a5 + 8) )
    {
      this[33] |= 0x10u;
    }
    else
    {
      this[33] |= 0x20u;
    }
  }
  else
  {
    this[33] = 8240;
  }
  if ( (*a6 & 0x10) != 0 )
    this[33] |= 0x40u;
  if ( !*(_BYTE *)(a5 + 8) && a4 )
    this[33] |= 0x800u;
  this[38] = a7;
  this[39] = *(_DWORD *)a5;
  this[40] = *(_DWORD *)(a5 + 4);
  this[41] = *(_DWORD *)(a5 + 8);
  this[42] = *(_DWORD *)(a5 + 12);
  this[43] = *(_DWORD *)(a5 + 16);
  result = *(_DWORD *)(a5 + 20);
  this[44] = result;
  return result;
}
