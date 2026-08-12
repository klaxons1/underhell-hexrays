int __thiscall sub_10050B60(int this, int a2, int a3)
{
  unsigned __int16 v3; // dx
  int v4; // ecx
  int v5; // eax

  v3 = *(_WORD *)(this + 1260);
  if ( v3 == 0xFFFF )
    return 0xFFFF;
  v4 = *(_DWORD *)(this + 1248);
  while ( 1 )
  {
    v5 = v4 + 10 * v3;
    if ( *(char *)(v5 + 4) == a3 && *(char *)(v5 + 3) == a2 )
      break;
    v3 = *(_WORD *)(v5 + 8);
    if ( v3 == 0xFFFF )
      return 0xFFFF;
  }
  return v3;
}
