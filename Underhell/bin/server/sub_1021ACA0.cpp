int __thiscall sub_1021ACA0(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  int v6; // ecx

  v4 = this[77];
  if ( v4 != -1 )
  {
    v5 = &off_1061BE18[4 * (this[77] & 0xFFF) + 1];
    if ( v5[1] == v4 >> 12 )
    {
      v6 = *v5;
      if ( v6 )
      {
        --*(_BYTE *)(v6 + 304);
        sub_100D8500((_DWORD *)v6);
      }
    }
  }
  if ( a2 )
  {
    ++*(_BYTE *)(a2 + 304);
    sub_100D83F0((_DWORD *)a2, 8);
  }
  return sub_100E1C80((int)this, a2, a3);
}
