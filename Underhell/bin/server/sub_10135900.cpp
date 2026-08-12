float *__thiscall sub_10135900(float *this)
{
  int v2; // edx
  int v3; // edx

  *(_DWORD *)this = &CEnvWindShared::`vftable';
  this[19] = NAN;
  this[16] = 0.0;
  *((_DWORD *)this + 20) = 5;
  this[25] = NAN;
  this[22] = 0.0;
  *((_DWORD *)this + 26) = 5;
  CUniformRandomStream::CUniformRandomStream((CUniformRandomStream *)(this + 36));
  CUniformRandomStream::CUniformRandomStream((CUniformRandomStream *)(this + 73));
  this[112] = 10.0;
  this[113] = 0.0;
  this[114] = 0.0;
  this[115] = 0.0;
  *((_WORD *)this + 236) = -1;
  v2 = *((_DWORD *)this + 113);
  *((_DWORD *)this + 117) = 0xFFFF;
  this[116] = NAN;
  *((_DWORD *)this + 119) = v2;
  this[111] = -3.4028235e38;
  this[121] = 10.0;
  this[122] = 0.0;
  this[123] = 0.0;
  this[124] = 0.0;
  *((_WORD *)this + 254) = -1;
  v3 = *((_DWORD *)this + 122);
  *((_DWORD *)this + 126) = 0xFFFF;
  this[125] = NAN;
  *((_DWORD *)this + 128) = v3;
  this[120] = -3.4028235e38;
  this[110] = 0.0;
  return this;
}
