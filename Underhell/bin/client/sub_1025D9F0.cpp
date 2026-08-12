void __thiscall sub_1025D9F0(int this, int a2)
{
  int v3; // eax
  int v4; // esi
  void *v5; // esp
  int v6; // eax
  int v7; // eax
  int v8; // eax
  char v9; // cl
  bool v10; // al
  int v11; // eax
  int v12; // eax
  int v13; // [esp+0h] [ebp-Ch] BYREF

  if ( sub_10237C80(dword_103FD3B0) )
  {
    v3 = sub_10237C80(dword_103FD3B0);
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 784))(v3) + 1;
    v5 = alloca(v4);
    v6 = sub_10237C80(dword_103FD3B0);
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v6 + 780))(v6, &v13, v4);
    v7 = sub_10237C80(dword_103FD3B0);
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 144))(v7);
    v9 = *(_BYTE *)(this + 32);
    v10 = (v9 & 4) != 0 || v8 != a2;
    *(_BYTE *)(this + 32) = v9 ^ (v9 ^ (4 * v10)) & 4;
    v11 = sub_10237C80(dword_103FD3B0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 768))(v11, *(_DWORD *)(this + 4));
    v12 = sub_10237C80(dword_103FD3B0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 156))(v12, a2);
  }
  *(_BYTE *)(this + 32) |= 1u;
  sub_1025D700(this);
}
