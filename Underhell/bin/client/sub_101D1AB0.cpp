_DWORD *__stdcall sub_101D1AB0(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // ecx
  _DWORD *result; // eax
  int v6; // ebp
  int v7; // edx
  int v8; // ebp
  int v9; // edx
  int v10; // ebp
  char v11; // [esp+14h] [ebp-40h] BYREF
  _BYTE v13[3]; // [esp+16h] [ebp-3Eh] BYREF
  unsigned __int8 v15[58]; // [esp+1Ah] [ebp-3Ah] BYREF

  (*(void (__thiscall **)(int, int, int, int, int, char *))(*(_DWORD *)a1 + 188))(a1, a2, a3, 4, 4, &v11);
  v4 = 0;
  result = (_DWORD *)(a4 + 8);
  do
  {
    v6 = v15[4 * v4 - 1];
    *(result - 2) = ((unsigned __int8)v13[4 * v4 - 1] | ((unsigned __int8)v13[4 * v4] << 16)) << 8;
    v7 = v6 | (v15[4 * v4] << 16);
    v8 = (unsigned __int8)v13[(_DWORD)result - 1 - a4];
    *(result - 1) = v7 << 8;
    v9 = v8 | ((unsigned __int8)v13[(_DWORD)result - a4] << 16);
    v10 = v15[(_DWORD)result - 1 - a4];
    *result = v9 << 8;
    result[1] = (v10 | (v15[(_DWORD)result - a4] << 16)) << 8;
    v4 += 4;
    result += 4;
  }
  while ( v4 < 0x10 );
  return result;
}
