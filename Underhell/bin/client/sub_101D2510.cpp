int __stdcall sub_101D2510(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // ecx
  int result; // eax
  unsigned __int16 v6; // dx
  int v7; // ebx
  int v8; // ebx
  _BYTE v9[14]; // [esp+14h] [ebp-4Eh]
  char v10; // [esp+22h] [ebp-40h] BYREF
  _BYTE v12[2]; // [esp+24h] [ebp-3Eh] BYREF
  char v13; // [esp+26h] [ebp-3Ch] BYREF
  _BYTE v15[58]; // [esp+28h] [ebp-3Ah] BYREF

  (*(void (__thiscall **)(int, int, int, int, int, char *))(*(_DWORD *)a1 + 188))(a1, a2, a3, 4, 4, &v10);
  v4 = 0;
  result = a4 + 8;
  do
  {
    HIBYTE(v6) = v12[4 * v4 - 1];
    v7 = (unsigned __int8)*(&v10 + 4 * v4);
    v4 += 4;
    result += 16;
    LOBYTE(v6) = v9[4 * v4];
    *(_DWORD *)(result - 24) = (v7 | (v6 << 8)) << 8;
    HIBYTE(v6) = v9[4 * v4 + 3];
    LOBYTE(v6) = v9[4 * v4 + 4];
    v8 = (unsigned __int8)*(&v10 + result - a4 - 16);
    *(_DWORD *)(result - 20) = ((unsigned __int8)v9[4 * v4 + 2] | (v6 << 8)) << 8;
    HIBYTE(v6) = v12[result - 1 - a4 - 16];
    LOBYTE(v6) = v12[result - a4 - 16];
    *(_DWORD *)(result - 16) = (v8 | (v6 << 8)) << 8;
    HIBYTE(v6) = v15[result - 1 - a4 - 16];
    LOBYTE(v6) = v15[result - a4 - 16];
    *(_DWORD *)(result - 12) = ((unsigned __int8)*(&v13 + result - a4 - 16) | (v6 << 8)) << 8;
  }
  while ( v4 < 0x10 );
  return result;
}
