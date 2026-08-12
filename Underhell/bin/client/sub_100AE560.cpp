double __thiscall sub_100AE560(void *this, int a2)
{
  double v2; // st7
  int v3; // eax
  int v4; // ecx
  double v5; // st7

  v2 = 0.0;
  v3 = (int)this + a2 + 16;
  v4 = 60;
  do
  {
    v5 = v2 + *(float *)(v3 - 4);
    v3 += 40;
    --v4;
    v2 = v5
       + *(float *)(v3 - 40)
       + *(float *)(v3 - 36)
       + *(float *)(v3 - 32)
       + *(float *)(v3 - 28)
       + *(float *)(v3 - 24)
       + *(float *)(v3 - 20)
       + *(float *)(v3 - 16)
       + *(float *)(v3 - 12)
       + *(float *)(v3 - 8);
  }
  while ( v4 );
  return v2 * 0.0016666667;
}
