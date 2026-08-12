void __thiscall sub_102378B0(int this, int a2)
{
  int *v3; // ecx

  if ( *(_BYTE *)(this + 800) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 800);
    }
    *(_BYTE *)(this + 800) = 0;
    sub_10237770((_DWORD *)this, 0);
  }
}
