void __thiscall sub_102AFA60(int this, int a2)
{
  int *v3; // eax
  int v4; // esi

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v3 = (int *)sub_102AF950((float *)(this + 580));
  v4 = (int)v3;
  if ( v3 )
  {
    sub_100F5880(v3, 10.0);
    if ( *(_DWORD *)(this + 800) )
      sub_102AFA00(v4, *(char **)(this + 800));
  }
}
