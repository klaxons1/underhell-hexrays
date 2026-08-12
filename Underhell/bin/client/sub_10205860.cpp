int __thiscall sub_10205860(float *this, _DWORD *a2, int a3, int a4, char a5, int a6)
{
  int result; // eax
  float *v8; // ebx
  int v9; // eax
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // rt0
  double v14; // st5
  double v15; // st7
  double v16; // rt1
  double v17; // st5
  double v18; // st6
  int v19; // [esp+18h] [ebp-24h]
  float *v20; // [esp+1Ch] [ebp-20h]
  float *v21; // [esp+20h] [ebp-1Ch]
  float v22; // [esp+24h] [ebp-18h] BYREF
  float v23; // [esp+28h] [ebp-14h]
  float v24; // [esp+2Ch] [ebp-10h]
  int v25[3]; // [esp+30h] [ebp-Ch] BYREF
  float *v26; // [esp+40h] [ebp+4h]

  result = *((_DWORD *)this + 17);
  if ( result > 63 )
  {
    v19 = 63;
  }
  else if ( result >= 0 )
  {
    v19 = *((_DWORD *)this + 17);
  }
  else
  {
    v19 = 0;
  }
  if ( a4 )
  {
    v26 = this + 14;
    v20 = this + 11;
    do
    {
      --a4;
      v8 = (float *)(a2[1517] + 4 * ((a3 & 3) + a3 / 4 * a2[1581]));
      v9 = a2[1655];
      v21 = (float *)(a2[1519] + 4 * ((a3 & 3) + a3 / 4 * a2[1583]));
      a2[1655] = v9 + 1;
      sub_10204B20(a2, v9, v20, v26, &v22);
      sub_101F8ED0((int)a2, v19, *(float *)(a2[1525] + 4 * ((a3 & 3) + a3 / 4 * a2[1589])), (float *)v25);
      result = (int)v21;
      v10 = *(float *)v25 + v22;
      v22 = v10;
      v11 = *(float *)&v25[1] + v23;
      v23 = v11;
      v12 = *(float *)&v25[2] + v24;
      v24 = v12;
      v8[8] = v12;
      v13 = v12;
      v14 = v10;
      v15 = v13;
      *v8 = v14;
      v16 = v14;
      v17 = v11;
      v18 = v16;
      v8[4] = v17;
      if ( v21 )
      {
        if ( (a5 & 4) != 0 )
        {
          *v21 = v18;
          v21[4] = v17;
          v21[8] = v15;
        }
      }
      ++a3;
    }
    while ( a4 );
  }
  return result;
}
