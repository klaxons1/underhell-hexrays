void __thiscall sub_102706B0(int this, char a2, float a3, int a4, int a5)
{
  int v6; // eax
  int *v7; // ecx

  if ( a2 != *(_BYTE *)(this + 518) )
  {
    v6 = this - 1576;
    if ( *(_BYTE *)(this - 1492) )
    {
      *(_BYTE *)(v6 + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(v6 + 24);
      if ( v7 )
        sub_100194B0(v7, 2094);
    }
    *(_BYTE *)(this + 518) = a2;
  }
  if ( a2 )
    sub_1026FF10((float *)(this + 520), &a3);
}
