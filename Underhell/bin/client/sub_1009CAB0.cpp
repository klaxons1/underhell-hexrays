float *__thiscall sub_1009CAB0(float *this)
{
  int v2; // edx
  int v3; // edx

  *(_DWORD *)this = &CEnvWindShared::`vftable';
  CUniformRandomStream::CUniformRandomStream((CUniformRandomStream *)(this + 24));
  CUniformRandomStream::CUniformRandomStream((CUniformRandomStream *)(this + 61));
  this[100] = 10.0;
  this[101] = 0.0;
  this[102] = 0.0;
  this[103] = 0.0;
  *((_WORD *)this + 212) = -1;
  v2 = *((_DWORD *)this + 101);
  this[104] = NAN;
  *((_DWORD *)this + 105) = 0xFFFF;
  *((_DWORD *)this + 107) = v2;
  this[99] = -3.4028235e38;
  this[109] = 10.0;
  this[110] = 0.0;
  this[111] = 0.0;
  this[112] = 0.0;
  *((_WORD *)this + 230) = -1;
  v3 = *((_DWORD *)this + 110);
  this[113] = NAN;
  *((_DWORD *)this + 114) = 0xFFFF;
  *((_DWORD *)this + 116) = v3;
  this[108] = -3.4028235e38;
  this[98] = 0.0;
  return this;
}
