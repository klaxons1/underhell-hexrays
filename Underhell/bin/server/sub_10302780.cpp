int __thiscall sub_10302780(_DWORD *this, int a2, int a3)
{
  int i; // esi
  int v5; // ecx

  for ( i = 0; i < this[910]; ++i )
  {
    v5 = *(_DWORD *)(this[907] + 4 * i);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 256))(v5, a2, a3);
  }
  return sub_10020B00(this, a2, a3);
}
