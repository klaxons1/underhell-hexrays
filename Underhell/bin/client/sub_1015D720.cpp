float *__thiscall sub_1015D720(_DWORD *this)
{
  float *result; // eax
  float *v3; // esi
  int v4; // [esp+4h] [ebp-18h]
  int v5; // [esp+Ch] [ebp-10h] BYREF
  float v6; // [esp+10h] [ebp-Ch]
  float v7; // [esp+14h] [ebp-8h]
  int v8; // [esp+18h] [ebp-4h]

  *(float *)&v5 = (double)sub_10115FB0() * 0.000030518509 * 8.0 - 4.0;
  v6 = (double)sub_10115FB0() * 0.000030518509 * 8.0 - 4.0;
  v8 = sub_10115FB0();
  v4 = this[368];
  v7 = (double)v8 * 0.000030518509 * 8.0 - 4.0;
  result = (float *)sub_100F06D0((int)(this + 299), (int)this, 60, v4);
  v3 = result;
  if ( result )
  {
    result[3] = *(float *)&v5;
    result[4] = v6;
    result[5] = v7;
    v8 = sub_100EB330(0, 360);
    v3[9] = (float)v8;
    sub_100EB300(-2.0, 2.0);
    v3[14] = -2.0;
    v3[11] = 0.0;
    *((_WORD *)v3 + 24) = -29471;
    *((_BYTE *)v3 + 50) = 64;
    v3[10] = 0.5;
    *((_BYTE *)v3 + 51) = sub_100EB330(64, 128);
    *((_WORD *)v3 + 26) = 256;
    *((_BYTE *)v3 + 54) = 1;
    result = sub_10042010((float *)&v5, -8.0, 8.0);
    v3[6] = *result;
    v3[7] = result[1];
    v3[8] = result[2];
  }
  return result;
}
