char __cdecl sub_10318800(int a1, float a2, int a3, float *a4)
{
  float *v4; // eax
  int (__thiscall *v5)(int); // eax
  int v6; // eax
  int v7; // ebx
  float *v8; // eax
  unsigned int v9; // eax
  int v10; // esi
  float *v11; // eax
  float *v12; // edi
  double v13; // st7
  double v14; // st6
  double v15; // st5
  double v16; // rt1
  double v17; // st5
  double v18; // st7
  double v19; // st7
  double v20; // st7
  double v21; // st4
  double v22; // st7
  double v23; // st6
  double v24; // st6
  double v25; // st7
  double v26; // st6
  double v27; // st5
  double v28; // rt2
  double v29; // st5
  float v31; // [esp+18h] [ebp-38h]
  float v32; // [esp+1Ch] [ebp-34h]
  float v33; // [esp+20h] [ebp-30h]
  int v34; // [esp+24h] [ebp-2Ch] BYREF
  float v35; // [esp+28h] [ebp-28h]
  float i; // [esp+2Ch] [ebp-24h]
  int v37; // [esp+30h] [ebp-20h] BYREF
  float v38; // [esp+34h] [ebp-1Ch]
  float v39; // [esp+38h] [ebp-18h]
  float v40; // [esp+3Ch] [ebp-14h]
  float v41; // [esp+40h] [ebp-10h]
  float v42; // [esp+44h] [ebp-Ch]
  float v43; // [esp+48h] [ebp-8h]
  int v44; // [esp+4Ch] [ebp-4h] BYREF
  int v45; // [esp+58h] [ebp+8h]

  v4 = a4;
  *a4 = 0.0;
  v4[1] = 0.0;
  v4[2] = 0.0;
  if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
    sub_100DAFD0(a1);
  v5 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 576);
  *(float *)&v37 = *(float *)(a1 + 476) * *(float *)&a3;
  v38 = *(float *)(a1 + 480) * *(float *)&a3;
  v39 = *(float *)&a3 * *(float *)(a1 + 484);
  v6 = v5(a1);
  v7 = dword_106E3BCC - 1;
  v34 = *(int *)v6;
  v35 = *(float *)(v6 + 4);
  v8 = *(float **)(v6 + 8);
  for ( i = *(float *)&v8; v7 >= 0; --v7 )
  {
    v9 = *(_DWORD *)(dword_106E3BC0 + 4 * v7);
    if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(dword_106E3BC0 + 4 * v7) & 0xFFF) + 2] != v9 >> 12 )
      v10 = 0;
    else
      v10 = off_1061BE18[4 * (*(_DWORD *)(dword_106E3BC0 + 4 * v7) & 0xFFF) + 1];
    v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 576))(v10);
    *(float *)&v45 = *(float *)(v10 + 800) + a2;
    v12 = v11;
    LOBYTE(v8) = sub_10113300((float *)&v34, (float *)&v37, v11, *(float *)&v45, (float *)&a3, (float *)&v44);
    if ( (_BYTE)v8 )
    {
      v13 = (*(float *)&a3 + *(float *)&v44) * 0.5;
      v14 = *(float *)&v37 * v13 + *(float *)&v34;
      v31 = v14;
      v15 = v38 * v13 + v35;
      v32 = v15;
      v16 = v15;
      v17 = v13 * v39 + i;
      v40 = v14 - *v12;
      v41 = v16 - v12[1];
      v42 = v17 - v12[2];
      v43 = v42;
      v18 = off_10689714();
      if ( v18 >= 0.0099999998 )
      {
        if ( v43 >= 0.0 || (*(_BYTE *)(v10 + 250) & 1) != 0 )
        {
          v19 = *(float *)&v45 - v18;
        }
        else
        {
          v20 = -v42;
          v42 = v20;
          v21 = v20;
          v22 = v41 * *(float *)&v45 + v12[1];
          v23 = *(float *)&v45 * v21 + v12[2];
          v40 = v40 * *(float *)&v45 + *v12 - v31;
          v41 = v22 - v32;
          v33 = v17;
          v42 = v23 - v33;
          v19 = off_10689714();
        }
      }
      else
      {
        v40 = 0.0;
        v41 = 0.0;
        v42 = 1.0;
        v19 = *(float *)&v45;
      }
      v24 = 0.25;
      if ( *(float *)&a3 >= 0.25 )
        v24 = *(float *)&a3;
      else
        *(float *)&a3 = 0.25;
      v8 = a4;
      v25 = v19 * 1.25 / v24;
      v26 = v40 * v25;
      v40 = v26;
      v27 = v41 * v25;
      v41 = v27;
      v28 = v27;
      v29 = v25 * v42;
      v42 = v29;
      *a4 = v26 + *a4;
      v8[1] = v28 + v8[1];
      v8[2] = v29 + v8[2];
    }
  }
  return (char)v8;
}
