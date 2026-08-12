BOOL __thiscall sub_10432650(int this, char *a2)
{
  char *v2; // edi
  int v5; // ecx

  v2 = a2;
  if ( a2 )
  {
    do
      sub_104320B0(this, *v2++, 8);
    while ( *(v2 - 1) );
    return *(_BYTE *)(this + 16) == 0;
  }
  else
  {
    sub_101532C0((_DWORD *)this, 0, 7, 1);
    v5 = *(_DWORD *)(this + 12);
    if ( v5 + 1 > *(_DWORD *)(this + 8) )
      *(_BYTE *)(this + 16) = 1;
    if ( !*(_BYTE *)(this + 16) )
    {
      *(_BYTE *)(*(_DWORD *)this + (v5 >> 3)) &= ~(1 << (v5 & 7));
      ++*(_DWORD *)(this + 12);
    }
    return *(_BYTE *)(this + 16) == 0;
  }
}
