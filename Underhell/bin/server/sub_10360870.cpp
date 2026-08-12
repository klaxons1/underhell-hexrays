int __thiscall sub_10360870(int *this, int a2)
{
  int i; // esi
  int v4; // ecx

  sub_101BD250(this + 1078);
  for ( i = 0; i < this[910]; ++i )
  {
    v4 = *(_DWORD *)(this[907] + 4 * i);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 80))(v4, a2);
  }
  return sub_10035690((int)this, a2, (int)this, a2);
}
