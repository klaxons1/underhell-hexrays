void __thiscall sub_102F4C00(int this, int a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax

  v3 = *(_DWORD *)(this + 5688);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (v3 & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        if ( v4[1] == v5 )
          v6 = *v4;
        else
          v6 = 0;
        sub_1025FAC0(v6);
      }
    }
  }
  sub_10097AA0((float *)this, a2);
}
