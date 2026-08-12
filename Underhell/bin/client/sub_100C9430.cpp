int __thiscall sub_100C9430(_DWORD *this, int a2)
{
  this[68] = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)a2 + 12))(a2, "HudHintTextSmall", 1);
  this[69] = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)a2 + 12))(a2, "HudHintTextLarge", 1);
  return sub_10241570(a2);
}
