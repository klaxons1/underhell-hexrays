int __thiscall sub_10061780(int this, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)(this + 184) = a3;
  *(_DWORD *)(this + 180) = a2;
  *(_BYTE *)(this + 188) = 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 40))(a2, a3);
  (*(void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(this + 180) + 68))(
    *(_DWORD *)(this + 180),
    a4,
    a5,
    this);
  *(_DWORD *)(this + 208) = a2 + 4;
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 212) = a5;
  *(_BYTE *)(this + 240) = 0;
  *(_DWORD *)(this + 220) = *(_DWORD *)(this + 156);
  *(_DWORD *)(this + 192) = *(_DWORD *)(this + 164);
  *(_BYTE *)(this + 204) = *(_BYTE *)(this + 176);
  *(_DWORD *)(this + 224) = 0;
  sub_10016990(this + 244, a2, a4, (_DWORD *)this);
  *(_DWORD *)(this + 224) = 0;
  return sub_10016A00((_DWORD *)(this + 244));
}
