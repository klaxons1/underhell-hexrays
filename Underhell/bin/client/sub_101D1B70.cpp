int __stdcall sub_101D1B70(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // ecx
  unsigned __int8 *v5; // eax
  int v6; // ebp
  unsigned int v7; // ebx
  int v8; // ebp
  unsigned int v9; // ebx
  int v10; // ebp
  int v12; // [esp+10h] [ebp-40h] BYREF
  _BYTE v13[4]; // [esp+17h] [ebp-39h] BYREF
  _BYTE v14[53]; // [esp+1Bh] [ebp-35h] BYREF

  v4 = 0;
  v5 = (unsigned __int8 *)(a4 + 1);
  do
  {
    v6 = v5[4];
    *(_DWORD *)&v13[4 * v4 - 1] = (*v5 | ((v5[2] | 0xFFFFFF00) << 8)) << 8;
    v7 = v6 | ((v5[6] | 0xFFFFFF00) << 8);
    v8 = v5[8];
    *(_DWORD *)&v5[(_DWORD)(v13 - a4 + 2)] = v7 << 8;
    v9 = v8 | ((v5[10] | 0xFFFFFF00) << 8);
    v10 = v5[12];
    *(_DWORD *)&v13[(_DWORD)v5 - a4] = v9 << 8;
    *(_DWORD *)&v14[(_DWORD)v5 - a4] = (v10 | ((v5[14] | 0xFFFFFF00) << 8)) << 8;
    v4 += 4;
    v5 += 16;
  }
  while ( v4 < 0x10 );
  return (*(int (__thiscall **)(int, int, int, int, int, int *))(*(_DWORD *)a1 + 208))(a1, a2, a3, 4, 4, &v12);
}
