char __thiscall sub_101CDEE0(float *this)
{
  void (*v2)(void); // edx
  const char *v3; // eax
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // ebx
  int *v7; // ecx
  int v8; // edx
  int *v9; // ecx
  int *v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // eax
  int v14[1536]; // [esp+24h] [ebp-1804h] BYREF
  float v15; // [esp+1824h] [ebp-4h] BYREF

  v2 = *(void (**)(void))(*(_DWORD *)this + 100);
  this[1268] = this[268];
  v2();
  v3 = *(const char **)(*(int (__thiscall **)(float *, float *))(*(_DWORD *)this + 28))(this, &v15);
  if ( !v3 )
    v3 = String;
  (*(void (__thiscall **)(float *, const char *))(*(_DWORD *)this + 104))(this, v3);
  v4 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*((_DWORD *)this + 275) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v5 = (_DWORD *)*((_DWORD *)this + 275);
  if ( v5 && *v5 )
    v6 = *((_DWORD *)this + 275);
  else
    v6 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  if ( (*(_DWORD *)(*(_DWORD *)v6 + 152) & 0x800) != 0 )
  {
    sub_101CDE70((int)this);
  }
  else if ( *((_DWORD *)this + 268) != *((_DWORD *)this + 1268) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v7 = (int *)*((_DWORD *)this + 6);
      if ( v7 )
        sub_100194B0(v7, 1072);
    }
    this[268] = this[1268];
  }
  sub_100C3C50((int)this, (int)v14, 524032);
  sub_100E0EA0((int)this, &flt_106F1CB4);
  sub_101CD150(
    (int)this,
    &flt_106F1CA8,
    0,
    &flt_106F1CA8,
    (int)v14,
    (int)v14,
    0.0,
    (*((_DWORD *)this + 62) >> 2) & 1,
    (_DWORD *)1,
    ((_DWORD)this[62] & 0x10000) == 0);
  this[1256] = 0.0;
  v8 = *((_DWORD *)this + 1266);
  v15 = 0.0;
  if ( v8 != COERCE_INT(0.0) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v9 = (int *)*((_DWORD *)this + 6);
      if ( v9 )
        sub_100194B0(v9, 5064);
    }
    this[1266] = 0.0;
  }
  if ( *((_DWORD *)this + 1267) != -1 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v10 = (int *)*((_DWORD *)this + 6);
      if ( v10 )
        sub_100194B0(v10, 5068);
    }
    this[1267] = NAN;
  }
  v11 = *((_DWORD *)this + 62);
  if ( (v11 & 0x2000) == 0 )
    *((_DWORD *)this + 63) |= 0x8000000u;
  v12 = v11 >> 14;
  if ( (v12 & 1) != 0 )
    LOBYTE(v12) = sub_101CB4D0(this);
  if ( *((_BYTE *)this + 4438) )
    LOBYTE(v12) = sub_100EAB80(this, 32);
  return v12;
}
