int __thiscall sub_103D0590(int *this)
{
  int *v2; // edi
  int v3; // ebx
  int v4; // edi
  int result; // eax
  double v6; // st7

  (*(void (__thiscall **)(int *))(*this + 100))(this);
  *((_WORD *)this + 1888) = 0;
  sub_100CF450(this, 5);
  v2 = this + 55;
  v3 = (int)*(float *)(dword_106EC8C4 + 44);
  if ( this[55] != v3 )
  {
    (*(void (__thiscall **)(int *, _WORD *))(*this + 464))(this, (_WORD *)this + 110);
    *v2 = v3;
  }
  v4 = *v2;
  if ( this[54] != v4 )
  {
    (*(void (__thiscall **)(int *, _WORD *))(*this + 456))(this, (_WORD *)this + 108);
    this[54] = v4;
  }
  *((float *)this + 421) = 0.2;
  sub_100204A0(this);
  sub_1032CE00((int)this);
  *((float *)this + 960) = 0.0;
  *((float *)this + 961) = 0.0;
  *((float *)this + 950) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                             dword_106B31E4,
                             1.0,
                             4.0)
                         + *(float *)(dword_106B31C8 + 12);
  result = dword_106B31C8;
  flt_106EC8A0 = *(float *)(dword_106B31C8 + 12);
  v6 = *(float *)(dword_106B31C8 + 12);
  this[964] = 1;
  *((float *)this + 963) = v6;
  return result;
}
