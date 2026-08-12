int __thiscall sub_100D5F30(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = this[60] + 84 * (a2 % 90);
  return *(_DWORD *)(v2 + 4) != a2 ? 0 : v2;
}
