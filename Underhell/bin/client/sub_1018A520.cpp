int __thiscall sub_1018A520(_DWORD *this)
{
  int v2; // eax
  char Destination[32]; // [esp+4h] [ebp-20h] BYREF

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 204))(dword_1041315C);
  sub_102286F0(v2, Destination, 0x20u);
  (*(void (__thiscall **)(_DWORD *, const char *, char *))(*(this - 107) + 1028))(this - 107, "mapname", Destination);
  return (*(int (__thiscall **)(_DWORD *, char *))(*(this - 107) + 1032))(this - 107, Destination);
}
