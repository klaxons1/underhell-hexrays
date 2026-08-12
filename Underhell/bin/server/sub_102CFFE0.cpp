void __thiscall sub_102CFFE0(int this)
{
  unsigned int v2; // edi
  int *v3; // ecx

  v2 = *(_DWORD *)(this + 248) & 0xFFFFFFFE;
  if ( *(_DWORD *)(this + 248) != v2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 248);
    }
    *(_DWORD *)(this + 248) = v2;
  }
  *(float *)(this + 800) = 0.0;
  sub_102CEE20((unsigned int *)this);
}
