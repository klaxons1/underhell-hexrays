int __thiscall sub_101CA1A0(int this)
{
  unsigned int v2; // eax
  int v3; // edi
  unsigned int v4; // eax
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx

  if ( *(_BYTE *)(this + 828) )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 120))(dword_106BAFF4, *(_DWORD *)(this + 816));
    *(_DWORD *)(this + 816) = 0;
    v2 = *(_DWORD *)(this + 812);
    if ( v2 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 2] != v2 >> 12 )
      v3 = 0;
    else
      v3 = off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 1];
    v4 = *(_DWORD *)(this + 808);
    if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 2] != v4 >> 12 )
    {
      sub_101DAB00(0, v3);
      return sub_100E20F0((void *)this);
    }
    else
    {
      sub_101DAB00(off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 1], v3);
      return sub_100E20F0((void *)this);
    }
  }
  else
  {
    v6 = *(_DWORD *)(this + 812);
    if ( v6 != -1 )
    {
      v7 = &off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 1];
      v8 = v6 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 2] == v8 )
      {
        if ( *v7 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 2] == v8 )
          {
            *(float *)(*v7 + 448) = 0.0;
            return sub_100E20F0((void *)this);
          }
          MEMORY[0x1C0] = 0.0;
        }
      }
    }
    return sub_100E20F0((void *)this);
  }
}
