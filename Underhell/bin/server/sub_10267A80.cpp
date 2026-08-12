void __thiscall sub_10267A80(int this, char a2, float a3, int a4, int a5)
{
  int v6; // eax
  int *v7; // ecx

  if ( a2 != *(_BYTE *)(this + 229) )
  {
    v6 = this - 1484;
    if ( *(_BYTE *)(this - 1400) )
    {
      *(_BYTE *)(v6 + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(v6 + 24);
      if ( v7 )
        sub_100194B0(v7, 1713);
    }
    *(_BYTE *)(this + 229) = a2;
  }
  if ( a2 )
    sub_10267540((float *)(this + 180), &a3);
}
