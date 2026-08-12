int __usercall sub_1013E360@<eax>(int *a1@<esi>)
{
  int v1; // edi
  int v2; // ecx
  int v4; // [esp+4h] [ebp-8h] BYREF
  int v5; // [esp+8h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int *, _DWORD))(*a1 + 24))(a1, 0);
  (*(void (__thiscall **)(int *, int *, int *))(*a1 + 32))(a1, &v4, &v5);
  (*(void (__thiscall **)(int *, _DWORD, _DWORD, int, int))(*a1 + 152))(a1, 0, 0, v4, v5);
  (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(*a1 + 288))(a1, 0, 0, 0);
  (*(void (__thiscall **)(int *, int, int, _DWORD))(*a1 + 48))(a1, 1, 1, 0);
  v1 = *a1;
  v2 = ((_BYTE)dword_1043BCA0 + 1) & 0x3F;
  dword_1043BCA0 = v2;
  (*(void (__thiscall **)(int *, int, int, int, int))(v1 + 152))(a1, v2 + v4 / 2, v5 / 2, 32, 32);
  (*(void (__thiscall **)(int *, int, int, int))(*a1 + 288))(a1, 255, 255, 255);
  (*(void (__thiscall **)(int *, int, int, _DWORD))(*a1 + 48))(a1, 1, 1, 0);
  (*(void (__thiscall **)(int *, int, int, int, int))(*a1 + 152))(a1, 64, 64, 32, 32);
  (*(void (__thiscall **)(int *, int, int, _DWORD))(*a1 + 48))(a1, 1, 1, 0);
  (*(void (__thiscall **)(int *, int, int, int, int))(*a1 + 152))(a1, v4 - 96, 64, 32, 32);
  (*(void (__thiscall **)(int *, int, int, _DWORD))(*a1 + 48))(a1, 1, 1, 0);
  (*(void (__thiscall **)(int *, int, int, int, int))(*a1 + 152))(a1, v4 - 96, v5 - 96, 32, 32);
  (*(void (__thiscall **)(int *, int, int, _DWORD))(*a1 + 48))(a1, 1, 1, 0);
  (*(void (__thiscall **)(int *, int, int, int, int))(*a1 + 152))(a1, 64, v5 - 96, 32, 32);
  (*(void (__thiscall **)(int *, int, int, _DWORD))(*a1 + 48))(a1, 1, 1, 0);
  return (*(int (__thiscall **)(int *, _DWORD, _DWORD, int, int))(*a1 + 152))(a1, 0, 0, v4, v5);
}
