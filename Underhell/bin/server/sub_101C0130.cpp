double __cdecl sub_101C0130(int a1, int a2, float a3, char a4)
{
  double v4; // st7
  int v5; // esi
  float *v6; // ecx
  double v8; // [esp+8h] [ebp-10h]

  if ( !a1 )
    return 0.0;
  v4 = a3;
  v5 = 0;
  if ( a2 < 4 )
  {
LABEL_9:
    while ( v5 < a2 )
    {
      if ( v4 < *(float *)(a1 + 8 * v5) )
        break;
      ++v5;
    }
  }
  else
  {
    v6 = (float *)(a1 + 16);
    while ( v4 >= *(v6 - 4) )
    {
      if ( v4 < *(v6 - 2) )
      {
        ++v5;
        break;
      }
      if ( v4 < *v6 )
      {
        v5 += 2;
        break;
      }
      if ( v4 < v6[2] )
      {
        v5 += 3;
        break;
      }
      v5 += 4;
      v6 += 8;
      if ( v5 >= a2 - 3 )
        goto LABEL_9;
    }
  }
  if ( v5 <= 0 )
    return 0.0;
  if ( a4 )
  {
    v8 = off_10689708(a3);
    Msg("Damage %.0f, energy %.0f\n", *(float *)(a1 + 8 * v5 - 4), v8);
  }
  return *(float *)(a1 + 8 * v5 - 4);
}
