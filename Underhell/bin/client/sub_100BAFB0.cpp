int __thiscall sub_100BAFB0(_DWORD *this, int a2)
{
  int v2; // edi
  void (__thiscall *v4)(_DWORD *, int); // edx
  int v5; // ebx
  _DWORD *v6; // eax
  _BYTE v8[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_102572C0(a2);
  this[105] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v2 + 12))(v2, "Default", 0);
  v4 = *(void (__thiscall **)(_DWORD *, int))(*this + 216);
  a2 = 1677721600;
  v4(this, 1677721600);
  this[118] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v2 + 12))(v2, "Marlett", 0);
  v5 = *(_DWORD *)v2;
  v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int *))(*this + 228))(this, &a2);
  this[106] = *(_DWORD *)(*(int (__thiscall **)(int, _BYTE *, const char *, _DWORD))(v5 + 20))(v2, v8, "FgColor", *v6);
  return sub_102577C0(this[105]);
}
