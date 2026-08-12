void __thiscall sub_1031F6A0(int this, int a2)
{
  double v3; // st7
  bool v4; // zf
  unsigned int v5; // edi
  int *v6; // ecx
  int *v7; // ecx

  if ( *(_DWORD *)(a2 + 24) == 1 )
    v3 = *(float *)(a2 + 8);
  else
    v3 = 0.0;
  v4 = (*(_BYTE *)(this + 250) & 1) == 0;
  *(float *)(this + 2160) = v3;
  if ( !v4 )
  {
    v5 = *(_DWORD *)(this + 248) & 0xFFFEFFFF;
    if ( *(_DWORD *)(this + 248) != v5 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 248);
      }
      *(_DWORD *)(this + 248) = v5;
    }
    if ( *(_DWORD *)(this + 848) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(this + 24);
        if ( v7 )
          sub_100194B0(v7, 848);
      }
      *(_DWORD *)(this + 848) = 0;
    }
  }
  *(_BYTE *)(this + 2144) = 0;
  sub_1031C450(this);
}
