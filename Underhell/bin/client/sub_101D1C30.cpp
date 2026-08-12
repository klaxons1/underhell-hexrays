int __stdcall sub_101D1C30(int a1, int a2, int a3, int a4)
{
  float *v4; // ecx
  int result; // eax
  int v6; // esi
  double v7; // st6
  _BYTE v8[256]; // [esp+14h] [ebp-100h] BYREF

  (*(void (__thiscall **)(int, int, int, int, int, _BYTE *))(*(_DWORD *)a1 + 176))(a1, a2, a3, 4, 4, v8);
  v4 = (float *)v8;
  result = a4 + 4;
  v6 = 16;
  do
  {
    *(float *)(result + 4) = 0.0;
    v4 += 4;
    v7 = *(float *)&v8[result - a4];
    result += 16;
    --v6;
    *(float *)(result - 16) = v7;
    *(float *)(result - 20) = 0.0;
    *(float *)(result - 8) = *(v4 - 4);
  }
  while ( v6 );
  return result;
}
