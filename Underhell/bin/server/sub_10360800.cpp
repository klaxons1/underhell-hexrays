int __thiscall sub_10360800(int *this)
{
  int i; // esi
  int v3; // ecx

  sub_101BD250(this + 1078);
  for ( i = 0; i < this[910]; ++i )
  {
    v3 = *(_DWORD *)(this[907] + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 76))(v3);
  }
  return sub_10021F20(this);
}
