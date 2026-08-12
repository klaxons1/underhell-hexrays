int __thiscall sub_101A6D60(_DWORD *this, int *a2)
{
  int *v2; // edi
  int v4; // ebx
  _DWORD *v5; // eax
  _BYTE v7[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_10241570(a2);
  this[53] = (*(int (__thiscall **)(int *, const char *, _DWORD))(*v2 + 12))(v2, "HudNumbersSmall", 0);
  v4 = *v2;
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int **))(*this + 228))(this, &a2);
  this[54] = *(_DWORD *)(*(int (__thiscall **)(int *, _BYTE *, const char *, _DWORD))(v4 + 20))(v2, v7, "FgColor", *v5);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 264))(this, 0);
}
