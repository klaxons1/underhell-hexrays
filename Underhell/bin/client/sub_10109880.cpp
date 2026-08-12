int __thiscall sub_10109880(int this, unsigned int a2, _BYTE *a3, _BYTE *a4)
{
  unsigned int v5; // eax

  if ( !*(_BYTE *)(this + 20) )
    return 0;
  if ( (*(_WORD *)(*(_DWORD *)(this + 24) + 18) & 0x400) != 0 )
    return 1;
  v5 = a2;
  if ( a2 >= 4 )
  {
    while ( *(_DWORD *)a3 == *(_DWORD *)a4 )
    {
      v5 -= 4;
      a4 += 4;
      a3 += 4;
      if ( v5 < 4 )
        return !v5 || *a4 == *a3 && (v5 <= 1 || a4[1] == a3[1] && (v5 <= 2 || a4[2] == a3[2]));
    }
    return 0;
  }
  return !v5 || *a4 == *a3 && (v5 <= 1 || a4[1] == a3[1] && (v5 <= 2 || a4[2] == a3[2]));
}
