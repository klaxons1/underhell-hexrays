_DWORD *__thiscall sub_100A4180(_DWORD *this, char *String2, float *a3, float *a4)
{
  _DWORD *v4; // esi
  const char *v5; // eax
  float v7; // [esp+0h] [ebp-4Ch]
  float v8[3]; // [esp+10h] [ebp-3Ch] BYREF
  float v9[3]; // [esp+1Ch] [ebp-30h] BYREF
  float v10[3]; // [esp+28h] [ebp-24h] BYREF
  float v11; // [esp+34h] [ebp-18h] BYREF
  float v12; // [esp+38h] [ebp-14h]
  float v13; // [esp+3Ch] [ebp-10h]
  float v14; // [esp+40h] [ebp-Ch] BYREF
  float v15; // [esp+44h] [ebp-8h]
  float v16; // [esp+48h] [ebp-4h]

  v4 = (_DWORD *)*this;
  if ( !*this )
    return 0;
  while ( 1 )
  {
    v5 = (const char *)(*(int (__thiscall **)(_DWORD *))(*v4 + 44))(v4);
    if ( !_stricmp(v5, String2) )
    {
      sub_100EB600(&v14, &v11);
      v10[0] = *a3 - *a4;
      v10[1] = a3[1] - a4[1];
      v10[2] = a3[2] - a4[2];
      sub_101EE6C0(v10, &v14, &v11);
      v9[0] = *a3 + *a4;
      v9[1] = a3[1] + a4[1];
      v9[2] = a4[2] + a3[2];
      sub_101EE6C0(v9, &v14, &v11);
      v7 = (v13 - v16) * (v13 - v16) + (v12 - v15) * (v12 - v15) + (v11 - v14) * (v11 - v14);
      if ( off_103EDFE0(v7) < 120.0 )
        break;
    }
    v4 = (_DWORD *)v4[94];
    if ( !v4 )
      return 0;
  }
  sub_100EC3F0(&v14, &v11, 1);
  v8[0] = (v14 + v11) * 0.5;
  v8[1] = (v15 + v12) * 0.5;
  v8[2] = 0.5 * (v16 + v13);
  sub_100F3060(v8);
  return v4;
}
