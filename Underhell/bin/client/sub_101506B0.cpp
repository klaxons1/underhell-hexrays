_DWORD *__thiscall sub_101506B0(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  this[1] = &IClientNetworkable::`vftable';
  *this = &C_BaseTempEntity::`vftable';
  this[1] = &C_BaseTempEntity::`vftable';
  this[2] = dword_1043CC68;
  dword_1043CC68 = (int)this;
  this[3] = 0;
  return result;
}
