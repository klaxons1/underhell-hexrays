int __thiscall sub_1004E500(float *this)
{
  int (__thiscall *v2)(float *, _DWORD); // edx

  nullsub_4();
  this[496] = 0.0;
  this[497] = 0.0;
  this[498] = 0.0;
  this[510] = this[496];
  this[511] = this[497];
  this[512] = this[498];
  this[493] = 0.0;
  this[494] = 0.0;
  this[495] = 0.0;
  *((_BYTE *)this + 2068) = 0;
  this[499] = 0.0;
  this[502] = RandomFloat(0.40000001, 1.0);
  v2 = *(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 408);
  this[540] = 0.0;
  this[538] = 0.0;
  this[539] = 0.0;
  return v2(this, -1293.0);
}
