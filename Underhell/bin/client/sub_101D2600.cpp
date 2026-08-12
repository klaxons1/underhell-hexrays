int __stdcall sub_101D2600(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // ecx
  unsigned __int8 *v5; // eax
  int v6; // ebp
  unsigned int v7; // ebx
  int v8; // ebp
  unsigned int v9; // ebx
  int v10; // ebp
  int v12; // [esp+10h] [ebp-40h] BYREF
  _BYTE v13[4]; // [esp+15h] [ebp-3Bh] BYREF
  _BYTE v14[55]; // [esp+19h] [ebp-37h] BYREF

  v4 = 0;
  v5 = (unsigned __int8 *)(a4 + 3);
  do
  {
    v6 = v5[4];
    *(_DWORD *)&v13[4 * v4 - 3] = *(v5 - 2) | ((*v5 | ((*(v5 - 1) | 0xFFFFFF00) << 8)) << 8);
    v7 = v5[2] | ((v6 | ((v5[3] | 0xFFFFFF00) << 8)) << 8);
    v8 = v5[8];
    *(_DWORD *)&v13[(_DWORD)v5 - 2 - a4] = v7;
    v9 = v5[6] | ((v8 | ((v5[7] | 0xFFFFFF00) << 8)) << 8);
    v10 = v5[12];
    *(_DWORD *)&v13[(_DWORD)v5 - a4] = v9;
    *(_DWORD *)&v14[(_DWORD)v5 - a4] = v5[10] | ((v10 | ((v5[11] | 0xFFFFFF00) << 8)) << 8);
    v4 += 4;
    v5 += 16;
  }
  while ( v4 < 0x10 );
  return (*(int (__thiscall **)(int, int, int, int, int, int *))(*(_DWORD *)a1 + 208))(a1, a2, a3, 4, 4, &v12);
}
