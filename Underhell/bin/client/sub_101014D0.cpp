void __thiscall sub_101014D0(_WORD *this, float *a2, float *a3, int a4)
{
  int v4; // esi
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st4
  double v9; // st3
  double v10; // st2
  double v11; // st7
  _DWORD v12[7]; // [esp+4h] [ebp-1Ch] BYREF

  if ( a4 )
  {
    v4 = (int)(this + 58);
    v12[0] = a4;
    if ( sub_100FBA60(this + 58, (int)v12) == -1 )
    {
      v5 = *a2;
      v6 = a2[1];
      v7 = a2[2];
      v8 = *a3;
      v9 = a3[1];
      v12[0] = a4;
      v10 = v5;
      v11 = a3[2];
      *(float *)&v12[1] = v10;
      *(float *)&v12[2] = v6;
      *(float *)&v12[3] = v7;
      *(float *)&v12[4] = v8;
      *(float *)&v12[5] = v9;
      *(float *)&v12[6] = v11;
      sub_10101190(v4, (int)v12);
    }
  }
}
