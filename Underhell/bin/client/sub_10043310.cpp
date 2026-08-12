float *__thiscall sub_10043310(float *this, float *a2)
{
  double v3; // st7
  float *result; // eax
  double v5; // st7
  double v6; // st5
  double v7; // st4

  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 300))(dword_1041315C)
    && *(_DWORD *)(dword_1040744C + 48)
    && (*(int (__thiscall **)(int *))(*off_103DC72C[0] + 68))(off_103DC72C[0]) )
  {
    v3 = (*((float *)off_103DC81C + 3) - this[1158]) / *(float *)(dword_10407494 + 44);
    result = a2;
    if ( v3 < 1.0 )
    {
      v5 = 1.0 - v3;
      v6 = this[1156] * v5;
      v7 = this[1157];
      *a2 = this[1155] * v5;
      a2[1] = v6;
      a2[2] = v5 * v7;
    }
    else
    {
      *a2 = 0.0;
      a2[1] = 0.0;
      a2[2] = 0.0;
    }
  }
  else
  {
    result = a2;
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
  }
  return result;
}
