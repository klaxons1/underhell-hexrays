int __thiscall sub_101AA280(int this)
{
  _DWORD *v2; // edi
  int v3; // edx
  int *v4; // ecx
  int v5; // eax
  int result; // eax
  _BYTE *v7; // esi

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  *(_DWORD *)(this + 1708) = -1;
  *(_DWORD *)(this + 1740) = 0;
  *(_BYTE *)(this + 1713) = 0;
  j_nullsub_4((void *)this);
  sub_100E88A0((_DWORD *)this, 0);
  sub_100204A0((_DWORD *)this);
  sub_10020460((_DWORD *)this, 1);
  sub_10020460((_DWORD *)this, 64);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/roller_vehicledriver.mdl");
  *(_DWORD *)(this + 1676) = 7;
  sub_10027A90(this, 0);
  v2 = (_DWORD *)(this + 220);
  if ( *(_DWORD *)(this + 220) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *v2 = 1;
  }
  if ( *(_DWORD *)(this + 216) != *v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 456))(this, this + 216);
    *(_DWORD *)(this + 216) = *v2;
  }
  *(float *)(this + 1684) = -1.0;
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
  sub_100E0970(this, v3, 0, 0);
  sub_100EAB80((_DWORD *)this, 32);
  if ( *(_BYTE *)(this + 224) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 472))(this, this + 224);
    *(_BYTE *)(this + 224) = 0;
  }
  if ( *(_DWORD *)(this + 904) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 904);
    }
    *(float *)(this + 904) = 0.0;
  }
  sub_100C2AB0(this);
  sub_100EA940((int *)this, 0x2000);
  *(float *)(this + 3736) = 0.0;
  *(float *)(this + 3740) = *(float *)(this + 3744);
  *(float *)(this + 3652) = flt_106F1CA8;
  *(float *)(this + 3656) = flt_106F1CAC;
  *(float *)(this + 3660) = flt_106F1CB0;
  *(float *)(this + 3676) = flt_106F1CA8;
  *(float *)(this + 3680) = flt_106F1CAC;
  *(float *)(this + 3684) = flt_106F1CB0;
  *(float *)(this + 3688) = flt_106F1CA8;
  *(float *)(this + 3692) = flt_106F1CAC;
  *(float *)(this + 3696) = flt_106F1CB0;
  *(float *)(this + 3700) = flt_106F1CA8;
  *(float *)(this + 3704) = flt_106F1CAC;
  *(float *)(this + 3708) = flt_106F1CB0;
  *(float *)(this + 3712) = flt_106F1CA8;
  *(float *)(this + 3716) = flt_106F1CAC;
  *(float *)(this + 3720) = flt_106F1CB0;
  *(float *)(this + 3664) = flt_106F1CA8;
  *(float *)(this + 3668) = flt_106F1CAC;
  *(float *)(this + 3672) = flt_106F1CB0;
  v5 = *(_DWORD *)(this + 2588);
  *(float *)(this + 3748) = 45.0;
  *(_DWORD *)(this + 3648) = 0;
  *(_DWORD *)(this + 3644) = 0;
  *(float *)(this + 3724) = 0.2;
  *(_BYTE *)(v5 + 93) = 1;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1164))(this);
  v7 = (_BYTE *)(this + 225);
  if ( *v7 )
  {
    result = (*(int (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)(v7 - 225) + 480))(v7 - 225, v7);
    *v7 = 0;
  }
  return result;
}
