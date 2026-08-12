_DWORD *__cdecl sub_100A42D0(_DWORD *a1, char *String2, float *a3, float *a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  float v7[3]; // [esp+Ch] [ebp-18h] BYREF
  float v8[3]; // [esp+18h] [ebp-Ch] BYREF

  v4 = sub_100A4180(&dword_1042E094, String2, a3, a4);
  if ( v4 )
  {
    v5 = a1;
    *a1 = 0;
  }
  else
  {
    v4 = (_DWORD *)sub_100DDA40(380);
    if ( v4 )
    {
      sub_100F2BA0(String2);
      *v4 = &CFleckParticles::`vftable';
      sub_100E8AB0(v4 + 65);
      v4[94] = 0;
      v4[94] = dword_1042E094;
      dword_1042E094 = (int)v4;
      v8[0] = *a3 + *a4;
      v8[1] = a4[1] + a3[1];
      v8[2] = a3[2] + a4[2];
      v7[0] = *a3 - *a4;
      v7[1] = a3[1] - a4[1];
      v7[2] = a3[2] - a4[2];
      sub_100EC3F0(v7, v8, 1);
      sub_100F3060(a3);
    }
    else
    {
      v4 = 0;
    }
    v5 = a1;
    *a1 = 0;
    if ( !v4 )
      return v5;
  }
  sub_100F2950(v4);
  if ( *v5 )
    sub_100F2FF0(*v5);
  *v5 = v4;
  return v5;
}
