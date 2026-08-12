int __thiscall sub_10380D10(_DWORD *this)
{
  const char *v2; // edi
  int v3; // edx
  int (__thiscall *v4)(_DWORD *); // eax
  int v6; // [esp+Ch] [ebp-8h] BYREF
  _BYTE v7[4]; // [esp+10h] [ebp-4h] BYREF

  v2 = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 28))(this, v7);
  if ( !v2 || !*v2 )
  {
    v2 = "models/kleiner.mdl";
    this[115] = *sub_10162BE0(&v6, "models/kleiner.mdl");
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
  sub_10112C00((int)(this + 80), 2);
  sub_101129A0((unsigned __int16 *)this + 160, *((_WORD *)this + 178) | 0x10);
  sub_100E0970((int)this, v3, 3, 0);
  sub_100CF450(this, 0);
  if ( this[55] != 8 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 464))(this, this + 55);
    this[55] = 8;
  }
  *((float *)this + 421) = 0.5;
  this[581] = 0;
  sub_10020460(this, 8394753);
  sub_10020460(this, 0x2000000);
  v4 = *(int (__thiscall **)(_DWORD *))(*this + 1164);
  this[63] |= 0x58000000u;
  return v4(this);
}
