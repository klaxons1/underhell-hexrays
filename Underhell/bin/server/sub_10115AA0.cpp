int __thiscall sub_10115AA0(int this)
{
  int *v2; // ecx
  int *v4; // ecx
  int *v5; // ecx
  int *v6; // ecx

  *(_DWORD *)(this + 252) |= 0x880u;
  sub_100D8500((_DWORD *)this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_10112C00(this + 320, 0);
  sub_100EC3F0((_DWORD *)this, (int)sub_10115640, -1.0, off_106156E0);
  sub_100EC3F0((_DWORD *)this, (int)sub_101157C0, -1.0, off_106156E4);
  if ( !*(_BYTE *)(this + 828) )
  {
    if ( *(_BYTE *)(this + 829) != 1 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v5 = *(int **)(this + 24);
        if ( v5 )
          sub_100194B0(v5, 829);
      }
      *(_BYTE *)(this + 829) = 1;
    }
    if ( *(_DWORD *)(this + 840) != COERCE_INT(1.0) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 840);
      }
      *(float *)(this + 840) = 1.0;
    }
    return nullsub_4(this);
  }
  if ( *(_BYTE *)(this + 829) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 829);
    }
    *(_BYTE *)(this + 829) = 0;
  }
  if ( *(_DWORD *)(this + 840) == COERCE_INT(0.0) )
    return nullsub_4(this);
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
    *(float *)(this + 840) = 0.0;
    return nullsub_4(this);
  }
  else
  {
    v4 = *(int **)(this + 24);
    if ( v4 )
      sub_100194B0(v4, 840);
    *(float *)(this + 840) = 0.0;
    return nullsub_4(this);
  }
}
