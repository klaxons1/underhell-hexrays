char __thiscall sub_1005FF30(_DWORD *this, int a2, float *a3)
{
  int v3; // eax
  char result; // al
  float *v5; // eax
  float *v6; // ecx
  double v7; // st7
  int v8; // ecx
  int v9; // eax
  double v10; // st7
  int v11; // eax

  v3 = this[317];
  if ( a2 != 1 && a2 != 2 || v3 < 2 )
    return 0;
  if ( a2 == 1 )
  {
    v5 = (float *)this[316];
    v6 = a3;
    *a3 = v5[6];
    a3[1] = v5[7];
    v7 = v5[8];
  }
  else
  {
    v8 = this[316];
    v9 = 9 * v3;
    v10 = *(float *)(v8 + 4 * v9 - 12);
    v11 = v8 + 4 * v9 - 12;
    v6 = a3;
    *a3 = v10;
    a3[1] = *(float *)(v11 + 4);
    v7 = *(float *)(v11 + 8);
  }
  result = 1;
  v6[2] = v7;
  return result;
}
