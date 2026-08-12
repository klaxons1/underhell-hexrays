int __thiscall sub_10164CA0(_DWORD *this, int a2, int a3)
{
  int i; // esi
  int v5; // ecx
  int result; // eax

  for ( i = 0; i < this[910]; ++i )
  {
    v5 = *(_DWORD *)(this[907] + 4 * i);
    result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 268))(v5, a2, a3);
  }
  return result;
}
