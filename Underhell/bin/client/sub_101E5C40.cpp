char *__thiscall sub_101E5C40(char *this, int a2)
{
  _DWORD *v3; // eax
  int i; // ecx

  *(_DWORD *)this = &CChoreoEvent::`vftable';
  sub_1022D3E0(this + 8);
  sub_1022D3E0(this + 24);
  sub_1022D3E0(this + 40);
  sub_1022D3E0(this + 56);
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *(float *)(this + 115) = 0.0;
  *(float *)(this + 122) = 0.0;
  this[112] = 0;
  *(_WORD *)(this + 113) = 0;
  this[119] = 0;
  *((_WORD *)this + 60) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  sub_1022D3E0(this + 148);
  sub_1022D3E0(this + 164);
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  *((_DWORD *)this + 56) = 0;
  v3 = this + 228;
  for ( i = 1; i >= 0; --i )
  {
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;
    v3[4] = 0;
    v3 += 5;
  }
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  sub_1022D3E0(this + 316);
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 87) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 89) = 0;
  *((_DWORD *)this + 90) = 0;
  sub_101E2410((int)this, a2);
  return this;
}
