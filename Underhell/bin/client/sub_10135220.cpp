int __thiscall sub_10135220(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // edi
  int v4; // ebx
  _DWORD *v5; // eax
  _BYTE v7[4]; // [esp+Ch] [ebp-4h] BYREF

  v3 = a2;
  v4 = *a2;
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, _DWORD **))(*this + 228))(this, &a2);
  this[71] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *, const char *, _DWORD))(v4 + 20))(
                          v3,
                          v7,
                          "CSlideshowDisplayScreen_Default",
                          *v5);
  a2 = 0;
  this[72] = 0;
  return (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this[64] + 220))(this[64], this[71]);
}
