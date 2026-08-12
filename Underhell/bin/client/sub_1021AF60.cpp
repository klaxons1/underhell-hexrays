void __thiscall sub_1021AF60(int this, int a2, float a3, int a4)
{
  double v5; // st6
  double v6; // st7
  int i; // ebx
  int v8; // ecx
  float *v9; // ebp
  double v10; // st7
  float v11; // [esp+24h] [ebp-8h]
  float v12; // [esp+28h] [ebp-4h]

  v12 = *(float *)(this + 60);
  v11 = *(float *)(this + 64);
  if ( ((1 << *(_DWORD *)(this + 48)) & 0x10080) != 0 )
  {
    if ( *(float *)(this + 60) <= 1.0 )
    {
      if ( *(float *)(this + 60) >= 0.0 )
        v12 = *(float *)(this + 60);
      else
        v12 = 0.0;
      v5 = 1.0;
      v6 = 0.0;
    }
    else
    {
      v5 = 1.0;
      v6 = 0.0;
      v12 = 1.0;
    }
    if ( v5 >= *(float *)(this + 64) )
    {
      if ( v6 <= *(float *)(this + 64) )
        v6 = *(float *)(this + 64);
    }
    else
    {
      v6 = v5;
    }
    v11 = v6;
  }
  for ( i = 0; i < *(_DWORD *)(a2 + 40); *v9 = (v10 - *v9) * a3 + *v9 )
  {
    v8 = i & 3;
    v9 = (float *)(*(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 48) + 6068)
                 + 4 * (v8 + i / 4 * *(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 48) + 6324)));
    v10 = sub_100260E0(
            *(float *)(*(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 44) + 6068)
                     + 4 * (v8 + i / 4 * *(_DWORD *)(a2 + 4 * *(_DWORD *)(this + 44) + 6324))),
            *(float *)(this + 52),
            *(float *)(this + 56),
            v12,
            v11);
    ++i;
  }
}
