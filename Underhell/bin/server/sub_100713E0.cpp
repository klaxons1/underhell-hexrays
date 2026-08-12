int __thiscall sub_100713E0(int this, int a2)
{
  int v2; // eax
  double v3; // st7
  float v5; // [esp+0h] [ebp-8h]

  v2 = *(_DWORD *)(this + 820);
  if ( v2 == -1 )
    v3 = *(float *)(this + 732);
  else
    v3 = sub_10085040(v2);
  v5 = v3;
  sub_102650F0(a2, v5);
  return a2;
}
