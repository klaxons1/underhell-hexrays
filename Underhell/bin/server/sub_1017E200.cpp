int __thiscall sub_1017E200(float *this, int a2)
{
  double v2; // st7
  int v3; // eax
  float v5; // [esp+0h] [ebp-4h]

  if ( *(_DWORD *)(a2 + 24) == 1 )
    v2 = *(float *)(a2 + 8);
  else
    v2 = 0.0;
  v3 = *(_DWORD *)a2;
  this[200] = v2;
  v5 = v2;
  return sub_1017D560((int)this, v3, v5);
}
