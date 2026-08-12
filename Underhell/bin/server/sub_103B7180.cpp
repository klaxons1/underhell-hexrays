bool __thiscall sub_103B7180(float *this, int a2, float a3)
{
  double v5; // st7
  double v6; // st7
  long double v7; // st7
  long double v8; // st6
  double v9; // st7
  double v10; // st7
  float v11; // [esp+10h] [ebp-6Ch]
  _BYTE v12[48]; // [esp+1Ch] [ebp-60h] BYREF
  _BYTE v13[12]; // [esp+4Ch] [ebp-30h] BYREF
  float v14; // [esp+58h] [ebp-24h]
  float v15; // [esp+5Ch] [ebp-20h]
  float v16; // [esp+60h] [ebp-1Ch]
  float v17; // [esp+64h] [ebp-18h] BYREF
  float v18; // [esp+68h] [ebp-14h]
  float v19; // [esp+6Ch] [ebp-10h]
  float v20; // [esp+70h] [ebp-Ch]
  float v21; // [esp+74h] [ebp-8h]
  float v22; // [esp+78h] [ebp-4h]
  int v23; // [esp+84h] [ebp+8h]

  if ( !a2 )
    return 1;
  (*(void (__thiscall **)(float *, int, _BYTE *))(*(_DWORD *)this + 796))(this, dword_106EAD50, v12);
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  sub_103B4D60(this + 925, (float *)(a2 + 580));
  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  sub_10421BA0(a2 + 580, v12, v13);
  sub_10422540(v13, &v17);
  v5 = v17;
  sub_10424C10(v17, 0.0);
  v17 = v5;
  v6 = v18;
  sub_10424C10(v18, 0.0);
  v18 = v6;
  v22 = this[917] + v6;
  v21 = this[918] + v17;
  v14 = v17;
  v15 = v6;
  v16 = v19;
  v20 = off_10689714();
  v7 = fabs(v18 * (a3 * 16.0));
  v8 = fabs(a3 * 16.0 * v17);
  *(float *)&v23 = v8;
  if ( v7 <= 5.0 )
    v7 = 5.0;
  if ( v8 <= 5.0 )
    *(float *)&v23 = 5.0;
  v11 = v7;
  v9 = v22;
  sub_10424B10(v22, this[917], v11);
  this[917] = v9;
  v10 = v21;
  sub_10424B10(v21, this[918], *(float *)&v23);
  this[918] = v10;
  sub_10019C10(this, dword_106EAD58, this[917]);
  sub_10019C10(this, dword_106EAD54, this[918]);
  this[918] = sub_100BE820((int)this, dword_106EAD54);
  this[917] = sub_100BE820((int)this, dword_106EAD58);
  return v20 < 1.0;
}
