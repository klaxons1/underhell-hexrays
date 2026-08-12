double __thiscall sub_101E3B00(int this, float a2)
{
  int v3; // eax
  float v5; // [esp+0h] [ebp-Ch]
  float v6; // [esp+8h] [ebp-4h]

  v6 = 1.0;
  v3 = *(_DWORD *)(this + 296);
  if ( v3 )
    v6 = sub_101E3490(v3 + 300, v3, a2);
  v5 = a2 - *(float *)(this + 72);
  return sub_101E3490(this + 92, this, v5) * v6;
}
