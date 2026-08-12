int __thiscall sub_10273E60(int this)
{
  int v2; // ebx
  int i; // esi
  int v4; // eax

  v2 = 1;
  if ( !*(_BYTE *)(this + 240) )
    return 1;
  for ( i = 0; i < *(_DWORD *)(this + 232); v2 += v4 )
    v4 = sub_10273E60(*(_DWORD *)(*(_DWORD *)(this + 220) + 4 * i++));
  return v2;
}
