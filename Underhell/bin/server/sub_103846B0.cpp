void __thiscall sub_103846B0(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx

  v2 = this[967];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[967] & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        sub_1025FAC0(v5);
        this[967] = -1;
      }
    }
  }
  sub_10027A90((int)this, 0);
  nullsub_4();
}
