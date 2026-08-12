int __thiscall sub_10302740(_DWORD *this)
{
  int i; // esi
  int v3; // ecx

  for ( i = 0; i < this[910]; ++i )
  {
    v3 = *(_DWORD *)(this[907] + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 76))(v3);
  }
  return sub_10021F20(this);
}
