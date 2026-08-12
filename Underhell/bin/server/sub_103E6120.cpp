void __thiscall sub_103E6120(int this, char a2, float a3, int a4, int a5)
{
  int v6; // eax
  int *v7; // ecx

  if ( a2 != *(_BYTE *)(this + 462) )
  {
    v6 = this - 1120;
    if ( *(_BYTE *)(this - 1036) )
    {
      *(_BYTE *)(v6 + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(v6 + 24);
      if ( v7 )
        sub_100194B0(v7, 1582);
    }
    *(_BYTE *)(this + 462) = a2;
  }
  if ( a2 )
    sub_103E5FB0((float *)(this + 464), &a3);
}
