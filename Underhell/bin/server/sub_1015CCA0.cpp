bool __thiscall sub_1015CCA0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // ebx
  int (__thiscall *v6)(_DWORD *, _DWORD, int, int); // edx
  int v7; // eax
  _BYTE *v8; // edi
  char v9; // bl
  int v10; // edi
  int v11; // eax
  _BYTE *v12; // esi
  _BYTE v14[84]; // [esp+Ch] [ebp-60h] BYREF
  _DWORD v15[2]; // [esp+60h] [ebp-Ch] BYREF
  float v16; // [esp+68h] [ebp-4h]

  v3 = this[2];
  v4 = *(_DWORD *)(v3 + 152);
  v5 = *this;
  v3 += 152;
  v15[0] = v4;
  v15[1] = *(_DWORD *)(v3 + 4);
  v16 = *(float *)(v3 + 8);
  v6 = *(int (__thiscall **)(_DWORD *, _DWORD, int, int))(v5 + 44);
  v16 = v16 - 36.0;
  v7 = v6(this, 0, 8, a2);
  (*(void (__thiscall **)(_DWORD *, int, _DWORD *, int))(v5 + 40))(this, v3, v15, v7);
  if ( *(float *)(a2 + 44) >= 1.0 )
    return 0;
  v8 = (_BYTE *)(this[1] + 2272);
  v16 = *(float *)(a2 + 44) * -36.0 + *(float *)(this[2] + 160);
  v9 = *v8;
  if ( *v8 )
  {
    (**((void (__thiscall ***)(int, _BYTE *))v8 - 20))((int)(v8 - 80), v8);
    *v8 = 0;
  }
  v10 = *this;
  v11 = (*(int (__thiscall **)(_DWORD *, _DWORD, int, _BYTE *))(*this + 44))(this, 0, 8, v14);
  (*(void (__thiscall **)(_DWORD *, _DWORD *, _DWORD *, int))(v10 + 40))(this, v15, v15, v11);
  v12 = (_BYTE *)(this[1] + 2272);
  if ( v9 != *v12 )
  {
    (**((void (__thiscall ***)(int, _BYTE *))v12 - 20))((int)(v12 - 80), v12);
    *v12 = v9;
  }
  return !v14[55];
}
