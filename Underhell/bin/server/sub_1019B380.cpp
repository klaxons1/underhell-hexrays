int __thiscall sub_1019B380(_DWORD *this)
{
  int v1; // eax
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int result; // eax
  double v7; // st7
  int v8; // eax
  double v9; // st6
  double v10; // st5
  double i; // st4
  int v12; // eax
  double v13; // rt0
  double v14; // st4
  double v15; // st6
  float *v16; // ecx
  double v17; // rt1
  double v18; // st4
  double v19; // st7
  double v20; // rt2
  double v21; // st4
  double v22; // st6
  double v23; // rtt
  double v24; // st4
  double v25; // st5
  double v26; // rt0
  double v27; // st4
  int v28; // esi
  int v29; // eax
  int v30; // esi
  int v31; // esi
  int v32; // esi
  float v33; // [esp+0h] [ebp-24h]
  float v34; // [esp+4h] [ebp-20h]
  float v35; // [esp+8h] [ebp-1Ch]
  float v36; // [esp+Ch] [ebp-18h]
  int v37; // [esp+1Ch] [ebp-8h]
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  v1 = dword_106B8C14;
  v2 = 50;
  v3 = 50;
  v37 = dword_106B8C14;
  if ( dword_106B8C14 > 0 )
  {
    do
    {
      v4 = dword_106B8C10;
      if ( dword_106B8C10 )
      {
        while ( 1 )
        {
          if ( !*(_BYTE *)(v4 + 60) && sub_10197E10(v4, v2, v3) )
          {
            v5 = sub_1019B230(v4, v2, v3);
            if ( v5 < 0 )
              return Error("Generate: Error - Data corrupt.\n");
            v37 -= v5;
          }
          v4 = *(_DWORD *)(v4 + 48);
          if ( !v4 )
          {
            v1 = v37;
            break;
          }
        }
      }
      if ( v2 < v3 )
        --v3;
      else
        --v2;
    }
    while ( v2 > 0 && v3 > 0 && v1 > 0 );
  }
  if ( !dword_1063263C )
    return sub_1019F260(0.0, 0.0, 0.0, 0.0);
  v7 = 1.0e10;
  v8 = dword_10632630;
  v9 = 1.0e10;
  v10 = -1.0e10;
  for ( i = -1.0e10; v8 != -1; v10 = v26 )
  {
    v12 = 3 * v8;
    v13 = i;
    v14 = v9;
    v15 = v13;
    v16 = *(float **)(dword_10632624 + 4 * v12);
    if ( v14 > v16[1] )
      v14 = v16[1];
    v17 = v14;
    v18 = v7;
    v19 = v17;
    if ( v18 > v16[2] )
      v18 = v16[2];
    v20 = v18;
    v21 = v15;
    v22 = v20;
    if ( v21 < v16[4] )
      v21 = v16[4];
    v23 = v21;
    v24 = v10;
    v25 = v23;
    if ( v24 < v16[5] )
      v24 = v16[5];
    v8 = *(_DWORD *)(dword_10632624 + 4 * v12 + 8);
    v26 = v24;
    v27 = v19;
    v7 = v22;
    v9 = v27;
    i = v25;
  }
  v36 = v10;
  v35 = v7;
  v34 = i;
  v33 = v9;
  sub_1019F260(v33, v34, v35, v36);
  v28 = dword_10632630;
  if ( dword_10632630 != -1 )
  {
    v29 = dword_10632624;
    do
    {
      v30 = 12 * v28;
      sub_1019FC80(*(_DWORD *)(v30 + v29));
      v29 = dword_10632624;
      v28 = *(_DWORD *)(v30 + dword_10632624 + 8);
    }
    while ( v28 != -1 );
  }
  sub_101991D0((int)&savedregs);
  sub_10199B00();
  sub_10199070();
  result = sub_10198FE0();
  if ( this[310] != 2 )
  {
    v31 = this[303];
    if ( v31 != -1 )
    {
      result = this[300];
      do
      {
        v32 = 12 * v31;
        sub_10198C10(*(_DWORD *)(result + v32));
        result = this[300];
        v31 = *(_DWORD *)(result + v32 + 8);
      }
      while ( v31 != -1 );
    }
  }
  return result;
}
