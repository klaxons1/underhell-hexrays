int __thiscall sub_10237250(int this, int a2)
{
  int v2; // ebx
  int i; // esi
  int *v5; // ecx
  int result; // eax

  v2 = this + 1084;
  for ( i = 0; i < 16; ++i )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, i + v2 - this);
    }
    *(_BYTE *)(v2 + i) = -1;
  }
  return result;
}
