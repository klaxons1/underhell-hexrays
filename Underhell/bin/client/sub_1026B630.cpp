int __thiscall sub_1026B630(_DWORD *this)
{
  int v2; // ebx
  int v3; // ebp
  int i; // esi
  int v5; // ecx

  v2 = this[75];
  v3 = 0;
  for ( i = 0; i < v2; ++i )
  {
    v5 = *(_DWORD *)(this[58] + 12 * *(_DWORD *)(this[72] + 4 * i));
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 128))(v5) )
      ++v3;
  }
  return v3;
}
