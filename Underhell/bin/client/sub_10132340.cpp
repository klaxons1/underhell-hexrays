int __thiscall sub_10132340(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ebx
  void (__thiscall *v6)(_DWORD *, const char *, _DWORD, _DWORD); // eax
  int v8; // [esp+Ch] [ebp-4h] BYREF

  sub_10241570(a2);
  v3 = sub_10076740();
  v4 = sub_10076720();
  v5 = v4;
  if ( v3 != this[64] || v4 != this[65] )
  {
    v6 = *(void (__thiscall **)(_DWORD *, const char *, _DWORD, _DWORD))(*this + 768);
    this[64] = v3;
    this[65] = v5;
    v6(this, "resource/LoadingDiscPanel.res", 0, 0);
  }
  sub_102361D0(&v8, &a2);
  return sub_10236140((v3 - v8) / 2, (v5 - a2) / 2);
}
