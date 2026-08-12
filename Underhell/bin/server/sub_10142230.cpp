void __thiscall sub_10142230(unsigned __int16 *this)
{
  int v2; // edx
  int *v3; // ecx
  float v4; // [esp+1Ch] [ebp-4h]
  float v5; // [esp+1Ch] [ebp-4h]
  float v6; // [esp+1Ch] [ebp-4h]
  float v7; // [esp+1Ch] [ebp-4h]

  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 100))(this);
  sub_10112C00((int)(this + 160), 2);
  sub_101129A0(this + 160, this[178] | 0x1C);
  sub_100E0970((int)this, v2, 4, 0);
  v4 = RandomFloat(0.0, 360.0);
  if ( *((_DWORD *)this + 285) != LODWORD(v4) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v3 = (int *)*((_DWORD *)this + 6);
      if ( v3 )
        sub_100194B0(v3, 1140);
    }
    *((float *)this + 285) = v4;
  }
  *((float *)this + 286) = 0.0;
  *((float *)this + 287) = 1.0;
  *((float *)this + 288) = 0.0;
  *((float *)this + 289) = 0.0;
  *((float *)this + 290) = -*((float *)this + 288);
  *((float *)this + 291) = *((float *)this + 287);
  *((float *)this + 292) = 0.0;
  *((float *)this + 297) = 0.0;
  *((float *)this + 299) = RandomFloat(10.0, 20.0);
  *((float *)this + 300) = RandomFloat(4.0, 5.0) * *((float *)this + 299);
  *((float *)this + 298) = *((float *)this + 299);
  *((_BYTE *)this + 1216) = RandomInt(0, 100) < 50;
  *((float *)this + 301) = RandomFloat(40.0, 75.0);
  if ( *((_DWORD *)this + 55) != 1 )
  {
    (*(void (__thiscall **)(unsigned __int16 *, unsigned __int16 *))(*(_DWORD *)this + 464))(this, this + 110);
    *((_DWORD *)this + 55) = 1;
  }
  if ( *((_DWORD *)this + 54) != 1 )
  {
    (*(void (__thiscall **)(unsigned __int16 *, unsigned __int16 *))(*(_DWORD *)this + 456))(this, this + 108);
    *((_DWORD *)this + 54) = 1;
  }
  if ( *((_BYTE *)this + 225) != 2 )
  {
    (*(void (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)this + 480))(this, (int)this + 225);
    *((_BYTE *)this + 225) = 2;
  }
  v5 = RandomFloat(0.0, 10.0);
  *((float *)this + 312) = sub_10264FF0(this + 622) + v5;
  *((float *)this + 311) = v5;
  v6 = RandomFloat(10.0, 60.0);
  *((float *)this + 306) = sub_10264FF0(this + 610) + v6;
  *((float *)this + 305) = v6;
  v7 = RandomFloat(2.0, 10.0);
  *((float *)this + 308) = sub_10264FF0(this + 614) + v7;
  *((float *)this + 307) = v7;
  *((float *)this + 298) = *((float *)this + 299);
}
