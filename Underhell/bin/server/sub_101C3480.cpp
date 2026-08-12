char __thiscall sub_101C3480(void *this, _DWORD *a2)
{
  int (__thiscall *v3)(_DWORD *); // edx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  _BYTE v8[84]; // [esp+Ch] [ebp-58h] BYREF
  void *v9; // [esp+60h] [ebp-4h]
  int v10; // [esp+6Ch] [ebp+8h]

  v3 = *(int (__thiscall **)(_DWORD *))(*a2 + 12);
  v9 = this;
  v4 = v3(a2);
  if ( (a2[63] & 0x800) != 0 )
    sub_100DAE60((int)a2);
  if ( (a2[63] & 0x800) != 0 )
    sub_100DAE60((int)a2);
  v10 = *(_DWORD *)dword_106B31F4;
  v5 = (*(int (__thiscall **)(_DWORD *, int, _BYTE *))(*a2 + 636))(a2, (int)v9 + 12, v8);
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 36))(v4, v5);
  (*(void (__thiscall **)(int, int, _DWORD *, _DWORD *, int))(v10 + 32))(dword_106B31F4, v4, a2 + 145, a2 + 145, v6);
  return v8[55];
}
