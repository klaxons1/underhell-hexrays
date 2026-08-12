int __stdcall sub_101D2B10(int a1, int a2, int a3, int a4)
{
  float *v4; // ecx
  int result; // eax
  int v6; // edi
  _BYTE v7[4]; // [esp+14h] [ebp-100h] BYREF
  _BYTE v8[252]; // [esp+18h] [ebp-FCh] BYREF

  (*(void (__thiscall **)(int, int, int, int, int, _BYTE *))(*(_DWORD *)a1 + 176))(a1, a2, a3, 4, 4, v7);
  v4 = (float *)v7;
  result = a4 + 4;
  v6 = 16;
  do
  {
    v4 += 4;
    *(float *)(result + 4) = *(float *)&v8[result - a4];
    result += 16;
    --v6;
    *(float *)(result - 16) = 0.0;
    *(float *)(result - 20) = *(v4 - 4);
    *(float *)(result - 8) = *(float *)&v7[result - a4 - 16];
  }
  while ( v6 );
  return result;
}
