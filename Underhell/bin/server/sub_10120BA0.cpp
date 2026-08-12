int __thiscall sub_10120BA0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  int v6; // eax

  v2 = *(_DWORD *)(this + 880);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  if ( !(unsigned __int8)sub_10260340(*(char **)(this + 912), v4) )
    return 0;
  if ( (*(_DWORD *)(this + 248) & 0x20) == 0 || *(_DWORD *)(this + 800) )
  {
    sub_1011FE20(this, this + 928, 0, 0);
    v6 = *(_DWORD *)(this + 800);
    if ( v6 )
    {
      if ( v6 != 2 )
        sub_101206D0(this);
    }
    return 1;
  }
  else
  {
    sub_10120480(this);
    return 1;
  }
}
