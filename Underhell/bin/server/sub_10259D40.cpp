int __thiscall sub_10259D40(int this)
{
  int v2; // edx
  int *v3; // ecx
  int *v4; // ecx
  double v5; // st7

  nullsub_4();
  byte_106C761C = 0;
  *(_DWORD *)(this + 912) = 0;
  sub_100E0970(this, v2, 8, 0);
  sub_10112C00(this + 320, 0);
  if ( *(_BYTE *)(this + 119) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 116);
    }
    *(_BYTE *)(this + 119) = 0;
  }
  if ( *(_BYTE *)(this + 113) != 2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 113);
    }
    *(_BYTE *)(this + 113) = 2;
  }
  v5 = *(float *)(this + 108);
  *(_DWORD *)(this + 848) = 0;
  *(float *)(this + 836) = v5;
  if ( 0.0 == *(float *)(this + 840) )
    *(float *)(this + 840) = 500.0;
  if ( *(float *)(this + 844) == 0.0 )
    *(float *)(this + 844) = 500.0;
  return sub_100D8500((_DWORD *)this);
}
