int __thiscall sub_103B3010(int *this, int a2)
{
  int v2; // eax
  double v3; // st7
  float v5; // [esp+0h] [ebp-4h]

  if ( this )
    v2 = (int)(this + 905);
  else
    v2 = 0;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    v3 = *(float *)(a2 + 8);
  else
    v3 = 0.0;
  v5 = v3;
  return sub_103B1710(this[910], v2, 0, v5);
}
