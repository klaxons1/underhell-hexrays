void __thiscall sub_103F33F0(int this, char a2, float a3, int a4, int a5)
{
  int v6; // eax
  int *v7; // ecx

  if ( a2 != *(_BYTE *)(this + 426) )
  {
    v6 = this - 1688;
    if ( *(_BYTE *)(this - 1604) )
    {
      *(_BYTE *)(v6 + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(v6 + 24);
      if ( v7 )
        sub_100194B0(v7, 2114);
    }
    *(_BYTE *)(this + 426) = a2;
  }
  if ( a2 )
    sub_103F32A0((float *)(this + 428), &a3);
}
