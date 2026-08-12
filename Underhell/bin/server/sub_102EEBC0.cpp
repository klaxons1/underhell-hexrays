void __stdcall sub_102EEBC0(int a1, int a2, int a3, int a4)
{
  double v4; // st7
  unsigned int i; // esi
  double v7; // st6
  float *v8; // ecx
  double v9; // st6
  float *v10; // esi
  unsigned int j; // edi
  float v12; // [esp+30h] [ebp+Ch]

  v4 = 1.0;
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      if ( !*(_BYTE *)(a2 + 2329) )
      {
        *(float *)(a4 + 20) = v4;
        goto LABEL_8;
      }
      v12 = *(float *)(dword_106E0B44 + 44);
      *(float *)(a4 + 20) = ((double)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1572))(a2)
                           + (double)*(int *)(a4 + 28) * v12)
                          * 0.0099999998;
    }
    else
    {
      *(float *)(a4 + 4) = ((double)*(int *)(a4 + 12) * *(float *)(dword_106E24BC + 44) + (double)*(int *)(a2 + 220))
                         / (double)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 448))(a2);
    }
    v4 = 1.0;
LABEL_8:
    v7 = *(float *)(a1 + 4 * i + 804) * *(float *)(dword_106E23E4 + 44);
    v8 = (float *)(a4 + 16 * i);
    *v8 = v7;
    v9 = v7 - v8[1];
    v8[2] = v9;
    if ( v9 <= v4 )
    {
      if ( v9 < 0.0 )
        v9 = 0.0;
    }
    else
    {
      v9 = v4;
    }
    v8[2] = v9;
  }
  if ( a3 )
  {
    Msg("Calculating desired health ratios & deltas:\n");
    v10 = (float *)(a4 + 4);
    for ( j = 0; j < 8; j += 4 )
    {
      Msg("   %s Desired Ratio: %.2f, Current Ratio: %.2f = Delta of %.2f\n", off_10668E28[j], *(v10 - 1), *v10, v10[1]);
      v10 += 4;
    }
  }
}
