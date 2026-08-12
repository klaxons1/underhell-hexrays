int __thiscall sub_100B4060(_DWORD *this)
{
  int i; // esi
  int v3; // ecx

  for ( i = 0; i < this[10]; ++i )
  {
    v3 = *(_DWORD *)(this[7] + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  return sub_100D0CE0(this);
}
