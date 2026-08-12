double __thiscall sub_100A64B0(int *this)
{
  int v2; // eax
  int v3; // esi

  v2 = sub_100B99B0(this);
  if ( v2 && -1.0 == *(float *)(v2 + 20) )
    sub_100A63E0(v2);
  v3 = *this;
  if ( v3 )
    return *(float *)(v3 + 20);
  else
    return 0.0;
}
