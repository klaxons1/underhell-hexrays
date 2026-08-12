float *__thiscall sub_10370FC0(void *this, float *a2, int a3, float a4)
{
  double v4; // st7
  float *v5; // eax
  double v6; // st7
  float *result; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // [esp+10h] [ebp-2Ch]
  float v11; // [esp+14h] [ebp-28h]
  float v12[3]; // [esp+18h] [ebp-24h] BYREF
  _BYTE v13[12]; // [esp+24h] [ebp-18h] BYREF
  float v14; // [esp+30h] [ebp-Ch] BYREF
  float v15; // [esp+34h] [ebp-8h]
  float v16; // [esp+38h] [ebp-4h]
  float v17; // [esp+4Ch] [ebp+10h]

  sub_100BCCA0(this, dword_10674300, (int)&v14, (int)v13);
  if ( LOBYTE(a4) )
  {
    v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            0.0,
            LODWORD(flt_106E8550));
    v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           LODWORD(flt_106E8550))
       + v17;
    v11 = v4;
    v10 = -v4;
    v5 = sub_1001F010(v12, v10, v11);
    *a2 = *v5 + v14;
    a2[1] = v5[1] + v15;
    v6 = v5[2];
    result = a2;
    a2[2] = v6 + v16;
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
  return result;
}
