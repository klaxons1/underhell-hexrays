float *__stdcall sub_100607C0(float *a1, int a2, float *a3, float *a4, float a5)
{
  double v6; // st6
  double v7; // st5
  double v8; // st7
  float *result; // eax
  int v10; // edx
  int v11; // ecx
  double v12; // st7
  float v13; // [esp+14h] [ebp-Ch]
  float v14; // [esp+18h] [ebp-8h]
  float v15; // [esp+1Ch] [ebp-4h]
  int v16; // [esp+30h] [ebp+10h]

  v13 = *a3 - *a4;
  v6 = a3[1] - a4[1];
  v7 = a3[2] - a4[2];
  *(float *)&v16 = off_103EDFEC();
  v8 = off_103EDFEC();
  result = a1;
  if ( a5 + 1.0 <= v8 )
  {
    v12 = a5 / v8;
    *a1 = v13 * *(float *)&v16 * v12 + *a4;
    v14 = v6;
    a1[1] = v14 * *(float *)&v16 * v12 + a4[1];
    v15 = v7;
    a1[2] = v12 * (*(float *)&v16 * v15) + a4[2];
  }
  else
  {
    v10 = *((_DWORD *)a3 + 1);
    *a1 = *a3;
    v11 = *((_DWORD *)a3 + 2);
    *((_DWORD *)a1 + 1) = v10;
    *((_DWORD *)a1 + 2) = v11;
  }
  return result;
}
