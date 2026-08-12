int __thiscall sub_100FAF60(void *this, int a2)
{
  double v3; // st7
  float v5; // [esp+0h] [ebp-Ch]

  if ( *(_DWORD *)(a2 + 24) == 1 )
    v3 = *(float *)(a2 + 8);
  else
    v3 = 0.0;
  v5 = v3;
  sub_1005C3A0((int)this, v5);
  if ( *(_DWORD *)(a2 + 24) == 1 )
    return sub_1005C410((int)this, *(float *)(a2 + 8));
  else
    return sub_1005C410((int)this, 0.0);
}
