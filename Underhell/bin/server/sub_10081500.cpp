int __thiscall sub_10081500(int this)
{
  _DWORD *v2; // esi
  double v3; // st7
  double v4; // st6
  double v5; // st4
  double v6; // st3
  double v7; // st6
  double v8; // st4
  double v9; // st3
  double v10; // rt0
  double v11; // st3
  double v12; // rt1
  int v13; // edi
  int result; // eax
  int v15; // eax
  int v16; // esi
  double v17; // st7
  char *v18; // eax
  char Buffer[256]; // [esp+10h] [ebp-124h] BYREF
  int v20; // [esp+110h] [ebp-24h] BYREF
  float v21; // [esp+114h] [ebp-20h]
  float v22; // [esp+118h] [ebp-1Ch]
  int v23; // [esp+11Ch] [ebp-18h] BYREF
  float v24; // [esp+120h] [ebp-14h]
  float v25; // [esp+124h] [ebp-10h]
  int v26; // [esp+128h] [ebp-Ch] BYREF
  float v27; // [esp+12Ch] [ebp-8h]
  float v28; // [esp+130h] [ebp-4h]

  v2 = **(_DWORD ***)(this + 36);
  if ( v2 )
  {
    sub_1007E360((float *)&v26, v2[9], v2[8]);
    sub_1011BC50(*(_DWORD *)(this + 4) + 716, (int)v2, (int)*(float *)&v26, (int)v27, (int)v28, 1, 0.0);
    do
    {
      v3 = 255.0;
      v4 = 90.0;
      v5 = -3.0;
      switch ( v2[9] )
      {
        case 0:
          v7 = -3.0;
          v8 = 255.0;
          v9 = 255.0;
          v3 = 0.0;
          goto LABEL_9;
        case 1:
          v6 = 90.0;
          break;
        case 2:
          v3 = 90.0;
          v6 = 90.0;
          v4 = 255.0;
          break;
        case 3:
          v3 = 90.0;
          v6 = 255.0;
          v4 = 255.0;
          break;
        default:
          v7 = -3.0;
          v9 = 0.0;
          v8 = 0.0;
LABEL_9:
          v10 = v9;
          v11 = v7;
          v4 = v10;
          v12 = v11;
          v6 = v8;
          v5 = v12;
          break;
      }
      *(float *)&v26 = 3.0;
      v27 = 3.0;
      v28 = 3.0;
      *(float *)&v23 = v5;
      v24 = v5;
      v25 = v5;
      sub_1011BB20((int)v2, (int)&v23, (int)&v26, (int)v3, (int)v6, (int)v4, 1, 0.0);
      v13 = v2[10];
      if ( v13 )
      {
        sub_1007E360((float *)&v20, *(_DWORD *)(v13 + 36), *(_DWORD *)(v13 + 32));
        sub_1011BC50((int)v2, v13, (int)*(float *)&v20, (int)v21, (int)v22, 1, 0.0);
      }
      v2 = (_DWORD *)v2[10];
    }
    while ( v2 );
  }
  result = sub_100A6180(*(_DWORD *)(this + 36));
  if ( result )
  {
    v15 = sub_100A6140(*(_DWORD *)(this + 36));
    v16 = *(_DWORD *)(this + 4);
    v23 = *(int *)v15;
    v24 = *(float *)(v15 + 4);
    v25 = *(float *)(v15 + 8);
    if ( (*(_DWORD *)(v16 + 252) & 0x800) != 0 )
      sub_100DAE60(v16);
    sub_100A6560(&v26, v16 + 580);
    *(float *)&v20 = *(float *)&v26 * 32.0 + *(float *)&v23;
    v21 = v27 * 32.0 + v24;
    v22 = 32.0 * v28 + v25;
    sub_1011BC50((int)&v23, (int)&v20, 0, 0, 255, 1, 2.0);
    v17 = sub_10265030(&v26);
    v18 = sub_1001E280(Buffer, "yaw: %f", v17);
    return sub_1011CF30((int)&v23, (int)v18, 1, 1.0);
  }
  return result;
}
