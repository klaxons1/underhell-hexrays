int __thiscall sub_10130890(_DWORD *this, int a2)
{
  int v2; // edi
  int v5; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_10241570(a2);
  this[51] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v2 + 12))(v2, "DebugOverlay", 0);
  (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v5, &a2);
  sub_102361A0(v5, a2);
  return sub_10236140(0, 0);
}
