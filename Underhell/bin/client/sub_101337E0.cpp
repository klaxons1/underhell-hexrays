int __thiscall sub_101337E0(_DWORD *this, int a2)
{
  sub_10241570(a2);
  this[14429] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 12))(a2, "DefaultFixedOutline", 0);
  this[14428] = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)a2 + 12))(a2, "DefaultFixedOutline", 1);
  this[14430] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 12))(a2, "DefaultVerySmall", 0);
  return sub_10133730(this);
}
