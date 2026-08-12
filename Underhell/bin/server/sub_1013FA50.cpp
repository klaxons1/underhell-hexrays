int __thiscall sub_1013FA50(int this, int a2)
{
  unsigned int v3; // esi
  int *v4; // ecx

  v3 = *(_DWORD *)(this + 248) & 0xFFFFFFFE;
  if ( *(_DWORD *)(this + 248) != v3 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 248);
    }
    *(_DWORD *)(this + 248) = v3;
  }
  if ( *(_DWORD *)(a2 + 24) == 1 )
    return sub_1013F950((int *)this, *(float *)(a2 + 8));
  else
    return sub_1013F950((int *)this, 0.0);
}
