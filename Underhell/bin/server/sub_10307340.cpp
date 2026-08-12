int __thiscall sub_10307340(int this)
{
  int result; // eax
  double v3; // st7
  int v4; // edi
  double v5; // st7
  double v6; // st5
  double v7; // st4
  double v8; // st7
  bool v9; // bl
  int v10; // eax
  int v11; // eax
  int v12; // eax
  float v13; // [esp+10h] [ebp-10h]
  float v14; // [esp+14h] [ebp-Ch]

  if ( sub_10262560(*(_DWORD *)(this + 24)) || sub_1025F670() && sub_10262580(*(_DWORD *)(this + 24)) )
  {
    if ( *(_BYTE *)(this + 1140) )
    {
      v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             1.0,
             4.0)
         + *(float *)(dword_106B31C8 + 12);
      *(_BYTE *)(this + 1140) = 0;
      *(float *)(this + 1132) = v3;
    }
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
      v4 = sub_10261B20();
    else
      v4 = 0;
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
      sub_100DAE60(v4);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v5 = *(float *)(this + 580) - *(float *)(v4 + 580);
    v6 = *(float *)(this + 588) - *(float *)(v4 + 588);
    v7 = *(float *)(this + 584) - *(float *)(v4 + 584);
    v8 = v6 * v6 + v7 * v7 + v5 * v5;
    if ( v8 <= 230400.0 || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 1128) )
    {
      v9 = v8 <= 5184.0 || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 1128);
      if ( *(_DWORD *)(this + 1144) || !v9 )
      {
        if ( *(_BYTE *)(this + 896) )
        {
          sub_100C2AB0(this);
          sub_10031B50(this, 0.0);
          if ( v9 )
          {
            v11 = sub_100BDCE0(this, 62);
            sub_100C1170(this, v11);
            *(_DWORD *)(this + 1144) = 1;
          }
          else
          {
            v12 = sub_100BDCE0(this, 1);
            sub_100C1170(this, v12);
            *(_DWORD *)(this + 1144) = 0;
          }
          v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  0.80000001,
                  1.2);
          sub_10045B20(this, v14);
        }
      }
      else
      {
        v10 = sub_100BDCE0(this, 62);
        sub_100C1170(this, v10);
        *(_DWORD *)(this + 1144) = 1;
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
      sub_10305AA0(this);
      v13 = *(float *)(dword_106B31C8 + 12) + 0.1;
      return sub_100EC4A0((int *)this, v13, 0);
    }
    else
    {
      return sub_103061A0(this);
    }
  }
  else
  {
    result = sub_103061A0(this);
    *(_BYTE *)(this + 1140) = 1;
  }
  return result;
}
