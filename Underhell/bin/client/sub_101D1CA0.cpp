int __stdcall sub_101D1CA0(int a1, int a2, int a3, int a4)
{
  int v4; // ecx
  float *v5; // eax
  int v6; // esi
  _BYTE v8[4]; // [esp+4h] [ebp-100h] BYREF
  char v9; // [esp+8h] [ebp-FCh] BYREF

  v4 = a4 + 12;
  v5 = (float *)&v9;
  v6 = 16;
  do
  {
    v5 += 4;
    *(v5 - 3) = 0.0;
    v4 += 16;
    --v6;
    *(v5 - 4) = *(float *)(v4 - 24);
    *(v5 - 5) = *(float *)(v4 - 16);
    *(float *)&v8[v4 - a4 - 16] = 1.0;
  }
  while ( v6 );
  return (*(int (__thiscall **)(int, int, int, int, int, _BYTE *))(*(_DWORD *)a1 + 196))(a1, a2, a3, 4, 4, v8);
}
