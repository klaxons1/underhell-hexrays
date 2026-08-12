int __thiscall sub_103655D0(int this)
{
  sub_10041230((float *)this);
  *(_DWORD *)this = &CNPC_EnemyFinder::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_EnemyFinder::`vftable';
  *(_DWORD *)(this + 3632) = &CAI_FreePass::`vftable';
  *(_DWORD *)(this + 3636) = 0;
  *(_DWORD *)(this + 3640) = -1;
  *(float *)(this + 3644) = 0.0;
  *(float *)(this + 3648) = 0.0;
  *(float *)(this + 3652) = 0.0;
  *(float *)(this + 3656) = 0.0;
  *(float *)(this + 3660) = -1.0;
  *(float *)(this + 3700) = -1.0;
  *(_DWORD *)(this + 3720) = -1;
  *(_DWORD *)(this + 3708) = 0;
  *(_DWORD *)(this + 3724) = 5;
  *(_DWORD *)(this + 3744) = -1;
  *(_DWORD *)(this + 3732) = 0;
  *(_DWORD *)(this + 3748) = 5;
  sub_10043190();
  if ( dword_10672E44 != dword_10694898 )
  {
    sub_10364C80();
    byte_10672E40 = 1;
    dword_10672E44 = dword_10694898;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 3632) + 4))(this + 3632, this);
  return this;
}
