void __thiscall sub_1037FD10(_DWORD *this)
{
  int *v2; // edi
  int v3; // ebx
  int v4; // edx

  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  (*(void (__thiscall **)(_DWORD *, const char *))(*this + 104))(this, "models/ichthyosaur.mdl");
  this[419] = 8;
  sub_10027A90((int)this, 0);
  sub_10020F00((char *)this);
  sub_100223F0(2);
  this[581] = 0;
  sub_100CF450(this, 0);
  v2 = this + 55;
  v3 = (int)*(float *)(dword_106E98D4 + 44);
  if ( this[55] != v3 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 464))(this, this + 55);
    *v2 = v3;
  }
  if ( this[54] != *v2 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 456))(this, this + 54);
    this[54] = *v2;
  }
  *((float *)this + 421) = -0.70700002;
  sub_1001FBB0(this, 1024.0);
  sub_10112C00((int)(this + 80), 2);
  sub_101129A0((unsigned __int16 *)this + 160, *((_WORD *)this + 178) | 0x10);
  sub_100E0970((int)this, v4, 3, 0);
  sub_100EA940(this, 2098176);
  *((float *)this + 200) = 500.0;
  *((_BYTE *)this + 3665) = 0;
  *((float *)this + 911) = 0.0;
  *((float *)this + 912) = 0.0;
  *((float *)this + 913) = 0.0;
  *((float *)this + 909) = *(float *)(dword_106B31C8 + 12);
  *((float *)this + 910) = *(float *)(dword_106B31C8 + 12);
  *((float *)this + 914) = *(float *)(dword_106B31C8 + 12);
  *((float *)this + 915) = *(float *)(dword_106B31C8 + 12);
  sub_100204A0(this);
  sub_10020460(this, 524292);
  (*(void (__thiscall **)(_DWORD *))(*this + 1164))(this);
  this[427] = -1;
  this[435] = 0;
  *((_BYTE *)this + 1713) = 0;
  j_nullsub_4(this);
  sub_100E88A0(this, 0);
}
