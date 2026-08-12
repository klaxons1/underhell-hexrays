int __thiscall sub_10271930(int this, int a2, int a3)
{
  int v3; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int result; // eax

  v3 = a2;
  v5 = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *, const char *, int, int))(**(_DWORD **)(this + 24) + 324))(
                    *(_DWORD *)(this + 24),
                    &a2,
                    "CheckButton.BgColor",
                    9868950,
                    a2);
  a2 = 1315860;
  *(_DWORD *)(this + 40) = v5;
  *(_DWORD *)(this + 28) = *(_DWORD *)(*(int (__thiscall **)(_DWORD, int *, const char *, int, int))(**(_DWORD **)(this + 24) + 324))(
                                        *(_DWORD *)(this + 24),
                                        &a2,
                                        "CheckButton.Border1",
                                        1315860,
                                        v3);
  v6 = *(_DWORD *)(this + 24);
  a2 = 5921370;
  *(_DWORD *)(this + 32) = *(_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int, int))(*(_DWORD *)v6 + 324))(
                                        v6,
                                        &a2,
                                        "CheckButton.Border2",
                                        5921370,
                                        v3);
  v7 = *(_DWORD *)(this + 24);
  a2 = 1315860;
  *(_DWORD *)(this + 36) = *(_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int, int))(*(_DWORD *)v7 + 324))(
                                        v7,
                                        &a2,
                                        "CheckButton.Check",
                                        1315860,
                                        v3);
  result = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)v3 + 12))(v3, "Marlett", a3);
  *(_DWORD *)(this + 44) = result;
  return result;
}
