char *__thiscall sub_100471A0(char *this)
{
  char *v2; // ecx

  *(_DWORD *)this = &CPlayerLocalData::`vftable';
  v2 = this + 128;
  *((_DWORD *)this + 30) = &CInterpolatedVarArrayBase<QAngle,0>::`vftable';
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0x100000;
  sub_10038BE0((unsigned __int16 *)v2, 4);
  *((float *)this + 39) = 0.0;
  *((float *)this + 36) = 0.0;
  *((_DWORD *)this + 40) = "CPlayerLocalData::m_iv_vecPunchAngle";
  *((_DWORD *)this + 31) = 0;
  *((_WORD *)this + 74) = 1;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 30) = &CInterpolatedVar<QAngle>::`vftable';
  sub_1010EC10(1);
  *((_DWORD *)this + 44) = &CInterpolatedVarArrayBase<QAngle,0>::`vftable';
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0x100000;
  sub_10038BE0((unsigned __int16 *)this + 92, 4);
  *((float *)this + 53) = 0.0;
  *((float *)this + 50) = 0.0;
  *((_DWORD *)this + 54) = "CPlayerLocalData::m_iv_vecPunchAngleVel";
  *((_DWORD *)this + 45) = 0;
  *((_WORD *)this + 102) = 1;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 44) = &CInterpolatedVar<QAngle>::`vftable';
  sub_1010EC10(1);
  *((_DWORD *)this + 58) = &sky3dparams_t::`vftable';
  *((_DWORD *)this + 64) = &sky3dparams_t::NetworkVar_fog::`vftable';
  sub_10045DA0((_DWORD *)this + 81);
  *((_DWORD *)this + 90) = &audioparams_t::`vftable';
  *((_DWORD *)this + 117) = -1;
  sub_100464D0(this + 476);
  (*(void (__thiscall **)(char *, char *, int))(*((_DWORD *)this + 30) + 4))(this + 120, this + 108, 2);
  (*(void (__thiscall **)(char *, char *, int))(*((_DWORD *)this + 44) + 4))(this + 176, this + 164, 2);
  *((float *)this + 16) = 0.0;
  return this;
}
