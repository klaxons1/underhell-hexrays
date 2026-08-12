void __thiscall sub_10069CA0(int this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  int v5; // ecx
  const char *v6; // eax

  if ( byte_10692E28 )
  {
    v2 = *(_DWORD *)(this + 812);
    if ( v2 == -1 || (v3 = *(_DWORD *)(this + 816), v3 == -1) )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      DevWarning(
        "ERROR: Dynamic link at %f %f %f pointing to invalid node ID!!\n",
        *(float *)(this + 580),
        *(float *)(this + 584),
        *(float *)(this + 588));
    }
    else if ( v2 >= 0 && v2 < *(_DWORD *)(dword_106935D8 + 4) && *(_DWORD *)(*(_DWORD *)(dword_106935D8 + 8) + 4 * v2) )
    {
      v4 = sub_10069C20((_DWORD *)this);
      if ( v4 )
      {
        *(_DWORD *)(v4 + 20) = this;
        if ( *(_DWORD *)(this + 820) )
          *(_BYTE *)(v4 + 14) &= ~2u;
        else
          *(_BYTE *)(v4 + 14) |= 2u;
      }
      else
      {
        v6 = (const char *)sub_100D6390(v5);
        DevMsg("Dynamic Link Error: (%s) unable to form between nodes %d and %d\n", v6, v2, v3);
      }
    }
  }
}
