int __usercall sub_1027A4F0@<eax>(float *a1@<ecx>, int a2@<edi>)
{
  int result; // eax
  int v4; // edi
  int v5; // eax
  float *v6; // eax
  float *v7; // eax
  double (__thiscall *v8)(float *); // edx
  double v9; // st7
  float v10; // ecx
  int *v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  float *v15; // eax
  double v16; // st7
  double v17; // st7
  float v19; // [esp+2Ch] [ebp-78h]
  _DWORD v20[7]; // [esp+38h] [ebp-6Ch] BYREF
  float v21; // [esp+54h] [ebp-50h]
  float v22; // [esp+58h] [ebp-4Ch]
  float v23; // [esp+5Ch] [ebp-48h]
  float v24; // [esp+60h] [ebp-44h]
  int v25; // [esp+64h] [ebp-40h]
  int v26; // [esp+68h] [ebp-3Ch]
  int v27; // [esp+6Ch] [ebp-38h]
  int v28; // [esp+70h] [ebp-34h]
  int v29; // [esp+74h] [ebp-30h]
  int v30; // [esp+78h] [ebp-2Ch]
  float v31; // [esp+7Ch] [ebp-28h]
  int v32; // [esp+80h] [ebp-24h]
  int v33; // [esp+84h] [ebp-20h]
  __int16 v34; // [esp+88h] [ebp-1Ch]
  __int16 v35; // [esp+8Bh] [ebp-19h]
  char v36; // [esp+8Dh] [ebp-17h]
  _BYTE v37[12]; // [esp+90h] [ebp-14h] BYREF
  float v38; // [esp+9Ch] [ebp-8h]
  float v39; // [esp+A0h] [ebp-4h]

  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 1272))(a1) && !*((_DWORD *)a1 + 300) )
    return (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1064))(a1);
  result = sub_100D1940(a1);
  v4 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      (*(void (__thiscall **)(float *, int, _DWORD, int))(*(_DWORD *)a1 + 1132))(a1, 1, 0.0, a2);
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 1116))(v4);
      v39 = *a1;
      v5 = (*(int (__thiscall **)(float *))(LODWORD(v39) + 1080))(a1);
      (*(void (__thiscall **)(float *, int))(LODWORD(v39) + 944))(a1, v5);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 1300))(v4, 5);
      v21 = 0.0;
      v20[0] = 1;
      v22 = 0.0;
      v26 = 4;
      v23 = 0.0;
      v28 = 0;
      v29 = 0;
      v24 = 8192.0;
      v32 = 0;
      v30 = 0;
      v31 = 1.0;
      v33 = 0;
      v34 = 1;
      v27 = 0;
      v35 = 0;
      v36 = 1;
      v6 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v4 + 968))(v4, v37);
      *(float *)&v20[1] = *v6;
      *(float *)&v20[2] = v6[1];
      *(float *)&v20[3] = v6[2];
      v7 = (float *)(*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v4 + 1504))(v4, v37, 1.0);
      *(float *)&v20[4] = *v7;
      *(float *)&v20[5] = v7[1];
      v8 = *(double (__thiscall **)(float *))(*(_DWORD *)a1 + 1108);
      *(float *)&v20[6] = v7[2];
      v20[0] = 0;
      v9 = v8(a1);
      v38 = v9;
      if ( *(float *)(dword_106B31C8 + 12) >= (double)a1[283] )
      {
        do
        {
          v10 = a1[283];
          v39 = v9 + v10;
          if ( LODWORD(v10) != LODWORD(v39) )
          {
            if ( *((_BYTE *)a1 + 84) )
            {
              *((_BYTE *)a1 + 88) |= 1u;
            }
            else
            {
              v11 = (int *)*((_DWORD *)a1 + 6);
              if ( v11 )
              {
                sub_100194B0(v11, 1132);
                v9 = v38;
              }
            }
            a1[283] = v39;
          }
          ++v20[0];
        }
        while ( 0.0 != v9 && *(float *)(dword_106B31C8 + 12) >= (double)a1[283] );
      }
      if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 1272))(a1) )
      {
        if ( v20[0] >= *((_DWORD *)a1 + 300) )
          *(float *)v20 = a1[300];
        sub_100CBD20((int *)a1 + 300, v20);
      }
      else
      {
        v12 = sub_100CF5D0((_DWORD *)v4, *((_DWORD *)a1 + 298));
        v13 = v20[0];
        if ( v20[0] >= v12 )
        {
          v13 = sub_100CF5D0((_DWORD *)v4, *((_DWORD *)a1 + 298));
          v20[0] = v13;
        }
        sub_100CF490((char *)v4, v13, *((_DWORD *)a1 + 298));
      }
      v14 = *((_DWORD *)a1 + 298);
      v24 = 56755.84;
      v25 = v14;
      v26 = 2;
      v15 = (float *)(*(int (__thiscall **)(int, _BYTE *, float *, _DWORD))(*(_DWORD *)v4 + 1108))(v4, v37, a1, 0);
      v21 = *v15;
      v22 = v15[1];
      v23 = v15[2];
      if ( *(_BYTE *)(v4 + 2137) )
      {
        v16 = *(float *)(sub_100D0CC0((__int16 *)a1) + 84);
      }
      else
      {
        if ( (*(_DWORD *)(v4 + 252) & 0x1000) != 0 )
          sub_100DAFD0(v4);
        v19 = *(float *)(v4 + 480) * *(float *)(v4 + 480) + *(float *)(v4 + 476) * *(float *)(v4 + 476);
        if ( off_10689708(v19) < 175.0 )
          goto LABEL_29;
        v16 = *(float *)(sub_100D0CC0((__int16 *)a1) + 48);
      }
      v21 = v21 * v16;
      v22 = v22 * v16;
      v23 = v16 * v23;
LABEL_29:
      if ( *(_BYTE *)(v4 + 2272) )
      {
        v17 = *(float *)(sub_100D0CC0((__int16 *)a1) + 44);
        v21 = v21 * v17;
        v22 = v22 * v17;
        v23 = v17 * v23;
      }
      v28 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 852))(a1);
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 432))(v4, v20);
      if ( !*((_DWORD *)a1 + 300) && sub_100CF5D0((_DWORD *)v4, *((_DWORD *)a1 + 298)) <= 0 )
        sub_101E8F80(v4, (int)"!HEV_AMO0", 0, 0);
      return (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1168))(a1);
    }
  }
  return result;
}
