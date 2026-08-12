char __thiscall sub_1002FE40(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx

  if ( *(_BYTE *)(this + 224) == 1 )
  {
    if ( *(_DWORD *)(this + 2336) != 7 )
      *(_DWORD *)(this + 2336) = 7;
    return 0;
  }
  else
  {
    v2 = *(_DWORD *)(this + 2688);
    if ( v2 != -1 )
    {
      v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
      v4 = v2 >> 12;
      if ( v3[1] == v4 )
      {
        if ( *v3 )
        {
          if ( v3[1] == v4 )
          {
            sub_102320D0(*v3);
            return 1;
          }
          sub_102320D0(0);
        }
      }
    }
    return 1;
  }
}
