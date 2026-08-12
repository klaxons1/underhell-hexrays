void __thiscall sub_102251D0(int this, int a2, int a3)
{
  if ( *(int *)(this + 44) <= 0 )
    *(_DWORD *)(this + 44) = 1;
  if ( *(float *)(this + 48) <= 0.0 )
    *(float *)(this + 48) = 1.0;
  *(float *)(this + 60) = 1.0 / (double)*(int *)(this + 44);
}
