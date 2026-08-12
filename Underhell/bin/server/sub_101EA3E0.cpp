int __thiscall sub_101EA3E0(int *this, int a2)
{
  int v2; // ebx
  int v4; // eax
  double v5; // st7
  double v7; // st7
  int v8; // edi
  int v9; // eax
  double v10; // st7
  _DWORD *v11; // eax
  int *v12; // ecx
  int v13; // edi
  double v14; // st5
  double v15; // st6
  double v16; // st3
  _DWORD *v17; // eax
  float *v18; // eax
  int v19; // eax
  bool v20; // cc
  int v21; // edi
  bool v22; // zf
  bool v23; // sf
  bool v24; // of
  double v25; // st7
  int v26; // edi
  int v27; // eax
  double v28; // st7
  int v29; // eax
  double ArgList; // [esp+Ch] [ebp-1E8h]
  char Buffer[256]; // [esp+4Ch] [ebp-1A8h] BYREF
  char v32[64]; // [esp+14Ch] [ebp-A8h] BYREF
  int v33[13]; // [esp+18Ch] [ebp-68h] BYREF
  int v34; // [esp+1C0h] [ebp-34h]
  int v35; // [esp+1CCh] [ebp-28h]
  int v36; // [esp+1DCh] [ebp-18h]
  int v37; // [esp+1E0h] [ebp-14h]
  BOOL v38; // [esp+1E4h] [ebp-10h]
  float v39; // [esp+1E8h] [ebp-Ch]
  float v40; // [esp+1ECh] [ebp-8h]
  int v41; // [esp+1F0h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 64);
  v39 = (float)this[55];
  v36 = 1;
  sub_1001E4E0(v33, a2);
  v4 = (*(int (__thiscall **)(int *))(*this + 1092))(this);
  if ( v4 && !(*(unsigned __int8 (__thiscall **)(int, int *))(*(_DWORD *)v4 + 48))(v4, v33)
    || sub_101172D0() && !sub_101E40F0(this, v33)
    || (this[64] & 0x4000) != 0 )
  {
    return 0;
  }
  v5 = *(float *)&v34;
  if ( (this[59] & 0x2000000) != 0 && (double)this[55] - v5 <= 0.0 )
  {
    a2 = 1;
    sub_1002AB00(this + 55, &a2);
    return 0;
  }
  if ( 0.0 == v5 )
    return 0;
  if ( *(_DWORD *)(dword_106BB9F4 + 48) )
    v7 = 0.5;
  else
    v7 = 1.0;
  *(float *)&a2 = v7;
  if ( (v35 & 0x40) != 0 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) )
    *(float *)&a2 = *(float *)&a2 + *(float *)&a2;
  if ( !(*(unsigned __int8 (__thiscall **)(int *))(*this + 264))(this) )
    return 0;
  v8 = *(_DWORD *)dword_106B3CDC;
  v9 = sub_1001E870(v33);
  if ( !(*(unsigned __int8 (__thiscall **)(int, int *, int))(v8 + 228))(dword_106B3CDC, this, v9) )
    return 0;
  if ( !*(_DWORD *)(dword_106BBC34 + 48) )
    goto LABEL_22;
  v10 = *(float *)&v34;
  if ( *(float *)&v34 > 0.0 )
  {
    sub_10247D80(v35, v32, 0x200u);
    v41 = v34;
    sub_10019640(this);
    v11 = (_DWORD *)sub_100232D0(v33);
    sub_100D6390(v11);
    sub_10019640(this);
    sub_10019640(this);
    sub_100D6390(this);
    ArgList = *(float *)(dword_106B31C8 + 12);
    sub_10429A00(
      Buffer,
      0x100u,
      "%f: Player %s at [%0.2f %0.2f %0.2f] took %f damage from %s, type %s\n",
      SLOBYTE(ArgList));
    Msg(Buffer);
LABEL_22:
    v10 = *(float *)&v34;
  }
  v12 = this + 1002;
  this[860] = (int)v10;
  v13 = 0;
  v40 = *((float *)this + 1002);
  if ( v40 != 0.0 && (v35 & 0x74120) == 0 )
  {
    *(float *)&v41 = 0.2 * v10;
    v14 = (v10 - 0.2 * v10) * *(float *)&a2;
    v15 = *(float *)&a2;
    *(float *)&a2 = v14;
    if ( !*(_DWORD *)(dword_106BB9F4 + 48) && v14 < 1.0 )
    {
      *(float *)&a2 = 1.0;
      v14 = 1.0;
    }
    v16 = (double)SLODWORD(v40);
    if ( v16 >= v14 )
    {
      *((float *)this + 865) = v14;
      sub_101E9DD0(v12, (float *)&a2);
    }
    else
    {
      *(float *)&a2 = 0.0;
      *(float *)&v41 = v10 - 1.0 / v15 * v16;
      *((float *)this + 865) = v16;
      sub_101E9D90(v12, &a2);
    }
    v34 = v41;
  }
  v37 = sub_100C7DC0(this, 0, v33);
  if ( !v37 )
    return 0;
  if ( sub_100232D0(v33) && *(_DWORD *)(sub_100232D0(v33) + 24) )
  {
    v17 = (_DWORD *)sub_100232D0(v33);
    v18 = (float *)sub_10019640(v17);
    this[861] = *(int *)v18;
    this[862] = *((int *)v18 + 1);
    this[863] = *((int *)v18 + 2);
  }
  a2 = (int)*(float *)&v34;
  *((float *)this + 864) = (double)a2 + *((float *)this + 864);
  do
  {
    if ( ((0x8000 << v13) & v35) != 0
      && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 64))(dword_106B3CDC, 0x8000 << v13) )
    {
      *((_BYTE *)this + v13 + 3536) = 0;
    }
    ++v13;
  }
  while ( v13 < 8 );
  (*(void (__thiscall **)(int *, int, int))(*this + 1200))(this, v34, v2);
  v19 = this[55];
  if ( v19 > 75 || (v20 = this[860] < 5, *(float *)&v41 = 0.0, v20) )
    v41 = 1;
  v21 = v36;
  v24 = __OFSUB__(this[860], 25);
  v22 = this[860] == 25;
  v23 = this[860] - 25 < 0;
  this[867] = -1;
  this[866] |= v2;
  a2 = !(v23 ^ v24 | v22);
  v38 = v19 < 30;
  while ( (*(float *)&v41 == 0.0
        || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 64))(dword_106B3CDC, v2))
       && v21
       && v2 )
  {
    v21 = 0;
    if ( (v2 & 0x80u) != 0 )
    {
      if ( *(float *)&a2 != 0.0 )
        sub_101E8F80((int)this, (int)"!HEV_DMG4", 0, 30);
      v2 &= ~0x80u;
      v21 = 1;
    }
    if ( (v2 & 0x21) != 0 )
    {
      if ( *(float *)&a2 == 0.0 )
        sub_101E8F80((int)this, (int)"!HEV_DMG4", 0, 30);
      else
        sub_101E8F80((int)this, (int)"!HEV_DMG5", 0, 30);
      v2 &= 0xFFFFFFDE;
      v21 = 1;
    }
    if ( (v2 & 2) != 0 )
    {
      if ( this[860] > 5 )
        sub_101E8F80((int)this, (int)"!HEV_DMG6", 0, 30);
      v2 &= ~2u;
      v21 = 1;
    }
    if ( (v2 & 4) != 0 )
    {
      if ( *(float *)&a2 == 0.0 )
        sub_101E8F80((int)this, (int)"!HEV_DMG0", 0, 30);
      else
        sub_101E8F80((int)this, (int)"!HEV_DMG1", 0, 30);
      v2 &= ~4u;
      v21 = 1;
    }
    if ( (v2 & 0x200) != 0 )
    {
      if ( *(float *)&a2 != 0.0 )
        sub_101E8F80((int)this, (int)"!HEV_DMG2", 0, 60);
      v2 &= ~0x200u;
      v21 = 1;
    }
    if ( (v2 & 0x28000) != 0 )
    {
      if ( (v2 & 0x20000) != 0 )
      {
        this[882] = (int)((double)this[882] + *(float *)&v34);
        v25 = *(float *)(dword_106B31C8 + 12);
        *((_BYTE *)this + 3538) = 0;
        *((float *)this + 879) = v25;
      }
      sub_101E8F80((int)this, (int)"!HEV_DMG3", 0, 60);
      v2 &= 0xFFFD7FFF;
      v21 = 1;
    }
    if ( (v2 & 0x100000) != 0 )
    {
      sub_101E8F80((int)this, (int)"!HEV_DET1", 0, 60);
      v2 &= ~0x100000u;
      v21 = 1;
    }
    if ( (v2 & 0x10000) != 0 )
    {
      sub_101E8F80((int)this, (int)"!HEV_DET0", 0, 60);
      v2 &= ~0x10000u;
      v21 = 1;
    }
    if ( (v2 & 0x40000) != 0 )
    {
      sub_101E8F80((int)this, (int)"!HEV_DET2", 0, 60);
      v2 &= ~0x40000u;
      v21 = 1;
    }
    if ( (v2 & 0x100) != 0 )
    {
      v2 &= ~0x100u;
      v21 = 1;
    }
  }
  v22 = *(_DWORD *)(dword_10698344 + 48) == 0;
  v40 = -2.0;
  if ( !v22 )
  {
    if ( sub_1001E870(v33) )
    {
      v26 = *this;
      v27 = sub_1001E870(v33);
      if ( !(*(unsigned __int8 (__thiscall **)(int *, int))(v26 + 876))(this, v27) )
      {
        if ( *(float *)&v34 <= 10.0 )
          v28 = RandomFloat(-5.0, -7.0);
        else
          v28 = -10.0;
        v40 = v28;
      }
    }
  }
  if ( v40 != *((float *)this + 576) )
  {
    (*(void (__thiscall **)(int *, int *))this[548])(this + 548, this + 576);
    *((float *)this + 576) = v40;
  }
  if ( *(float *)&v41 == 0.0 )
  {
    if ( *(float *)&a2 != 0.0 && v39 >= 75.0 )
    {
      sub_101E8F80((int)this, (int)"!HEV_MED1", 0, 1800);
      sub_101E8F80((int)this, (int)"!HEV_HEAL7", 0, 1800);
    }
    if ( v38 && v39 < 75.0 )
    {
      v29 = this[55];
      if ( v29 >= 6 )
      {
        if ( v29 < 20 )
          sub_101E8F80((int)this, (int)"!HEV_HLTH2", 0, 600);
      }
      else
      {
        sub_101E8F80((int)this, (int)"!HEV_HLTH3", 0, 600);
      }
      if ( !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 3)
        && v39 < 50.0 )
      {
        sub_101E8F80((int)this, (int)"!HEV_DMG7", 0, 300);
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 64))(dword_106B3CDC, v35) && v39 < 75.0 )
  {
    if ( v39 >= 50.0 )
    {
      sub_101E8F80((int)this, (int)"!HEV_HLTH1", 0, 600);
    }
    else if ( !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 3) )
    {
      sub_101E8F80((int)this, (int)"!HEV_DMG7", 0, 300);
    }
  }
  if ( (v2 & 0x40) != 0 )
    (*(void (__thiscall **)(int *, int *))(*this + 1204))(this, v33);
  return v37;
}
