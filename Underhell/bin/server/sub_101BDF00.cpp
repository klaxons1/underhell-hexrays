bool __thiscall sub_101BDF00(int this, __m128 *a2, int a3, int a4)
{
  bool result; // al
  __m128 v6; // [esp+Ch] [ebp-18h] BYREF

  sub_10111910((_BYTE *)(this + 320), (float *)(this + 328), (float *)(this + 340), v6.m128_f32, &v6.m128_f32[3]);
  result = sub_10113460(&v6, (__m128 *)&v6.m128_u32[3], a2, a2 + 1, COERCE_UNSIGNED_INT(0.0));
  if ( result )
    return sub_100BFDA0((_BYTE *)this, (int)a2, a3, a4);
  return result;
}
