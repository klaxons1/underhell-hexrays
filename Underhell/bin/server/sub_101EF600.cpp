void __thiscall sub_101EF600(int this)
{
  double v2; // st7
  float v3; // eax
  float v4; // edx
  double v5; // st7
  _BYTE *v6; // ebx
  int v7; // edx
  int *v8; // ecx
  int v9; // eax
  int *v10; // ecx
  float v11; // eax
  int v12; // edx
  float v13; // [esp+Ch] [ebp-1Ch]
  float v14; // [esp+10h] [ebp-18h]
  float v15; // [esp+18h] [ebp-10h] BYREF
  float v16; // [esp+1Ch] [ebp-Ch]
  float v17; // [esp+20h] [ebp-8h]
  float v18; // [esp+24h] [ebp-4h]

  v13 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v13, 0);
  if ( (*(_BYTE *)(this + 256) & 1) != 0 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    v14 = *(float *)(this + 480) * *(float *)(this + 480)
        + *(float *)(this + 476) * *(float *)(this + 476)
        + *(float *)(this + 484) * *(float *)(this + 484);
    v2 = off_10689708(v14) - 20.0;
    v18 = v2;
    if ( v2 > 0.0 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      v3 = *(float *)(this + 476);
      v4 = *(float *)(this + 484);
      v16 = *(float *)(this + 480);
      v15 = v3;
      v17 = v4;
      off_10689714();
      v15 = v15 * v18;
      v16 = v16 * v18;
      v17 = v18 * v17;
      sub_100DD660(this, &v15);
    }
    else
    {
      sub_100DD660(this, &flt_106F1CA8);
    }
  }
  if ( sub_101E5F30((_DWORD *)this) )
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 1228))(this);
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 24))(this)
    || *(_BYTE *)(this + 896)
    || *(_BYTE *)(this + 224) != 1
    || ((*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this),
        v5 = *(float *)(this + 3412) + 1.0,
        *(float *)(this + 3412) = v5,
        v5 >= 60.0) )
  {
    v6 = (_BYTE *)(this + 224);
    if ( *(_BYTE *)(this + 224) == 1 )
    {
      if ( *v6 != 2 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 472))(this, this + 224);
        *v6 = 2;
      }
      *(float *)(this + 3476) = *(float *)(dword_106B31C8 + 12);
    }
    v7 = *(_DWORD *)(this + 864);
    v18 = 0.0;
    if ( v7 != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v8 = *(int **)(this + 24);
        if ( v8 )
          sub_100194B0(v8, 864);
      }
      *(float *)(this + 864) = 0.0;
    }
    sub_100EAB80((_DWORD *)this, 8);
    v9 = *(_DWORD *)(this + 864);
    v18 = 0.0;
    if ( v9 != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v10 = *(int **)(this + 24);
        if ( v10 )
          sub_100194B0(v10, 864);
      }
      *(float *)(this + 864) = 0.0;
    }
    LODWORD(v11) = *(_DWORD *)(this + 3292) & 0xFFFEFFFF;
    v18 = v11;
    if ( (LOBYTE(v11) & 4) != 0 && *(_BYTE *)(this + 4184) )
    {
      LODWORD(v11) &= ~4u;
      v18 = v11;
    }
    if ( *v6 == 2 )
    {
      if ( v11 == 0.0
        && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 268))(dword_106B3CDC, this)
        && *v6 != 3 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 472))(this, this + 224);
        *v6 = 3;
      }
    }
    else
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC)
        && *(float *)(this + 3472) + 3.0 < *(float *)(dword_106B31C8 + 12)
        && (*(_DWORD *)(this + 3416) & 8) == 0 )
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1316))(this, *(_DWORD *)(this + 3500));
      }
      if ( v18 != 0.0
        || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC)
        && *(int *)(dword_106B2EEC + 48) > 0
        && *(float *)(this + 3472) + 5.0 < *(float *)(dword_106B31C8 + 12) )
      {
        v12 = *(_DWORD *)(this + 3416) >> 3;
        *(float *)(this + 3412) = 0.0;
        *(_DWORD *)(this + 3292) = 0;
        sub_102D6E60(this, (v12 & 1) == 0);
        sub_100EC4A0((int *)this, -1.0, 0);
      }
    }
  }
}
