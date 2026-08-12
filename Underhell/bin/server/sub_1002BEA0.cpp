char __thiscall sub_1002BEA0(float *this)
{
  int v3; // edi
  double v4; // st7
  double v5; // st7
  int v6; // eax
  _DWORD *v7; // esi
  int v8[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( *((_DWORD *)this + 688) )
    return 1;
  if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 2008))(this) )
    return 0;
  v3 = sub_100CF460(this);
  if ( v3 )
  {
    v4 = *(float *)(dword_106B31C8 + 12);
LABEL_9:
    v5 = v4 + 2.0;
    goto LABEL_10;
  }
  if ( !sub_100296A0(this) )
  {
    v4 = *(float *)(dword_106B31C8 + 12);
    goto LABEL_9;
  }
  v5 = *(float *)(dword_106B31C8 + 12) + 1.0;
LABEL_10:
  this[687] = v5;
  *(float *)v8 = 540.0;
  *(float *)&v8[1] = 540.0;
  *(float *)&v8[2] = 100.0;
  v6 = sub_100C9B10((int)this, (int)v8);
  if ( v6 )
  {
    if ( !v3 )
      return 1;
    v7 = (_DWORD *)(sub_100D0CC0(v6) + 440);
    if ( *v7 > *(_DWORD *)(sub_100D0CC0(v3) + 440) )
      return 1;
  }
  return 0;
}
