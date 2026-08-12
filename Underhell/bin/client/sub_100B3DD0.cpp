int __thiscall sub_100B3DD0(_DWORD *this)
{
  int i; // esi
  int v3; // ecx
  int result; // eax

  for ( i = 0; i < this[10]; ++i )
  {
    v3 = *(_DWORD *)(this[7] + 4 * i);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3);
  }
  return result;
}
