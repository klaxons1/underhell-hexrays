int __thiscall sub_102374C0(int (__thiscall ***this)(void *, int *, _BYTE *))
{
  int v1; // esi
  int v2; // edi
  int v3; // eax
  int v5; // [esp+Ch] [ebp-8h] BYREF
  _BYTE v6[4]; // [esp+10h] [ebp-4h] BYREF

  v1 = dword_1047CA70;
  v2 = *(_DWORD *)dword_1047CA70;
  v3 = (**this)(this, &v5, v6);
  (*(void (__thiscall **)(int, int))(v2 + 20))(v1, v3);
  return v5;
}
