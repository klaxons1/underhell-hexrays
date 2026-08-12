void sub_1006A1D0()
{
  int i; // esi
  int v1; // edi
  int v2; // ebx
  int v3; // eax
  const char *v4; // eax

  for ( i = dword_10692E2C; i; i = *(_DWORD *)(i + 800) )
  {
    if ( byte_10692E28 )
    {
      v1 = *(_DWORD *)(i + 812);
      if ( v1 == -1 || (v2 = *(_DWORD *)(i + 816), v2 == -1) )
      {
        if ( (*(_DWORD *)(i + 252) & 0x800) != 0 )
          sub_100DAE60(i);
        DevWarning(
          "ERROR: Dynamic link at %f %f %f pointing to invalid node ID!!\n",
          *(float *)(i + 580),
          *(float *)(i + 584),
          *(float *)(i + 588));
      }
      else if ( v1 >= 0 && v1 < *(_DWORD *)(dword_106935D8 + 4) && *(_DWORD *)(*(_DWORD *)(dword_106935D8 + 8) + 4 * v1) )
      {
        v3 = sub_10069C20((_DWORD *)i);
        if ( v3 )
        {
          *(_DWORD *)(v3 + 20) = i;
          if ( *(_DWORD *)(i + 820) )
            *(_BYTE *)(v3 + 14) &= ~2u;
          else
            *(_BYTE *)(v3 + 14) |= 2u;
        }
        else
        {
          v4 = (const char *)sub_100D6390(i);
          DevMsg("Dynamic Link Error: (%s) unable to form between nodes %d and %d\n", v4, v1, v2);
        }
      }
    }
  }
}
