double __thiscall sub_10044AD0(float *this, float a2)
{
  int v4; // eax
  float v5; // edx
  double v6; // st7
  double (__thiscall *v7)(float *); // eax
  double v8; // st7
  double v9; // st7
  int v10; // edi
  double v11; // st7
  int v12; // ebx
  double v13; // st7
  double v14; // st7
  float v15; // [esp+8h] [ebp-40h]
  _BYTE v16[12]; // [esp+18h] [ebp-30h] BYREF
  float v17; // [esp+24h] [ebp-24h] BYREF
  float v18; // [esp+28h] [ebp-20h]
  float v19; // [esp+2Ch] [ebp-1Ch]
  float v20; // [esp+30h] [ebp-18h]
  float v21; // [esp+34h] [ebp-14h]
  float v22; // [esp+38h] [ebp-10h]
  float v23; // [esp+3Ch] [ebp-Ch]
  float v24; // [esp+40h] [ebp-8h]
  float v25; // [esp+44h] [ebp-4h]
  float v26; // [esp+50h] [ebp+8h]

  if ( !LOBYTE(a2) && ((_DWORD)this[679] & 0x40000) == 0 && !sub_10023D10(this, 10) )
    return this[669];
  v4 = *((_DWORD *)this + 651);
  v5 = *this;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  v6 = *(float *)(v4 + 20);
  v7 = *(double (__thiscall **)(float *))(LODWORD(v5) + 2156);
  v25 = v6;
  v23 = v6;
  v8 = v7(this);
  v20 = v8;
  v26 = 0.0;
  if ( 0.0 == v8 )
    return v25;
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60(this);
  v9 = this[657] + this[147];
  *(float *)&v10 = 0.0;
  v24 = 0.0;
  v21 = v9;
  while ( 2 )
  {
    v11 = (double)SLODWORD(v24);
    *(float *)&v12 = NAN;
    v24 = NAN;
    v22 = v11 * 45.0;
    do
    {
      v18 = (double)SLODWORD(v24) * v22 + v25;
      sub_104222B0(&v17, v16, 0, 0);
      v13 = ((double (__thiscall *)(float *, _BYTE *, _DWORD))*(_DWORD *)(*(_DWORD *)this + 1292))(
              this,
              v16,
              LODWORD(v21));
      v24 = v13;
      if ( v26 >= v13 )
      {
        v14 = v26;
      }
      else
      {
        v15 = v13;
        if ( (*(unsigned __int8 (__thiscall **)(float *, _BYTE *, _DWORD))(*(_DWORD *)this + 2152))(
               this,
               v16,
               LODWORD(v15)) )
        {
          v23 = v18;
          v14 = v24;
          v26 = v24;
        }
        else
        {
          v14 = v26;
        }
      }
      if ( v20 < v14 )
        return v23;
      if ( *(float *)&v10 == 0.0 )
        break;
      if ( v10 == 4 )
        break;
      v12 += 2;
      v24 = *(float *)&v12;
    }
    while ( v12 <= 1 );
    if ( v20 < v14 )
      return v23;
    ++v10;
    v24 = *(float *)&v10;
    if ( v10 <= 4 )
      continue;
    break;
  }
  return v23;
}
