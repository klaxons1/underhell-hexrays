void __thiscall sub_10318150(int this, float *a2)
{
  bool v3; // bl
  float *v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // rt0
  double v9; // st6
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st7
  float *v14; // eax
  double v15; // st6
  double v16; // st7
  double v17; // st7
  double v18; // st6
  char v19; // [esp+Bh] [ebp-1h]

  v3 = *(_DWORD *)(this + 4120) == 4;
  if ( (*(_DWORD *)(this + 248) & 0x100000) != 0
    || (v19 = 0, *(float *)(this + 3808) + 5.0 > *(float *)(dword_106B31C8 + 12)) )
  {
    v19 = 1;
  }
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) || v3 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v11 = a2[1] - *(float *)(this + 584);
    v12 = *a2 - *(float *)(this + 580);
    v13 = v12 * v12 + v11 * v11;
    if ( v13 > 2500.0 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v18 = a2[1] - *(float *)(this + 584);
      v17 = a2[2] - *(float *)(this + 588);
      *(float *)(this + 3796) = *a2 - *(float *)(this + 580);
      *(float *)(this + 3800) = v18;
    }
    else
    {
      if ( v13 <= 1.0 || !v19 || *(_DWORD *)(this + 4212) != 6 )
      {
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, this + 3796, 0, 0);
        goto LABEL_32;
      }
      v14 = (float *)sub_10019640((_DWORD *)this);
      v15 = *(float *)(this + 3824) - v14[1];
      v16 = *(float *)(this + 3828) - v14[2];
      *(float *)(this + 3796) = *(float *)(this + 3820) - *v14;
      *(float *)(this + 3800) = v15;
      *(float *)(this + 3804) = v16;
      v17 = 0.0;
    }
    *(float *)(this + 3804) = v17;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(this + 3695) && !*(_BYTE *)(this + 3692) )
  {
    if ( !sub_10317800(this) && *(_BYTE *)(this + 4268) != 1 )
      goto LABEL_13;
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v9 = a2[1] - *(float *)(this + 584);
    v10 = a2[2] - *(float *)(this + 588);
    *(float *)(this + 3796) = *a2 - *(float *)(this + 580);
    *(float *)(this + 3800) = v9;
    *(float *)(this + 3804) = v10;
  }
  else
  {
    if ( *(_BYTE *)(this + 4268) == 1 && *(_DWORD *)(dword_10698344 + 48) )
    {
      v4 = (float *)sub_10019640((_DWORD *)this);
      v5 = *a2 - *v4;
      v6 = a2[1] - v4[1];
      v7 = a2[2];
LABEL_14:
      v8 = v7 - v4[2];
      *(float *)(this + 3796) = v5;
      *(float *)(this + 3800) = v6;
      *(float *)(this + 3804) = v8;
      goto LABEL_32;
    }
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 2276))(this) && v19 )
    {
LABEL_13:
      v4 = (float *)sub_10019640((_DWORD *)this);
      v5 = *(float *)(this + 3820) - *v4;
      v6 = *(float *)(this + 3824) - v4[1];
      v7 = *(float *)(this + 3828);
      goto LABEL_14;
    }
  }
LABEL_32:
  off_10689714();
}
