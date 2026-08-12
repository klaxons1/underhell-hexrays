void __thiscall sub_10153CA0(int this, float a2, float a3, float *a4, float *a5, float a6)
{
  double v7; // st7
  double v8; // st7
  unsigned __int16 *v9; // ecx
  double v10; // st7
  float v11; // [esp+0h] [ebp-20h]
  int v12; // [esp+18h] [ebp-8h]
  float v13; // [esp+1Ch] [ebp-4h]
  bool v14; // [esp+3Bh] [ebp+1Bh]

  v7 = a6;
  v14 = a6 > 1.0;
  v13 = 0.0;
  if ( v14 )
    v13 = v7 * a3;
  v12 = 0;
  while ( 1 )
  {
    v8 = a2;
    if ( a2 < (double)*(float *)(this + 1196) )
      break;
    v9 = (unsigned __int16 *)(*(_DWORD *)(this + 1212) + 8);
    a2 = v8 - *(float *)(this + 1196);
    *(float *)(this + 1196) = *(float *)(this + 1192);
    if ( sub_100EB1D0(v9) < *(_DWORD *)(dword_1043CFE4 + 48) )
    {
      if ( v12 <= 0 )
      {
        sub_101531B0((float *)this, a3);
        v10 = a3;
      }
      else
      {
        sub_101531B0((float *)this, v13);
        v10 = v13;
      }
      v11 = v10;
      sub_10153440(this, v11, a4, a5);
      if ( v14 )
        v12 = (v12 + 1) % 3;
    }
  }
  *(float *)(this + 1196) = *(float *)(this + 1196) - v8;
}
