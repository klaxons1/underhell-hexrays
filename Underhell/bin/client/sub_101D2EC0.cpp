int __stdcall sub_101D2EC0(int a1, int a2, int a3, int a4)
{
  float *v4; // ecx
  int v5; // eax
  int v6; // edx
  double v7; // st6
  _BYTE v9[4]; // [esp+Ch] [ebp-100h] BYREF
  _BYTE v10[4]; // [esp+10h] [ebp-FCh] BYREF
  _BYTE v11[248]; // [esp+14h] [ebp-F8h] BYREF

  v4 = (float *)v9;
  v5 = a4 + 4;
  v6 = 16;
  do
  {
    v7 = *(float *)(v5 + 4);
    v5 += 16;
    *(float *)&v10[v5 - a4 - 16] = v7;
    v4 += 4;
    --v6;
    *(float *)&v9[v5 - a4 - 16] = *(float *)(v5 - 16);
    *(v4 - 4) = *(float *)(v5 - 8);
    *(float *)&v11[v5 - a4 - 16] = 0.0;
  }
  while ( v6 );
  return (*(int (__thiscall **)(int, int, int, int, int, _BYTE *))(*(_DWORD *)a1 + 196))(a1, a2, a3, 4, 4, v9);
}
