int __thiscall sub_10207270(float *this, int a2)
{
  int (*v2)(void); // edx

  v2 = *(int (**)(void))(*(_DWORD *)this + 904);
  if ( *(_DWORD *)(a2 + 24) == 1 )
    this[27] = *(float *)(a2 + 8);
  else
    this[27] = 0.0;
  return v2();
}
