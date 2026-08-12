char __thiscall sub_102DFC70(unsigned int *this, int a2)
{
  unsigned int v2; // eax
  unsigned int *v3; // esi
  int *v4; // ecx
  int v5; // ecx
  unsigned int v6; // eax
  int *v7; // ecx

  v2 = this[545];
  v3 = this + 545;
  if ( v2 == -1 || (v4 = &off_1061BE18[4 * (this[545] & 0xFFF) + 1], v4[1] != v2 >> 12) )
    v5 = 0;
  else
    v5 = *v4;
  if ( a2 == v5 )
  {
    v6 = *v3;
    if ( *v3 != -1 )
    {
      v6 >>= 12;
      if ( off_1061BE18[4 * (*v3 & 0xFFF) + 2] == v6 )
      {
        if ( off_1061BE18[4 * (*v3 & 0xFFF) + 1] )
        {
          v6 = (unsigned int)(v3 - 545);
          if ( *((_BYTE *)v3 - 2096) )
          {
            *(_BYTE *)(v6 + 88) |= 1u;
            *v3 = -1;
          }
          else
          {
            v7 = *(int **)(v6 + 24);
            if ( v7 )
              LOBYTE(v6) = sub_100194B0(v7, 2180);
            *v3 = -1;
          }
        }
      }
    }
  }
  else
  {
    LOBYTE(v6) = sub_102DD340(v3, a2);
  }
  if ( a2 )
    LOBYTE(v6) = sub_101CDE00(a2);
  return v6;
}
