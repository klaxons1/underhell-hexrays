void __thiscall sub_10165D00(unsigned __int16 *this)
{
  const char *v2; // eax
  int v3; // edx
  int v4; // ecx
  int *v5; // ecx
  int v6; // eax
  int *v7; // ecx
  float v8; // [esp+8h] [ebp-4h] BYREF

  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 100))(this);
  v2 = *(const char **)(*(int (__thiscall **)(unsigned __int16 *, float *))(*(_DWORD *)this + 28))(this, &v8);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(unsigned __int16 *, const char *))(*(_DWORD *)this + 104))(this, v2);
  sub_100E0970((int)this, v3, 3, 0);
  sub_10112C00((int)(this + 160), 2);
  sub_101129A0(this + 160, this[178] | 4);
  sub_100CF450(this, -1);
  if ( *((_DWORD *)this + 55) != 1000 )
  {
    (*(void (__thiscall **)(unsigned __int16 *, unsigned __int16 *))(*(_DWORD *)this + 464))(this, this + 110);
    *((_DWORD *)this + 55) = 1000;
  }
  if ( *((_BYTE *)this + 225) != 3 )
  {
    (*(void (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)this + 480))(this, (int)this + 225);
    *((_BYTE *)this + 225) = 3;
  }
  sub_100C1170((int)this, 0);
  v4 = *((_DWORD *)this + 226);
  v8 = 0.0;
  if ( v4 != COERCE_INT(0.0) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v5 = (int *)*((_DWORD *)this + 6);
      if ( v5 )
        sub_100194B0(v5, 904);
    }
    *((float *)this + 226) = 0.0;
  }
  sub_100223F0(2);
  sub_100EA940((int *)this, 1024);
  sub_10020460(this, 8392708);
  *((_DWORD *)this + 63) |= 0x10000000u;
  sub_100C2AB0((int)this);
  v6 = *((_DWORD *)this + 226);
  v8 = 0.0;
  if ( v6 != COERCE_INT(0.0) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v7 = (int *)*((_DWORD *)this + 6);
      if ( v7 )
        sub_100194B0(v7, 904);
    }
    *((float *)this + 226) = 0.0;
  }
  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 1164))(this);
  sub_100E88A0(this, 1);
  *(_DWORD *)(*((_DWORD *)this + 601) + 108) |= 3u;
}
