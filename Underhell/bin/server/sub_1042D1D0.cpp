bool __thiscall sub_1042D1D0(int this, int a2, int *a3)
{
  int v4; // ecx
  int v5; // eax
  int v7; // eax

  v4 = *(_DWORD *)(this + 12);
  v5 = *(_DWORD *)(this + 28);
  if ( v4 + a2 < v5 )
  {
    if ( a2 + v4 + *a3 > v5 )
      *a3 = v5 - v4 - a2;
    if ( (*(_BYTE *)(this + 20) & 2) == 0 )
    {
      sub_1042D170(this, a2 + *a3);
      *(_BYTE *)(this + 20) &= ~2u;
    }
    v7 = *(_DWORD *)(this + 28) - *(_DWORD *)(this + 12);
    if ( v7 < *a3 )
      *a3 = v7;
    return *a3 != 0;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
}
