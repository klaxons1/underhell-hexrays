void __thiscall sub_1001B970(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  double v6; // st7
  double v7; // st6
  float *v8; // esi
  double v9; // rt0
  double v10; // rt1
  double v11; // st6
  double v12; // st7

  v3 = sub_10019C80((_DWORD *)(this + 3748), a2);
  if ( v3 != -1 )
  {
    if ( *(_DWORD *)(this + 3760) - v3 - 1 > 0 )
      memcpy(
        (void *)(*(_DWORD *)(this + 3748) + 36 * v3),
        (const void *)(*(_DWORD *)(this + 3748) + 36 * v3 + 36),
        36 * (*(_DWORD *)(this + 3760) - v3 - 1));
    --*(_DWORD *)(this + 3760);
  }
  v4 = sub_10019C80((_DWORD *)(this + 3788), a2);
  if ( v4 != -1 )
  {
    if ( *(_DWORD *)(this + 3800) - v4 - 1 > 0 )
      memcpy(
        (void *)(*(_DWORD *)(this + 3788) + 36 * v4),
        (const void *)(*(_DWORD *)(this + 3788) + 36 * v4 + 36),
        36 * (*(_DWORD *)(this + 3800) - v4 - 1));
    --*(_DWORD *)(this + 3800);
    v5 = 0;
    v6 = *(float *)(dword_106B31C8 + 12) + 1.0;
    *(float *)(this + 3808) = v6;
    if ( *(int *)(this + 3800) > 0 )
    {
      v7 = 0.4;
      v8 = (float *)(*(_DWORD *)(this + 3788) + 24);
      while ( 1 )
      {
        v10 = v7;
        v11 = v6;
        v12 = v10;
        if ( v11 < *v8 )
        {
          v11 = *v8 + v12;
          *(float *)(this + 3808) = v11;
        }
        ++v5;
        v8 += 9;
        if ( v5 >= *(_DWORD *)(this + 3800) )
          break;
        v9 = v11;
        v7 = v12;
        v6 = v9;
      }
    }
  }
}
