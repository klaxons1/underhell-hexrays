int __cdecl sub_101ADAF0(int a1, int a2, int a3, int a4, int a5)
{
  _BYTE v7[12]; // [esp+4h] [ebp-24h] BYREF
  _BYTE v8[12]; // [esp+10h] [ebp-18h] BYREF
  _BYTE v9[12]; // [esp+1Ch] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 220))(a1, v9, a3);
  (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 228))(a1, v8, a2);
  (*(void (__thiscall **)(int, _BYTE *, _BYTE *, _BYTE *, int))(*(_DWORD *)a1 + 252))(a1, v8, v9, v7, a5);
  return (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)a1 + 232))(a1, a4, v7);
}
