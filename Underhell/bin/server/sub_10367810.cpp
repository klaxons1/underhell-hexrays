int __thiscall sub_10367810(int this)
{
  int result; // eax
  float *v3; // eax
  float v4; // ecx
  float v5; // edx
  float v6; // eax
  double v7; // st7
  double v8; // st6
  int v9; // eax
  long double v10; // st6
  long double v11; // rt0
  long double v12; // st6
  long double v13; // st7
  double v14; // st3
  double v15; // st5
  double v16; // st6
  double v17; // st7
  double v18; // st7
  double v19; // st7
  int *v20; // ecx
  float v21; // [esp+4h] [ebp-28h]
  float v22; // [esp+Ch] [ebp-20h] BYREF
  float v23; // [esp+10h] [ebp-1Ch]
  float v24; // [esp+14h] [ebp-18h]
  float v25; // [esp+18h] [ebp-14h] BYREF
  float v26; // [esp+1Ch] [ebp-10h]
  float v27; // [esp+20h] [ebp-Ch]
  float v28; // [esp+24h] [ebp-8h]
  float v29; // [esp+28h] [ebp-4h]

  sub_101C73D0((unsigned int *)this, 0);
  *(float *)(this + 4008) = *(float *)(this + 724);
  *(_BYTE *)(this + 4004) = 1;
  sub_1023C380((_DWORD *)this, (int)"NPC_FastZombie.LeapAttack", 0.0, 0);
  v22 = *(float *)(this + 716);
  v23 = *(float *)(this + 720);
  v24 = *(float *)(this + 724) + 1.0;
  sub_1025F370((void *)this, &v22, 0);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  if ( result )
  {
    v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)result + 576))(result);
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v22 = v4;
    v7 = *(float *)(dword_106B6F0C + 44);
    v24 = v6;
    v29 = v7;
    v23 = v5;
    if ( v7 <= 1.0 )
    {
      v7 = 1.0;
      v29 = 1.0;
    }
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    {
      sub_100DAE60(this);
      v7 = v29;
    }
    v8 = v24 - *(float *)(this + 588);
    if ( v8 >= 16.0 )
    {
      if ( v8 > 120.0 )
        v8 = 120.0;
    }
    else
    {
      v8 = 16.0;
    }
    v9 = *(_DWORD *)(this + 252) >> 11;
    v10 = sqrt(v8 * (v7 + v7));
    v29 = v10;
    v11 = v10;
    v12 = v10 / v7;
    v13 = v11;
    v28 = v12;
    if ( (v9 & 1) != 0 )
    {
      sub_100DAE60(this);
      v13 = v29;
    }
    v14 = 1.0 / v28;
    v15 = (v22 - *(float *)(this + 580)) * v14;
    v16 = (v23 - *(float *)(this + 584)) * v14;
    v25 = v15;
    v26 = v16;
    v27 = v13;
    v21 = v13 * v13 + v15 * v15 + v16 * v16;
    v17 = off_10689708(v21);
    if ( v17 > 1000.0 )
    {
      v18 = 1000.0 / v17;
      v25 = v25 * v18;
      v26 = v26 * v18;
      v27 = v18 * v27;
    }
    sub_100DD660(this, &v25);
    result = *(_DWORD *)(this + 1672);
    v29 = *(float *)(dword_106B31C8 + 12) + 2.0;
    if ( result != LODWORD(v29) )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        v19 = v29;
        *(_BYTE *)(this + 88) |= 1u;
        *(float *)(this + 1672) = v19;
      }
      else
      {
        v20 = *(int **)(this + 24);
        if ( v20 )
          result = sub_100194B0(v20, 1672);
        *(float *)(this + 1672) = v29;
      }
    }
  }
  return result;
}
