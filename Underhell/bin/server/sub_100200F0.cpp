int __thiscall sub_100200F0(float *this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // ebx
  float v9; // [esp+10h] [ebp-4h]

  sub_100BCCF0(this);
  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*((_DWORD *)this + 275) && sub_100D7240(this) )
    sub_100BD750(this);
  v3 = (_DWORD *)*((_DWORD *)this + 275);
  if ( v3 && *v3 )
    v4 = *((_DWORD *)this + 275);
  else
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  if ( v4 )
  {
    v5 = dword_10700AC8;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*((_DWORD *)this + 275) && sub_100D7240(this) )
      sub_100BD750(this);
    v6 = (_DWORD *)*((_DWORD *)this + 275);
    if ( v6 && *v6 )
      v7 = *((_DWORD *)this + 275);
    else
      v7 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
    if ( (unsigned __int8)sub_10245FE0(v7) )
    {
      v9 = sub_100BD360(this);
      if ( ((*(int (__thiscall **)(float *))(*(_DWORD *)this + 1672))(this) & 0x20000000) != 0 )
      {
        (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1832))(this);
      }
      else
      {
        if ( ((_DWORD)this[63] & 0x800) != 0 )
          sub_100DAE60(this);
        this[636] = this[177];
      }
      if ( ((*(int (__thiscall **)(float *))(*(_DWORD *)this + 1672))(this) & 0x800000) != 0 )
        (*(void (__thiscall **)(float *, float))(*(_DWORD *)this + 1816))(this, COERCE_FLOAT(LODWORD(v9)));
    }
  }
  return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 1828))(this);
}
