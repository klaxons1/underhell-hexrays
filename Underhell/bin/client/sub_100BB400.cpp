int __thiscall sub_100BB400(int *this, int a2)
{
  int *v3; // edi
  int v4; // ebx
  _DWORD *v5; // eax
  void (__thiscall *v6)(void *, int); // edx
  int v7; // ebx
  int (__thiscall *v8)(void *, _BYTE *); // edx
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _BYTE v12[4]; // [esp+Ch] [ebp-Ch] BYREF
  _BYTE v13[4]; // [esp+10h] [ebp-8h] BYREF
  __int16 v14; // [esp+14h] [ebp-4h] BYREF
  char v15; // [esp+16h] [ebp-2h]

  (*(void (__thiscall **)(int *, const char *, _DWORD, _DWORD))(*this + 768))(this, "resource/UI/ChatFilters.res", 0, 0);
  v3 = (int *)a2;
  sub_10241570(a2);
  v4 = *v3;
  v5 = (_DWORD *)(*(int (__thiscall **)(int *, int *))(*this + 224))(this, &a2);
  (*(void (__thiscall **)(int *, __int16 *, const char *, _DWORD))(v4 + 20))(v3, &v14, "DullWhite", *v5);
  v6 = *(void (__thiscall **)(void *, int))(*this + 216);
  LOWORD(a2) = v14;
  BYTE2(a2) = v15;
  HIBYTE(a2) = 127;
  v6(this, a2);
  v7 = *this;
  v8 = *(int (__thiscall **)(void *, _BYTE *))(*this + 228);
  a2 = *v3;
  v9 = (_DWORD *)v8(this, v13);
  v10 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *, const char *, _DWORD))(a2 + 20))(v3, v12, "Blank", *v9);
  return (*(int (__thiscall **)(int *, _DWORD))(v7 + 220))(this, *v10);
}
