int __thiscall sub_1008F760(int *this)
{
  int v2; // ecx
  int v3; // esi
  unsigned __int16 v4; // ax

  *(_DWORD *)(this[1] + 312) |= 0x4000u;
  sub_1008F420(this);
  v2 = this[1];
  v3 = *(_DWORD *)off_103DD080;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)(v2 + 4) + 28))(v2 + 4);
  return (*(int (__thiscall **)(void *, _DWORD))(v3 + 140))(off_103DD080, v4);
}
