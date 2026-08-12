int __stdcall sub_101D2950(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // ecx
  int result; // eax
  unsigned __int16 v6; // dx
  int v7; // ebx
  int v8; // edx
  int v9; // ebx
  int v10; // edx
  int v11; // ebx
  _BYTE v12[14]; // [esp+14h] [ebp-4Eh]
  char v13; // [esp+22h] [ebp-40h] BYREF
  _BYTE v15[2]; // [esp+24h] [ebp-3Eh] BYREF
  char v16; // [esp+26h] [ebp-3Ch] BYREF
  _BYTE v18[58]; // [esp+28h] [ebp-3Ah] BYREF

  (*(void (__thiscall **)(int, int, int, int, int, char *))(*(_DWORD *)a1 + 188))(a1, a2, a3, 4, 4, &v13);
  v4 = 0;
  result = a4 + 8;
  do
  {
    HIBYTE(v6) = v15[4 * v4 - 1];
    v7 = (unsigned __int8)*(&v13 + 4 * v4);
    v4 += 4;
    result += 16;
    LOBYTE(v6) = v12[4 * v4];
    v8 = v7 | (v6 << 16);
    v9 = (unsigned __int8)v12[4 * v4 + 2];
    *(_DWORD *)(result - 24) = v8;
    BYTE1(v8) = v12[4 * v4 + 3];
    LOBYTE(v8) = v12[4 * v4 + 4];
    v10 = v9 | ((unsigned __int16)v8 << 16);
    v11 = (unsigned __int8)*(&v13 + result - a4 - 16);
    *(_DWORD *)(result - 20) = v10;
    BYTE1(v10) = v15[result - 1 - a4 - 16];
    LOBYTE(v10) = v15[result - a4 - 16];
    *(_DWORD *)(result - 16) = v11 | ((unsigned __int16)v10 << 16);
    BYTE1(v10) = v18[result - 1 - a4 - 16];
    LOBYTE(v10) = v18[result - a4 - 16];
    *(_DWORD *)(result - 12) = (unsigned __int8)*(&v16 + result - a4 - 16) | ((unsigned __int16)v10 << 16);
  }
  while ( v4 < 0x10 );
  return result;
}
