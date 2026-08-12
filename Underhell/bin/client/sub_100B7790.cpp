int __thiscall sub_100B7790(_DWORD *this, int *a2)
{
  int *v2; // edi
  int v4; // ebx
  _DWORD *v5; // eax
  int v6; // ebx
  _DWORD *v7; // eax
  _BYTE v9[4]; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_10241570(a2);
  this[52] = (*(int (__thiscall **)(int *, const char *, int))(*v2 + 12))(v2, "DebugFixed", 1);
  this[54] = (*(int (__thiscall **)(int *, const char *, int))(*v2 + 12))(v2, "DebugFixedSmall", 1);
  v4 = *v2;
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int **))(*this + 228))(this, &a2);
  *(_DWORD *)((char *)this + 221) = *(_DWORD *)(*(int (__thiscall **)(int *, _BYTE *, const char *, _DWORD))(v4 + 20))(
                                                 v2,
                                                 v9,
                                                 "DebugLabel",
                                                 *v5);
  v6 = *v2;
  v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int **))(*this + 228))(this, &a2);
  *(_DWORD *)((char *)this + 226) = *(_DWORD *)(*(int (__thiscall **)(int *, _BYTE *, const char *, _DWORD))(v6 + 20))(
                                                 v2,
                                                 v9,
                                                 "DebugText",
                                                 *v7);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 264))(this, 0);
}
