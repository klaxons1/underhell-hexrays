int __thiscall sub_1024C320(int this)
{
  int *v2; // ecx
  int *v3; // ecx

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CTesla::`vftable';
  *(_DWORD *)(this + 800) = 0;
  if ( *(_DWORD *)(this + 804) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 804);
    }
    *(_DWORD *)(this + 804) = 0;
  }
  if ( *(_DWORD *)(this + 852) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 852);
    }
    *(_DWORD *)(this + 852) = 0;
  }
  *(_DWORD *)(this + 252) |= 0x80u;
  *(float *)(this + 820) = 200.0;
  *(float *)(this + 828) = 5.0;
  *(_DWORD *)(this + 816) = 6;
  *(float *)(this + 824) = 5.0;
  *(_DWORD *)(this + 812) = 6;
  *(float *)(this + 832) = 0.30000001;
  *(float *)(this + 836) = 0.55000001;
  *(float *)(this + 844) = 0.5;
  *(float *)(this + 840) = 0.5;
  sub_100D8500((_DWORD *)this);
  return this;
}
