float *__thiscall sub_103DF820(_DWORD *this, float *a2)
{
  double v3; // st7
  float *result; // eax
  float v5; // edx
  float v6; // ecx
  double v7; // st5
  float v8; // edx
  float v9; // ecx
  double v10; // st7
  double v11; // st6
  double v12; // st6
  float v13; // [esp+1Ch] [ebp-24h]
  float v14; // [esp+24h] [ebp-1Ch] BYREF
  float v15; // [esp+28h] [ebp-18h]
  float v16; // [esp+2Ch] [ebp-14h]
  float v17; // [esp+30h] [ebp-10h] BYREF
  float v18; // [esp+34h] [ebp-Ch]
  float v19; // [esp+38h] [ebp-8h]
  float v20; // [esp+3Ch] [ebp-4h]

  sub_10265F90(this, &v17);
  v13 = v17 * v17 + v18 * v18 + v19 * v19;
  v3 = off_10689708(v13);
  v20 = v3;
  if ( v3 < 150.0 )
  {
    (*(void (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD))(*this + 528))(this, &v14, 0, 0);
    if ( v20 <= 1.0 )
      v7 = 1.0;
    else
      v7 = v20;
    v14 = v14 * v7;
    v15 = v15 * v7;
    v16 = v7 * v16;
    if ( v20 > 75.0 )
    {
      v10 = sub_102191B0(v20, 75.0, 150.0, 0.0, 1.0);
      result = a2;
      v17 = v14 + (v17 - v14) * v10;
      v11 = v18;
      *a2 = v17;
      v18 = v15 + (v11 - v15) * v10;
      v12 = v19;
      a2[1] = v18;
      v19 = v10 * (v12 - v16) + v16;
      a2[2] = v19;
    }
    else
    {
      result = a2;
      v8 = v15;
      *a2 = v14;
      v9 = v16;
      a2[1] = v8;
      a2[2] = v9;
    }
  }
  else
  {
    result = a2;
    v5 = v18;
    *a2 = v17;
    v6 = v19;
    a2[1] = v5;
    a2[2] = v6;
  }
  return result;
}
