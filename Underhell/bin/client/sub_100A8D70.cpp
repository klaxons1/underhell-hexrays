void __thiscall sub_100A8D70(_DWORD *this)
{
  float *v1; // esi
  double v2; // st6
  int v3; // eax
  float *v4; // edi
  float v5; // eax

  v1 = (float *)this[1];
  if ( 0.0 == v1[1053] )
  {
    if ( 0.0 == v1[74] )
      v2 = 1.0;
    else
      v2 = v1[74];
    v3 = this[2];
    v4 = (float *)off_103DC81C;
    *(float *)(v3 + 72) = *(float *)(v3 + 72) - v2 * *(float *)(dword_10434644 + 44) * *((float *)off_103DC81C + 4);
    *(float *)(v3 + 72) = v1[73] * v4[4] + *(float *)(v3 + 72);
    v5 = v1[72];
    v1[71] = v1[71];
    v1[72] = v5;
    v1[73] = 0.0;
    sub_100A8BB0(this);
  }
}
