char __thiscall sub_10169590(int this)
{
  double v1; // st7
  int v2; // esi
  double v3; // st7
  int v4; // eax
  int v5; // edx
  double v6; // st5
  double v7; // st4
  double v8; // st3
  double v9; // st5

  v1 = *((float *)off_103DC81C + 4) + *(float *)(this + 164);
  *(float *)(this + 164) = v1;
  if ( v1 >= 0.1 )
    return 0;
  v2 = 0;
  v3 = 1.0 - v1 * 10.0;
  if ( *(int *)(this + 136) > 0 )
  {
    v4 = this + 48;
    v5 = this + 176;
    do
    {
      ++v2;
      v6 = *(float *)(v5 - 8) * v3;
      v5 += 12;
      v4 += 24;
      v7 = *(float *)(v5 - 16) * v3;
      v8 = v6;
      v9 = *(float *)(v5 - 12) * v3;
      *(float *)(v4 - 32) = v8;
      *(float *)(v4 - 28) = v7;
      *(float *)(v4 - 24) = v9;
      *(float *)(v4 - 20) = *((float *)off_103DC81C + 4) * 16.0 + *(float *)(v4 - 20);
      *(float *)(v4 - 16) = *((float *)off_103DC81C + 4) * 16.0 + *(float *)(v4 - 16);
    }
    while ( v2 < *(_DWORD *)(this + 136) );
  }
  return 1;
}
