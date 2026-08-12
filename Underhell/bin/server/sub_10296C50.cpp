char __thiscall sub_10296C50(_DWORD *this, int a2)
{
  float *v3; // eax
  int v4; // edi
  int v5; // edx
  double v6; // st7
  float *v7; // ecx
  double v8; // st6
  double v9; // st5

  v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 576))(a2);
  v4 = this[27];
  v5 = 0;
  if ( v4 <= 0 )
    return 0;
  v6 = v3[2];
  v7 = (float *)this[24];
  v8 = v3[1];
  v9 = *v3;
  while ( v9 <= *v7 || v7[1] >= v8 || v7[2] >= v6 || v9 >= v7[3] || v7[4] <= v8 || v7[5] <= v6 )
  {
    ++v5;
    v7 += 6;
    if ( v5 >= v4 )
      return 0;
  }
  return 1;
}
