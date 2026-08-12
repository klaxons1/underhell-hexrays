char __thiscall sub_10154480(int this, float *a2, float a3)
{
  float v4; // ecx
  double v5; // st6
  float v6; // edx
  double v7; // st6
  double v8; // st7
  int v9; // edi
  _BYTE v11[12]; // [esp+8h] [ebp-60h] BYREF
  _DWORD v12[18]; // [esp+14h] [ebp-54h] BYREF
  float v13[3]; // [esp+5Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+68h] [ebp+0h] BYREF

  if ( *(float *)(this + 1212) - (*((float *)off_103DC81C + 3) - a2[6]) < 0.0 )
    return 0;
  v4 = *a2;
  v5 = a3 * a2[3];
  v6 = a2[1];
  v13[2] = a2[2];
  v13[0] = v4;
  v7 = v5 + *a2;
  v13[1] = v6;
  *a2 = v7;
  a2[1] = a2[4] * a3 + a2[1];
  a2[2] = a3 * a2[5] + a2[2];
  if ( flt_1043D718 <= (double)a2[3] )
  {
    v8 = 5.0;
    if ( flt_1043D718 < (double)a2[3] )
    {
      a2[3] = a2[3] - 5.0 / a2[7];
      if ( flt_1043D718 > (double)a2[3] )
        a2[3] = flt_1043D718;
    }
  }
  else
  {
    v8 = 5.0;
    a2[3] = 5.0 / a2[7] + a2[3];
    if ( flt_1043D718 < (double)a2[3] )
      a2[3] = flt_1043D718;
  }
  if ( flt_1043D71C <= (double)a2[4] )
  {
    if ( flt_1043D71C < (double)a2[4] )
    {
      a2[4] = a2[4] - v8 / a2[7];
      if ( flt_1043D71C > (double)a2[4] )
        a2[4] = flt_1043D71C;
    }
  }
  else
  {
    a2[4] = v8 / a2[7] + a2[4];
    if ( flt_1043D71C < (double)a2[4] )
      a2[4] = flt_1043D71C;
  }
  if ( ((**(int (__thiscall ***)(int, int, _DWORD))dword_104131A0)(dword_104131A0, (int)a2, 0) & 1) != 0 )
  {
    if ( *(int *)(this + 1284) < 20 )
    {
      v9 = *(_DWORD *)(dword_1043CD8C + 48);
      if ( RandomInt(0, 100) < v9 )
      {
        sub_1000FCE0((int)&savedregs, (int)a2, v13, a2, 16432, 0, 0, (int)v11);
        if ( *(float *)&v12[8] < 1.0 )
          sub_1003BE10((int *)(this + 1272), *(_DWORD *)(this + 1284), v12);
      }
    }
    return 0;
  }
  return 1;
}
