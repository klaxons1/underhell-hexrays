void __thiscall sub_102DC400(int this)
{
  double v1; // st7

  v1 = *(float *)dword_106B31C8 - *(float *)(this + 5384);
  *(float *)(this + 5384) = *(float *)dword_106B31C8;
  if ( v1 >= *(float *)(dword_106E089C + 44) )
    *(_DWORD *)(this + 5388) = 2 * (*(_DWORD *)(dword_106E0854 + 48) != 0) + 1;
  else
    *(_DWORD *)(this + 5388) = 2;
}
