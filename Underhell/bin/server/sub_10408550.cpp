void __thiscall sub_10408550(_DWORD *this)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // esi
  int *v6; // ecx

  v1 = this[355];
  if ( v1 != -1 )
  {
    v2 = &off_1061BE18[4 * (v1 & 0xFFF) + 1];
    v3 = v1 >> 12;
    if ( v2[1] == v3 )
    {
      if ( *v2 )
      {
        v4 = v2[1] == v3 ? *v2 : 0;
        v5 = v4 + 116;
        if ( *(_BYTE *)(v4 + 119) )
        {
          if ( *(_BYTE *)(v4 + 84) )
          {
            *(_BYTE *)(v4 + 88) |= 1u;
            *(_BYTE *)(v4 + 119) = 0;
          }
          else
          {
            v6 = *(int **)(v4 + 24);
            if ( v6 )
              sub_100194B0(v6, 116);
            *(_BYTE *)(v5 + 3) = 0;
          }
        }
      }
    }
  }
}
