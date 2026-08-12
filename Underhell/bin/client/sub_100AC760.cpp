bool __thiscall sub_100AC760(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ebx
  int (__thiscall *v6)(_DWORD *, _DWORD, int, int); // edx
  int v7; // eax
  int v8; // eax
  char v9; // bl
  int v10; // edi
  int v11; // eax
  _BYTE v13[84]; // [esp+Ch] [ebp-60h] BYREF
  _DWORD v14[2]; // [esp+60h] [ebp-Ch] BYREF
  float v15; // [esp+68h] [ebp-4h]

  v3 = this[2];
  v4 = *(_DWORD *)(v3 + 152);
  v5 = *this;
  v3 += 152;
  v14[0] = v4;
  v14[1] = *(_DWORD *)(v3 + 4);
  v15 = *(float *)(v3 + 8);
  v6 = *(int (__thiscall **)(_DWORD *, _DWORD, int, int))(v5 + 44);
  v15 = v15 - 36.0;
  v7 = v6(this, 0, 8, a2);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD *, int))(v5 + 40))(this, v3, v14, v7);
  if ( *(float *)(a2 + 44) >= 1.0 )
    return 0;
  v8 = this[1];
  v15 = *(float *)(a2 + 44) * -36.0 + *(float *)(this[2] + 160);
  v9 = *(_BYTE *)(v8 + 3528);
  *(_BYTE *)(v8 + 3528) = 0;
  v10 = *this;
  v11 = (*(int (__thiscall **)(_DWORD *, _DWORD, int, _BYTE *))(*this + 44))(this, 0, 8, v13);
  (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD *, int))(v10 + 40))(this, v14, v14, v11);
  *(_BYTE *)(this[1] + 3528) = v9;
  return !v13[55];
}
