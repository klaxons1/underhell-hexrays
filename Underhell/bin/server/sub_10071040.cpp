int __cdecl sub_10071040(float a1)
{
  int result; // eax
  int v2; // esi
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  double v6; // st7
  char *v7; // eax
  char *v8; // eax
  unsigned int v9; // ecx
  int *v10; // eax
  int v11; // edi
  char *v12; // eax
  int v13; // eax
  int v14; // edi
  double v15; // st7
  int v16; // eax
  double v17; // st7
  char Destination[256]; // [esp+10h] [ebp-170h] BYREF
  _BYTE v19[12]; // [esp+110h] [ebp-70h] BYREF
  int v20[3]; // [esp+11Ch] [ebp-64h] BYREF
  int v21[3]; // [esp+128h] [ebp-58h] BYREF
  int v22[3]; // [esp+134h] [ebp-4Ch] BYREF
  int v23[3]; // [esp+140h] [ebp-40h] BYREF
  float v24[3]; // [esp+14Ch] [ebp-34h] BYREF
  int v25; // [esp+158h] [ebp-28h]
  int v26[3]; // [esp+15Ch] [ebp-24h] BYREF
  int i; // [esp+168h] [ebp-18h]
  int v28; // [esp+16Ch] [ebp-14h]
  int v29; // [esp+170h] [ebp-10h]
  int v30; // [esp+174h] [ebp-Ch] BYREF
  float v31; // [esp+178h] [ebp-8h]
  int v32; // [esp+17Ch] [ebp-4h]

  result = 0;
  v25 = dword_10607410;
  for ( i = 0; result < v25; i = result )
  {
    v2 = *(_DWORD *)(dword_10607404 + 4 * result);
    v3 = *(_DWORD *)(v2 + 820);
    v4 = 0;
    *(float *)&v29 = 0.0;
    v28 = 255;
    if ( v3 == -1 )
    {
      if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
        sub_100DAE60(v2);
      v30 = *(int *)(v2 + 580);
      v31 = *(float *)(v2 + 584);
      v6 = *(float *)(v2 + 588);
    }
    else
    {
      if ( v3 < 0 || v3 >= *(_DWORD *)(dword_106935D8 + 4) )
        ++dword_10691DE0;
      v5 = sub_1008D160(v19, dword_10693634);
      v30 = *(int *)v5;
      v31 = *(float *)(v5 + 4);
      v6 = *(float *)(v5 + 8);
    }
    *(float *)&v32 = v6;
    if ( *(_DWORD *)(v2 + 820) == -1 )
    {
      v8 = sub_1001E280(Destination, "(%d)", *(__int16 *)(v2 + 816));
      v20[0] = v30;
      *(float *)&v20[1] = v31 + 6.0;
      *(float *)&v20[2] = *(float *)&v32 + 8.0;
      sub_1011CF30((int)v20, (int)v8, 1, a1);
    }
    else
    {
      v7 = sub_1001E280(Destination, "(%d), (%d)", *(__int16 *)(v2 + 816), *(_DWORD *)(v2 + 820));
      v24[0] = *(float *)&v30;
      v24[1] = v31 + 6.0;
      v24[2] = *(float *)&v32 + 8.0;
      sub_1011CF30((int)v24, (int)v7, 1, a1);
    }
    if ( *(_DWORD *)(v2 + 828) )
    {
      v4 = 100;
      v29 = 100;
      v28 = 100;
    }
    else
    {
      v9 = *(_DWORD *)(v2 + 860);
      if ( v9 != -1
        && (v10 = &off_1061BE18[4 * (*(_DWORD *)(v2 + 860) & 0xFFF) + 1],
            off_1061BE18[4 * (*(_DWORD *)(v2 + 860) & 0xFFF) + 2] == *(_DWORD *)(v2 + 860) >> 12)
        && *v10 )
      {
        v4 = 255;
        *(float *)&v29 = 0.0;
        v28 = 0;
        if ( v10[1] == v9 >> 12 )
        {
          v11 = *v10;
          if ( *v10 )
          {
            v12 = (char *)sub_100D6390(v11);
            sub_104299C0(Destination, v12, 0xFFu);
            *(float *)v26 = *(float *)&v30 + 6.0;
            *(float *)&v26[1] = v31 + 6.0;
            *(float *)&v26[2] = *(float *)&v32 + 6.0;
            sub_1011CF30((int)v26, (int)Destination, 1, a1);
            v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 576))(v11);
            sub_1011BC50((int)&v30, v13, 128, 128, 128, 0, 0.0);
          }
        }
      }
      else if ( *(float *)(v2 + 864) > (double)*(float *)(dword_106B31C8 + 12)
             || v9 != -1
             && off_1061BE18[4 * (*(_DWORD *)(v2 + 860) & 0xFFF) + 2] == v9 >> 12
             && off_1061BE18[4 * (*(_DWORD *)(v2 + 860) & 0xFFF) + 1] )
      {
        v4 = 200;
        v29 = 150;
        v28 = 10;
      }
    }
    v14 = v29;
    *(float *)v21 = 3.0;
    *(float *)&v21[1] = 3.0;
    *(float *)&v21[2] = 3.0;
    *(float *)v23 = -3.0;
    *(float *)&v23[1] = -3.0;
    *(float *)&v23[2] = -3.0;
    sub_1011BB20((int)&v30, (int)v23, (int)v21, v4, v29, v28, 0, a1);
    if ( *(_DWORD *)(v2 + 820) == -1 )
      v15 = *(float *)(v2 + 732);
    else
      v15 = sub_10085040(*(_DWORD *)(v2 + 820));
    v16 = *(_DWORD *)(v2 + 820);
    *(float *)&v29 = sin(v15 * 0.017453292);
    if ( v16 == -1 )
      v17 = *(float *)(v2 + 732);
    else
      v17 = sub_10085040(v16);
    *(float *)v22 = cos(v17 * 0.017453292) * 12.0 + *(float *)&v30;
    *(float *)&v22[1] = 12.0 * *(float *)&v29 + v31;
    v22[2] = v32;
    sub_1011BC50((int)&v30, (int)v22, v4, v14, v28, 0, a1);
    result = i + 1;
  }
  return result;
}
