void __thiscall sub_100A9EF0(_DWORD *this)
{
  float *v1; // esi
  double v2; // st6
  float *v3; // edi
  int v4; // eax
  float v5; // eax

  v1 = (float *)this[1];
  if ( 0.0 == v1[74] )
    v2 = 1.0;
  else
    v2 = v1[74];
  v3 = (float *)off_103DC81C;
  v4 = this[2];
  *(float *)(v4 + 72) = *(float *)(v4 + 72) - v2 * *(float *)(dword_10434644 + 44) * 0.5 * *((float *)off_103DC81C + 4);
  *(float *)(v4 + 72) = v1[73] * v3[4] + *(float *)(v4 + 72);
  v5 = v1[72];
  v1[71] = v1[71];
  v1[72] = v5;
  v1[73] = 0.0;
  sub_100A8BB0(this);
}
