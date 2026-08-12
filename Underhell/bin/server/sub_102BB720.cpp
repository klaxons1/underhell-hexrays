int __thiscall sub_102BB720(float *this, int a2)
{
  int v2; // ebx
  float *v3; // edi
  int result; // eax
  int v5; // esi
  double v6; // st7
  double v7; // st7
  int v8; // edi
  double v9; // st7
  double v10; // st7
  double v11; // st7
  float v12; // [esp+Ch] [ebp-8A4h]
  _DWORD v13[514]; // [esp+24h] [ebp-88Ch] BYREF
  int v14[20]; // [esp+82Ch] [ebp-84h] BYREF
  float v15[3]; // [esp+87Ch] [ebp-34h] BYREF
  float v16; // [esp+888h] [ebp-28h]
  float v17; // [esp+88Ch] [ebp-24h]
  int v18; // [esp+890h] [ebp-20h]
  int v19; // [esp+894h] [ebp-1Ch] BYREF
  float v20; // [esp+898h] [ebp-18h]
  float v21; // [esp+89Ch] [ebp-14h]
  int v22; // [esp+8A0h] [ebp-10h] BYREF
  float v23; // [esp+8A4h] [ebp-Ch]
  float v24; // [esp+8A8h] [ebp-8h]
  float v25; // [esp+8ACh] [ebp-4h]

  v2 = (int)this;
  v17 = this[318];
  v3 = (float *)a2;
  v16 = this[319];
  v18 = (int)this;
  sub_10261520(v13, a2, v17, 0);
  result = sub_1025EEE0(v13);
  v5 = result;
  if ( result )
  {
    while ( 1 )
    {
      if ( v5 != v2 && *(_BYTE *)(v5 + 361) && (*(_BYTE *)(v5 + 356) & 4) == 0 )
      {
        if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
          sub_100DAE60(v5);
        *(float *)&v22 = *(float *)(v5 + 580) - *v3;
        v23 = *(float *)(v5 + 584) - v3[1];
        v24 = *(float *)(v5 + 588) - v3[2];
        v25 = 1.0 / (v17 * -0.75);
        v6 = off_10689714();
        v7 = (v6 - v17) * (v25 * v25 * (v6 - v17));
        v25 = v7;
        if ( v7 > 1.0 )
        {
          v7 = 1.0;
          v25 = 1.0;
        }
        v8 = *(_DWORD *)(v5 + 424);
        v19 = v22;
        v20 = v23;
        v21 = v24;
        if ( v8 )
        {
          v9 = sub_101B4DE0(v5);
          v10 = v9 * 750.0 * v25;
          *(float *)&v19 = *(float *)&v19 * v10;
          v20 = v20 * v10;
          v21 = v10 * v21;
          (*(void (__thiscall **)(int, int *))(*(_DWORD *)v8 + 236))(v8, &v19);
          v7 = v25;
        }
        if ( *(_BYTE *)(v5 + 225) && 0.0 != *(float *)(v18 + 1276) )
        {
          v12 = v7 * v16;
          sub_10248110((int)v14, v18, v18, v12, 64, 0);
          if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
            sub_100DAE60(v5);
          sub_102485A0((float *)v14, (float *)&v22, (float *)(v5 + 580), 1.0);
          sub_100D9E70((int *)v5, v5, v14);
        }
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5)
          && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 1088))(v5) )
        {
          if ( v24 < 0.1 )
          {
            v24 = 0.1;
            off_10689714();
          }
          v11 = sub_102191B0(v25, 0.0, 1.0, 250.0, 1000.0);
          v15[0] = *(float *)&v22 * v11;
          v15[1] = v23 * v11;
          v15[2] = v11 * v24;
          sub_100EA150(v5, v15);
        }
        v3 = (float *)a2;
      }
      ++v13[0];
      result = sub_1025EEE0(v13);
      v5 = result;
      if ( !result )
        break;
      v2 = v18;
    }
  }
  return result;
}
