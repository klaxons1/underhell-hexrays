int __stdcall sub_1001FB30(float *a1, float a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // esi
  float *v5; // eax
  double v6; // st6
  double v7; // st5
  float v9; // [esp+0h] [ebp-10h]

  v2 = 1;
  if ( *(int *)(dword_106B31C8 + 20) < 1 )
    return 0;
  while ( 1 )
  {
    v3 = sub_1025FB50(v2);
    v4 = v3;
    if ( v3 )
    {
      v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 576))(v3);
      v6 = a1[1] - v5[1];
      v7 = *a1 - *v5;
      v9 = v7 * v7 + v6 * v6;
      if ( off_10689708(v9) <= a2 )
        break;
    }
    if ( ++v2 > *(_DWORD *)(dword_106B31C8 + 20) )
      return 0;
  }
  return v4;
}
