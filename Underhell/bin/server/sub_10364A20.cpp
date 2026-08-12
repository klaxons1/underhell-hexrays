int __thiscall sub_10364A20(_DWORD *this)
{
  const char *v2; // edi
  unsigned int v3; // eax
  int v4; // edx
  int v5; // edx
  int (__thiscall *v6)(_DWORD *); // eax
  int v8; // [esp+Ch] [ebp-8h] BYREF
  _BYTE v9[4]; // [esp+10h] [ebp-4h] BYREF

  v2 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 28))(this, v9);
  if ( !v2 || !*v2 )
  {
    v2 = "models/eli.mdl";
    this[115] = *sub_10162BE0(&v8, "models/eli.mdl");
    sub_100D8500(this);
  }
  (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
  (*(void (__thiscall **)(_DWORD *, const char *))(*this + 104))(this, v2);
  this[427] = -1;
  this[435] = 0;
  *((_BYTE *)this + 1713) = 0;
  j_nullsub_4(this);
  sub_100E88A0(this, 0);
  this[419] = 0;
  sub_10027A90((int)this, 0);
  v3 = this[77];
  if ( v3 != -1 && off_1061BE18[4 * (this[77] & 0xFFF) + 2] == v3 >> 12 && off_1061BE18[4 * (this[77] & 0xFFF) + 1] )
  {
    sub_10112C00((int)(this + 80), 2);
    sub_101129A0((unsigned __int16 *)this + 160, *((_WORD *)this + 178) | 0x10);
    sub_100E0970((int)this, v4, 0, 0);
    sub_10020460(this, 8392704);
  }
  else
  {
    sub_10112C00((int)(this + 80), 2);
    sub_101129A0((unsigned __int16 *)this + 160, *((_WORD *)this + 178) | 0x10);
    sub_100E0970((int)this, v5, 3, 0);
    sub_10020460(this, 8394753);
  }
  sub_10020460(this, 0x2000000);
  this[63] |= 0x58000000u;
  sub_100CF450(this, 0);
  if ( this[55] != 8 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 464))(this, this + 55);
    this[55] = 8;
  }
  v6 = *(int (__thiscall **)(_DWORD *))(*this + 1164);
  *((float *)this + 421) = 0.5;
  this[581] = 0;
  return v6(this);
}
