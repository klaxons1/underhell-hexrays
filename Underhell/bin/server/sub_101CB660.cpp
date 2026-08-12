int __thiscall sub_101CB660(int this)
{
  int v2; // esi
  __int16 v3; // ax

  v2 = *(_DWORD *)(this + 424);
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 76))(v2);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 72))(v2, v3 & 0xFEFF);
  *(_BYTE *)(this + 5029) = 0;
  return sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
}
