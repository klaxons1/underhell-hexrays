int __usercall sub_1027A160@<eax>(float *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int result; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  float *v8; // eax
  float *v9; // eax
  double (__thiscall *v10)(float *); // edx
  char v11; // al
  float v12; // ecx
  int *v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  float *v17; // eax
  double v18; // st7
  double v19; // st7
  float v21; // [esp+2Ch] [ebp-74h]
  float v22; // [esp+30h] [ebp-70h]
  _DWORD v23[7]; // [esp+34h] [ebp-6Ch] BYREF
  float v24; // [esp+50h] [ebp-50h]
  float v25; // [esp+54h] [ebp-4Ch]
  float v26; // [esp+58h] [ebp-48h]
  float v27; // [esp+5Ch] [ebp-44h]
  int v28; // [esp+60h] [ebp-40h]
  int v29; // [esp+64h] [ebp-3Ch]
  int v30; // [esp+68h] [ebp-38h]
  int v31; // [esp+6Ch] [ebp-34h]
  int v32; // [esp+70h] [ebp-30h]
  int v33; // [esp+74h] [ebp-2Ch]
  float v34; // [esp+78h] [ebp-28h]
  int v35; // [esp+7Ch] [ebp-24h]
  int v36; // [esp+80h] [ebp-20h]
  __int16 v37; // [esp+84h] [ebp-1Ch]
  __int16 v38; // [esp+87h] [ebp-19h]
  char v39; // [esp+89h] [ebp-17h]
  _BYTE v40[12]; // [esp+8Ch] [ebp-14h] BYREF
  float v41; // [esp+98h] [ebp-8h]
  float v42; // [esp+9Ch] [ebp-4h]

  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 1272))(a1) && !*((_DWORD *)a1 + 300) )
    return (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1064))(a1);
  result = sub_100D1940(a1);
  v5 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 1116))(v5, a2);
      v6 = *(_DWORD *)a1;
      v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1076))(a1);
      (*(void (__thiscall **)(float *, int))(v6 + 944))(a1, v7);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 1300))(v5, 5);
      v24 = 0.0;
      v25 = 0.0;
      v23[0] = 1;
      v26 = 0.0;
      v29 = 4;
      v31 = 0;
      v27 = 8192.0;
      v32 = 0;
      v35 = 0;
      v34 = 1.0;
      v33 = 0;
      v36 = 0;
      v37 = 1;
      v30 = 0;
      v38 = 256;
      v39 = 1;
      v8 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v5 + 968))(v5, v40);
      *(float *)&v23[1] = *v8;
      *(float *)&v23[2] = v8[1];
      *(float *)&v23[3] = v8[2];
      v9 = (float *)(*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v5 + 1504))(v5, v40, 1.0);
      *(float *)&v23[4] = *v9;
      *(float *)&v23[5] = v9[1];
      v10 = *(double (__thiscall **)(float *))(*(_DWORD *)a1 + 1108);
      *(float *)&v23[6] = v9[2];
      v23[0] = 0;
      v41 = v10(a1);
      if ( *(float *)(dword_106B31C8 + 12) >= (double)a1[283] )
      {
        do
        {
          v11 = (*(int (__thiscall **)(float *, int, float))(*(_DWORD *)a1 + 876))(a1, a3, COERCE_FLOAT(LODWORD(v22)));
          v22 = a1[283];
          if ( v11 )
            a3 = 2;
          else
            a3 = 1;
          (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 1132))(a1);
          v12 = a1[283];
          v42 = v12 + v41;
          if ( LODWORD(v12) != LODWORD(v42) )
          {
            if ( *((_BYTE *)a1 + 84) )
            {
              *((_BYTE *)a1 + 88) |= 1u;
            }
            else
            {
              v13 = (int *)*((_DWORD *)a1 + 6);
              if ( v13 )
                sub_100194B0(v13, 1132);
            }
            a1[283] = v42;
          }
          ++v23[0];
        }
        while ( 0.0 != v41 && *(float *)(dword_106B31C8 + 12) >= (double)a1[283] );
      }
      if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 1272))(a1) )
      {
        if ( v23[0] >= *((_DWORD *)a1 + 300) )
          *(float *)v23 = a1[300];
        sub_100CBD20((int *)a1 + 300, v23);
      }
      else
      {
        v14 = sub_100CF5D0((_DWORD *)v5, *((_DWORD *)a1 + 298));
        v15 = v23[0];
        if ( v23[0] >= v14 )
        {
          v15 = sub_100CF5D0((_DWORD *)v5, *((_DWORD *)a1 + 298));
          v23[0] = v15;
        }
        sub_100CF490((char *)v5, v15, *((_DWORD *)a1 + 298));
      }
      v16 = *((_DWORD *)a1 + 298);
      v27 = 56755.84;
      v28 = v16;
      v29 = 2;
      v17 = (float *)(*(int (__thiscall **)(int, _BYTE *, float *, _DWORD))(*(_DWORD *)v5 + 1108))(v5, v40, a1, 0);
      v24 = *v17;
      v25 = v17[1];
      v26 = v17[2];
      if ( *(_BYTE *)(v5 + 2137) )
      {
        v18 = *(float *)(sub_100D0CC0((__int16 *)a1) + 84);
      }
      else
      {
        if ( (*(_DWORD *)(v5 + 252) & 0x1000) != 0 )
          sub_100DAFD0(v5);
        v21 = *(float *)(v5 + 480) * *(float *)(v5 + 480) + *(float *)(v5 + 476) * *(float *)(v5 + 476);
        if ( off_10689708(v21) < 175.0 )
          goto LABEL_32;
        v18 = *(float *)(sub_100D0CC0((__int16 *)a1) + 48);
      }
      v24 = v24 * v18;
      v25 = v25 * v18;
      v26 = v18 * v26;
LABEL_32:
      if ( *(_BYTE *)(v5 + 2272) )
      {
        v19 = *(float *)(sub_100D0CC0((__int16 *)a1) + 44);
        v24 = v24 * v19;
        v25 = v25 * v19;
        v26 = v19 * v26;
      }
      v31 = (*(int (__thiscall **)(float *, float))(*(_DWORD *)a1 + 852))(a1, COERCE_FLOAT(LODWORD(v22)));
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v5 + 432))(v5, v23);
      if ( !*((_DWORD *)a1 + 300) && sub_100CF5D0((_DWORD *)v5, *((_DWORD *)a1 + 298)) <= 0 )
        sub_101E8F80(v5, (int)"!HEV_AMO0", 0, 0);
      return (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1168))(a1);
    }
  }
  return result;
}
