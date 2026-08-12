char __thiscall sub_10409020(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx

  v3 = this[353];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[353] & 0xFFF) + 1];
    if ( v4[1] == v3 >> 12 )
    {
      if ( *v4 )
        return 0;
    }
  }
  sub_10408BA0(this);
  return sub_102B1C70((int)this, a2);
}
