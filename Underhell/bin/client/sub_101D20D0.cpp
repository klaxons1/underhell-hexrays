int *__stdcall sub_101D20D0(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // ecx
  int *result; // eax
  int v6; // ebp
  int v7; // edx
  int v8; // ebp
  int v9; // edx
  int v10; // ebp
  char v11; // [esp+14h] [ebp-40h] BYREF
  _BYTE v13[2]; // [esp+16h] [ebp-3Eh] BYREF
  char v14; // [esp+18h] [ebp-3Ch] BYREF
  unsigned __int8 v16[58]; // [esp+1Ah] [ebp-3Ah] BYREF

  (*(void (__thiscall **)(int, int, int, int, int, char *))(*(_DWORD *)a1 + 188))(a1, a2, a3, 4, 4, &v11);
  v4 = 0;
  result = (int *)(a4 + 8);
  do
  {
    v6 = v16[4 * v4];
    *(result - 2) = (unsigned __int8)*(&v11 + 4 * v4)
                  | (((unsigned __int8)v13[4 * v4] | ((unsigned __int8)v13[4 * v4 - 1] << 16)) << 8);
    v7 = (unsigned __int8)*(&v14 + 4 * v4) | ((v6 | (v16[4 * v4 - 1] << 16)) << 8);
    v8 = (unsigned __int8)v13[(_DWORD)result - a4];
    *(result - 1) = v7;
    v9 = *((unsigned __int8 *)result + (_DWORD)(&v11 - a4))
       | ((v8 | ((unsigned __int8)v13[(_DWORD)result - 1 - a4] << 16)) << 8);
    v10 = v16[(_DWORD)result - a4];
    *result = v9;
    result[1] = *((unsigned __int8 *)&v14 + (_DWORD)result - a4) | ((v10 | (v16[(_DWORD)result - 1 - a4] << 16)) << 8);
    v4 += 4;
    result += 4;
  }
  while ( v4 < 0x10 );
  return result;
}
