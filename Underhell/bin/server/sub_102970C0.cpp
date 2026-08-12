void __thiscall sub_102970C0(int this, int a2)
{
  double v3; // st7
  int v4; // edi
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  void *v8; // ecx

  if ( *(_DWORD *)(a2 + 24) == 1 )
    v3 = *(float *)(a2 + 8);
  else
    v3 = 0.0;
  v4 = 0;
  *(float *)(this + 852) = v3;
  while ( 1 )
  {
    v5 = *(_DWORD *)(this + 848);
    if ( (v5 & 1) != 0 && (v5 & 2) != 0 )
    {
      sub_1006DCB0((_DWORD *)this);
    }
    else
    {
      sub_1006F910((_DWORD *)this);
      *(_DWORD *)(this + 848) |= 2u;
    }
    if ( v4 >= *(_DWORD *)(this + 836) )
      break;
    v6 = *(_DWORD *)(this + 848);
    if ( (v6 & 1) != 0 && (v6 & 2) != 0 )
    {
      sub_1006DCB0((_DWORD *)this);
    }
    else
    {
      sub_1006F910((_DWORD *)this);
      *(_DWORD *)(this + 848) |= 2u;
    }
    if ( *(_DWORD *)(this + 836) > v4 )
    {
      v7 = *(_DWORD *)(*(_DWORD *)(this + 824) + 4 * v4);
      if ( v7 != -1 && off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 824) + 4 * v4) & 0xFFF) + 2] == v7 >> 12 )
      {
        v8 = (void *)off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 824) + 4 * v4) & 0xFFF) + 1];
        if ( v8 )
        {
          if ( sub_10295660(v8, &a2) )
            *(float *)(a2 + 48) = *(float *)(this + 852);
        }
      }
    }
    ++v4;
  }
}
