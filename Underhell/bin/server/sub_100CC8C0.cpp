int __thiscall sub_100CC8C0(int this)
{
  int *v2; // ecx
  int v3; // ebx
  int *v4; // ecx

  if ( *(_DWORD *)(this + 864) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 864);
    }
    *(float *)(this + 864) = 0.0;
  }
  sub_100DD660(&flt_106F1CA8);
  sub_100E0970(0, 0);
  sub_100D7260(&flt_106F1CB4);
  v3 = dword_106B31C8;
  if ( *(_DWORD *)(this + 124) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 124);
    }
    *(float *)(this + 124) = *(float *)(v3 + 12);
  }
  sub_100EAB80(this, 8);
  return sub_100E31F0(10.0, 1);
}
