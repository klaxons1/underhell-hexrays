float *__thiscall sub_101FE8B0(char *this, float *a2, float *a3, char a4, int a5)
{
  float *v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st7
  double v10; // st4
  double v11; // st3
  double v12; // st2
  double v13; // st4
  double v14; // st1
  float *v15; // eax
  double v16; // st1
  float *result; // eax
  int v18; // ecx
  float v19; // [esp+0h] [ebp-Ch]
  float v20; // [esp+4h] [ebp-8h]

  if ( a4 )
  {
    v5 = (float *)&this[68 * a5];
    v6 = a3[2];
    v7 = v5[31] * v6;
    v8 = v5[32] * v6;
    v9 = v6 * v5[33];
    v10 = a3[1];
    v11 = v5[28] * v10;
    v12 = v5[29] * v10;
    v13 = v10 * v5[30];
    v14 = *a3;
    v15 = (float *)&this[68 * a5 + 136];
    v19 = *v15 * v14;
    v20 = v15[1] * v14;
    v16 = v14 * v15[2];
    result = a2;
    *a2 = v7 + v11 + v19;
    a2[1] = v8 + v12 + v20;
    a2[2] = v9 + v13 + v16;
  }
  else
  {
    result = a2;
    *a2 = *a3;
    v18 = *((_DWORD *)a3 + 2);
    a2[1] = a3[1];
    *((_DWORD *)a2 + 2) = v18;
  }
  return result;
}
