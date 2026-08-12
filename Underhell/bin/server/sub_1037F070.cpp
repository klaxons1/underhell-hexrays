float *__stdcall sub_1037F070(int a1, float *a2)
{
  float *v2; // eax
  double v3; // st7
  double v4; // st6
  double v5; // st5
  float *result; // eax
  double v7; // st5
  _BYTE v8[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v2 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 504))(a1, v8);
  v3 = *v2 - *(float *)(a1 + 580);
  v4 = v2[1] - *(float *)(a1 + 584);
  v5 = v2[2];
  result = a2;
  v7 = v5 - *(float *)(a1 + 588);
  *a2 = v3 + *a2;
  a2[1] = v4 + a2[1];
  a2[2] = v7 + a2[2];
  return result;
}
