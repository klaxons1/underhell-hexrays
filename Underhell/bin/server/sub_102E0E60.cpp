void __thiscall sub_102E0E60(int this)
{
  int v2; // ecx
  double v3; // st7
  int *v4; // edi
  double v5; // st7
  int v6; // esi
  int *v7; // eax
  int *v8; // ecx
  bool v9; // zf
  double v10; // st7
  float v11; // [esp+4h] [ebp-10h]
  float v12; // [esp+Ch] [ebp-8h]
  float v13; // [esp+10h] [ebp-4h] BYREF

  v2 = *(_DWORD *)(this + 5092);
  if ( v2 )
  {
    v9 = *(_DWORD *)(dword_106E0974 + 48) == 0;
    v13 = *(float *)(this + 5596);
    if ( v9 && (v2 & LODWORD(dword_10665E54[0])) != 0 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      if ( 0.0 == fabs(*(float *)(this + 476)) && 0.0 == fabs(*((float *)sub_10019660((_DWORD *)this) + 1)) )
        v13 = v13 - sub_102DD560(dword_10665E54);
    }
    if ( (LODWORD(dword_10665E5C[0]) & *(_DWORD *)(this + 5092)) != 0 )
    {
      v12 = 1.0 / *(float *)(this + 5608);
      v10 = v13 - sub_102DD560(dword_10665E5C) * (1.0 - v12);
    }
    else
    {
      v10 = v13;
    }
    v11 = v10 * *(float *)(dword_106B31C8 + 16);
    if ( !sub_102DEF10(this, v11) )
    {
      if ( *(_BYTE *)(this + 5216) )
        sub_102E0CB0(this);
      if ( sub_102DA6D0() && (*(int (__thiscall **)(int))(*(_DWORD *)this + 1264))(this) )
        (*(void (__thiscall **)(int))(*(_DWORD *)this + 1272))(this);
    }
    if ( sub_102DA6D0()
      && *(float *)(this + 5084) < 4.8000002
      && (*(int (__thiscall **)(int))(*(_DWORD *)this + 1264))(this) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 1272))(this);
    }
  }
  else if ( *(float *)(this + 5084) < 100.0 && *(float *)(this + 5192) + 0.5 <= *(float *)(dword_106B31C8 + 12) )
  {
    v3 = (double)*(int *)(this + 2184);
    v4 = (int *)(this + 2184);
    if ( v3 < 25.0 )
      v3 = 25.0;
    v13 = v3 * 0.0099999998 * 12.5 * *(float *)(dword_106B31C8 + 16);
    sub_102DEF90(this, v13);
    v5 = v13 + *(float *)(this + 2132);
    *(float *)(this + 2132) = v5;
    if ( v5 >= 50.0 )
    {
      *(float *)(this + 2132) = 0.0;
      v6 = *v4 - 1;
      v7 = v4 - 546;
      if ( *((_BYTE *)v4 - 2100) )
      {
        *((_BYTE *)v7 + 88) |= 1u;
      }
      else
      {
        v8 = (int *)v7[6];
        if ( v8 )
          sub_100194B0(v8, 2184);
      }
      *v4 = v6;
      if ( *v4 < 0 )
      {
        v13 = 0.0;
        sub_101E9E60(v4, &v13);
      }
    }
  }
}
