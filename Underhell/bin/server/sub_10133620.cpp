int __thiscall sub_10133620(int this, int a2)
{
  double v3; // st7
  int *v4; // ecx
  float v6; // [esp+10h] [ebp+8h]

  if ( *(_DWORD *)(a2 + 24) == 1 )
    v3 = *(float *)(a2 + 8);
  else
    v3 = 0.0;
  v6 = v3;
  if ( *(_DWORD *)(this + 800) != LODWORD(v6) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 800);
    }
    *(float *)(this + 800) = v6;
  }
  sub_10154AF0(this, 0);
  sub_10154BB0(0);
  return sub_10154B90();
}
