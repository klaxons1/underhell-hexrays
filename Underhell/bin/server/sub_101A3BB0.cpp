void __thiscall sub_101A3BB0(_BYTE *this)
{
  _BYTE *v2; // edi
  int *v3; // edi
  int v4; // ebx
  int v5; // ebx

  v2 = this + 225;
  if ( this[225] )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 480))(this, this + 225);
    *v2 = 0;
  }
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 100))(this);
  *((_WORD *)this + 1888) = 0;
  this[1668] = 1;
  sub_100CF450(this, 0);
  v3 = (int *)(this + 220);
  v4 = (int)*(float *)(dword_106B8F74 + 44);
  if ( *((_DWORD *)this + 55) != v4 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 464))(this, this + 220);
    *v3 = v4;
  }
  v5 = *v3;
  if ( *((_DWORD *)this + 54) != *v3 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)this + 456))(this, this + 216);
    *((_DWORD *)this + 54) = v5;
  }
  *((float *)this + 973) = 0.0;
  *((_DWORD *)this + 974) = 0;
  this[3900] = 0;
  *((float *)this + 972) = -10.0;
  *((_DWORD *)this + 982) = -1;
  *((_DWORD *)this + 983) = -1;
  *((_DWORD *)this + 984) = -1;
  *((_DWORD *)this + 986) = -1;
  *((float *)this + 421) = 0.2;
  sub_100204A0(this);
  sub_10020460(this, 2099208);
  sub_1032CE00(this);
  *((float *)this + 967) = 0.0;
  *((float *)this + 968) = 0.0;
  *((float *)this + 950) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                             dword_106B31E4,
                             1.0,
                             4.0)
                         + *(float *)(dword_106B31C8 + 12);
}
