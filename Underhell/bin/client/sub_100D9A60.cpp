void __stdcall sub_100D9A60(float *a1, float *a2)
{
  double v4; // st7
  long double v5; // st7
  float v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+Ch] [ebp-4h]
  float v8; // [esp+18h] [ebp+8h]
  float v9; // [esp+1Ch] [ebp+Ch]

  v7 = *a1;
  v8 = *a2;
  if ( 0.0 == sub_100B3A10((float *)&dword_1042FB78) )
    v4 = *(float *)(dword_10433B3C + 44);
  else
    v4 = sub_100B3A10((float *)&dword_1042FB78);
  if ( *(_DWORD *)(dword_10433AF4 + 48) )
  {
    v6 = *(float *)(dword_1043398C + 44);
    v9 = v4;
    v5 = pow(sqrt(v8 * v8 + v7 * v7), *(float *)(dword_10433824 + 44)) * *(float *)(dword_10433AAC + 44) + v9;
    if ( v6 > 0.000099999997 && v6 < v5 )
      v5 = v6;
    *a1 = *a1 * v5;
    *a2 = v5 * *a2;
    if ( *(_DWORD *)(dword_10433AF4 + 48) == 2 )
    {
      *a1 = *(float *)(dword_10433A64 + 44) * *a1;
      *a2 = ((double (__thiscall *)(int *))*(_DWORD *)(*off_103E0EB8 + 64))(off_103E0EB8) * *a2;
    }
  }
  else
  {
    *a1 = *a1 * v4;
    *a2 = v4 * *a2;
  }
}
