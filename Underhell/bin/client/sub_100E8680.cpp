int __thiscall sub_100E8680(int *this, int a2, float a3, float a4)
{
  int v5; // eax
  void (__thiscall *v6)(void *, int, float *, _DWORD, _DWORD); // edx
  int v7; // eax
  void (__thiscall *v8)(void *, int, float *, _DWORD, _DWORD); // edx
  int v9; // eax
  void (__thiscall *v10)(void *, int, float *, _DWORD, _DWORD); // edx
  int v11; // eax
  int v12; // eax
  int (__thiscall *v13)(void *, int, float *, _DWORD, _DWORD); // edx
  float v15; // [esp+60h] [ebp-Ch] BYREF
  float v16; // [esp+64h] [ebp-8h]
  float v17; // [esp+68h] [ebp-4h]

  v15 = 1.0;
  v16 = 0.0;
  v17 = 0.0;
  (*(void (__thiscall **)(int *, int, float *, _DWORD, _DWORD))(*this + 8))(this, a2, &v15, LODWORD(a3), LODWORD(a4));
  v5 = *this;
  v15 = -1.0;
  v6 = *(void (__thiscall **)(void *, int, float *, _DWORD, _DWORD))(v5 + 8);
  v16 = 0.0;
  v17 = 0.0;
  v6(this, a2, &v15, LODWORD(a3), LODWORD(a4));
  v7 = *this;
  v15 = 0.0;
  v8 = *(void (__thiscall **)(void *, int, float *, _DWORD, _DWORD))(v7 + 8);
  v16 = 1.0;
  v17 = 0.0;
  v8(this, a2, &v15, LODWORD(a3), LODWORD(a4));
  v9 = *this;
  v15 = 0.0;
  v10 = *(void (__thiscall **)(void *, int, float *, _DWORD, _DWORD))(v9 + 8);
  v16 = -1.0;
  v17 = 0.0;
  v10(this, a2, &v15, LODWORD(a3), LODWORD(a4));
  v11 = *this;
  v15 = 0.0;
  v16 = 0.0;
  v17 = 1.0;
  (*(void (__thiscall **)(int *, int, float *, _DWORD, _DWORD))(v11 + 8))(this, a2, &v15, LODWORD(a3), LODWORD(a4));
  v12 = *this;
  v15 = 0.0;
  v13 = *(int (__thiscall **)(void *, int, float *, _DWORD, _DWORD))(v12 + 8);
  v16 = 0.0;
  v17 = -1.0;
  return v13(this, a2, &v15, LODWORD(a3), LODWORD(a4));
}
