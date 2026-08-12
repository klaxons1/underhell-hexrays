bool __thiscall sub_1024F870(int this, float *a2)
{
  bool v3; // zf
  double v4; // st5
  double v5; // st7
  double v6; // st6
  bool result; // al
  float v8[16]; // [esp+4h] [ebp-4Ch] BYREF
  float v9; // [esp+44h] [ebp-Ch]
  float v10; // [esp+48h] [ebp-8h]
  float v11; // [esp+4Ch] [ebp-4h]

  v3 = (*(_BYTE *)(this + 248) & 2) == 0;
  v9 = a2[179] - *(float *)(this + 716);
  v10 = a2[180] - *(float *)(this + 720);
  v11 = a2[181] - *(float *)(this + 724);
  result = 0;
  if ( v3 )
  {
    sub_10425F80(v8, this + 728);
    v4 = v8[4] * v10 + v8[0] * v9 + v8[8] * v11;
    v5 = v8[1] * v9 + v8[5] * v10 + v8[9] * v11;
    v6 = v10 * v8[6] + v9 * v8[2] + v11 * v8[10];
    if ( v4 >= *(float *)(this + 808)
      && *(float *)(this + 812) <= v5
      && *(float *)(this + 816) <= v6
      && v4 <= *(float *)(this + 820)
      && *(float *)(this + 824) >= v5
      && v6 <= *(float *)(this + 828) )
    {
      return 1;
    }
  }
  return result;
}
