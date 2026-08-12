int __thiscall sub_101B6DB0(_DWORD *this, int a2, float a3)
{
  int result; // eax
  int i; // esi
  double v6; // st7
  double v7; // st5
  double v8; // st4
  double v9; // st4
  double v10; // st1
  double v11; // st5
  double v12; // st7
  float v13[3]; // [esp+8h] [ebp-18h] BYREF
  float v14[3]; // [esp+14h] [ebp-Ch] BYREF

  result = 9 * a2;
  for ( i = this[67] + 36 * a2; !*(_WORD *)(i + 34); i = this[67] + 36 * (__int16)result )
  {
    *(_WORD *)(i + 34) = 1;
    if ( a3 > 0.0 )
    {
      (*(void (__thiscall **)(_DWORD, float *, float *))(**(_DWORD **)(i + 24) + 204))(*(_DWORD *)(i + 24), v14, v13);
      v6 = 1.0 - a3;
      v7 = v6 * v14[1] + *(float *)(i + 4) * a3;
      v8 = v6 * v14[2] + *(float *)(i + 8) * a3;
      *(float *)i = v14[0] * v6 + *(float *)i * a3;
      *(float *)(i + 4) = v7;
      *(float *)(i + 8) = v8;
      v9 = v6 * v13[2];
      v10 = *(float *)(i + 20);
      v11 = v6 * v13[0] + a3 * *(float *)(i + 12);
      v12 = v6 * v13[1] + *(float *)(i + 16) * a3;
      *(float *)(i + 12) = v11;
      *(float *)(i + 16) = v12;
      *(float *)(i + 20) = a3 * v10 + v9;
      (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(i + 24) + 196))(*(_DWORD *)(i + 24), i, i + 12);
    }
    result = *(unsigned __int16 *)(i + 32);
    if ( (result & 0x8000u) != 0 )
      break;
    result = (__int16)result;
  }
  return result;
}
