int __thiscall sub_10273F60(int this, int a2)
{
  int result; // eax
  int i; // esi
  int v5; // ecx

  result = sub_10236310((int (__thiscall ***)(void *, int))this, a2);
  if ( !(_BYTE)a2 || (LOBYTE(a2) = 1, !*(_BYTE *)(this + 240)) )
    LOBYTE(a2) = 0;
  for ( i = 0; i < *(_DWORD *)(this + 232); ++i )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(this + 220) + 4 * i);
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 124))(v5, a2);
  }
  return result;
}
