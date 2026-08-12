int __thiscall sub_10280120(int this, int a2)
{
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) == 2 )
    *(float *)(this + 1220) = 3000.0;
  else
    *(float *)(this + 1220) = 1400.0;
  return sub_100D4F90((int *)this, a2);
}
