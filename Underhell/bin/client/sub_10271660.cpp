int __thiscall sub_10271660(int this, _DWORD *a2)
{
  int v3; // eax
  int v4; // ecx

  sub_1025B1F0((_BYTE *)this, a2);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 812))(this, 0);
  *(_DWORD *)(this + 388) = sub_1022A800(a2, "SubTabPosition", 0);
  v3 = sub_1022A800(a2, "TabPosition", 0);
  v4 = *(_DWORD *)(this + 376);
  *(_DWORD *)(this + 380) = v3;
  return (*(int (__thiscall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)this + 836))(this, 0, v4, 0);
}
