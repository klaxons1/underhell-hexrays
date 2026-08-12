void __thiscall sub_101D0B40(void *this, int a2)
{
  double v2; // st6
  float v3; // [esp+4h] [ebp-4h]

  if ( *(_DWORD *)(a2 + 24) != 1 || (v2 = *(float *)(a2 + 8), 0.0 == v2) )
    v2 = 1.0;
  v3 = v2;
  sub_101D0A70((int)this, 0.0, v3);
}
