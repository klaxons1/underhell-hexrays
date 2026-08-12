void __thiscall sub_1016A180(unsigned __int16 *this)
{
  int v2; // edx
  double v3; // st7
  int *v4; // ecx
  int *v5; // ecx
  float v6; // [esp+Ch] [ebp-18h]

  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 800))(this);
  sub_10112C00((int)(this + 160), 2);
  if ( (this[124] & 1) != 0 )
    sub_101129A0(this + 160, this[178] | 4);
  else
    sub_101129A0(this + 160, this[178] | 0x10);
  sub_100E0970((int)this, v2, 0, 0);
  if ( *((_BYTE *)this + 225) != 2 )
  {
    (*(void (__thiscall **)(unsigned __int16 *, _BYTE *))(*(_DWORD *)this + 480))(this, (_BYTE *)this + 225);
    *((_BYTE *)this + 225) = 2;
  }
  if ( *((_DWORD *)this + 55) != 80000 )
  {
    (*(void (__thiscall **)(unsigned __int16 *, _BYTE *))(*(_DWORD *)this + 464))(this, (_BYTE *)this + 220);
    *((_DWORD *)this + 55) = 80000;
  }
  *(float *)(*((_DWORD *)this + 651) + 20) = *((float *)this + 183);
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 651) + 76))(*((_DWORD *)this + 651), 360);
  v3 = 1.0;
  if ( *((_DWORD *)this + 216) != COERCE_INT(1.0) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
      {
        sub_100194B0(v4, 864);
        v3 = 1.0;
      }
    }
    *((float *)this + 216) = v3;
  }
  *((float *)this + 200) = 0.0;
  v6 = v3 + *(float *)(dword_106B31C8 + 12);
  sub_100EC4A0((int *)this, v6, 0);
  sub_100C2AB0((int)this);
  if ( *((_DWORD *)this + 227) || 0.0 != *((float *)this + 226) )
  {
    *((_DWORD *)this + 905) = 0;
    if ( *((_DWORD *)this + 216) != COERCE_INT(0.0) )
    {
      if ( *((_BYTE *)this + 84) )
      {
        *((_BYTE *)this + 88) |= 1u;
        *((float *)this + 216) = 0.0;
      }
      else
      {
        v5 = (int *)*((_DWORD *)this + 6);
        if ( v5 )
          sub_100194B0(v5, 864);
        *((float *)this + 216) = 0.0;
      }
    }
  }
  else
  {
    *((_DWORD *)this + 905) = 1;
  }
}
