int __thiscall sub_101CB510(void *this, int a2)
{
  double v2; // st7
  float v4; // [esp+8h] [ebp-8h]

  if ( *(_DWORD *)(a2 + 24) != 1 || (v2 = *(float *)(a2 + 8), v2 <= 0.0) )
    v2 = 5.0;
  v4 = v2;
  return sub_10219820((int)this, 100.0, *(float *)(dword_106B31C8 + 12), v4, 0);
}
