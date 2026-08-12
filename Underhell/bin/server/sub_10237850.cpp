void __thiscall sub_10237850(int this)
{
  int *v2; // ecx

  if ( !*(_BYTE *)(this + 800) )
  {
    if ( *(_BYTE *)(this + 800) != 1 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_BYTE *)(this + 800) = 1;
        sub_10237770((_DWORD *)this, 1);
        return;
      }
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 800);
      *(_BYTE *)(this + 800) = 1;
    }
    sub_10237770((_DWORD *)this, 1);
  }
}
