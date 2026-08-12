char __thiscall sub_100B26F0(void *this, int a2, int a3, int a4)
{
  int v4; // esi

  v4 = a3;
  if ( a3 > a4 )
    return 1;
  while ( ((1 << (v4 & 0x1F)) & sub_100B2250((int)this, a2)[1]) != 0 )
  {
    if ( ++v4 > a4 )
      return 1;
  }
  return 0;
}
