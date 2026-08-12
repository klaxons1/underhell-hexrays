unsigned int __usercall sub_100D4690@<eax>(float *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  unsigned int result; // eax
  int v5; // ecx
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // eax
  float *v9; // eax
  float *v10; // eax
  double (__thiscall *v11)(float *); // edx
  char v12; // al
  float v13; // ecx
  int *v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  float *v18; // eax
  double v19; // st7
  double v20; // st7
  float v22; // [esp+2Ch] [ebp-74h]
  float v23; // [esp+30h] [ebp-70h]
  _DWORD v24[7]; // [esp+34h] [ebp-6Ch] BYREF
  float v25; // [esp+50h] [ebp-50h]
  float v26; // [esp+54h] [ebp-4Ch]
  float v27; // [esp+58h] [ebp-48h]
  float v28; // [esp+5Ch] [ebp-44h]
  int v29; // [esp+60h] [ebp-40h]
  int v30; // [esp+64h] [ebp-3Ch]
  int v31; // [esp+68h] [ebp-38h]
  int v32; // [esp+6Ch] [ebp-34h]
  int v33; // [esp+70h] [ebp-30h]
  int v34; // [esp+74h] [ebp-2Ch]
  float v35; // [esp+78h] [ebp-28h]
  int v36; // [esp+7Ch] [ebp-24h]
  int v37; // [esp+80h] [ebp-20h]
  __int16 v38; // [esp+84h] [ebp-1Ch]
  char v39; // [esp+87h] [ebp-19h]
  __int16 v40; // [esp+88h] [ebp-18h]
  _BYTE v41[12]; // [esp+8Ch] [ebp-14h] BYREF
  float v42; // [esp+98h] [ebp-8h]
  float v43; // [esp+9Ch] [ebp-4h]

  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 1272))(a1) && !*((_DWORD *)a1 + 300) )
    return (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1064))(a1);
  result = *((_DWORD *)a1 + 280);
  if ( result != -1 )
  {
    result >>= 12;
    if ( off_1061BE18[4 * ((_DWORD)a1[280] & 0xFFF) + 2] == result )
    {
      v5 = off_1061BE18[4 * ((_DWORD)a1[280] & 0xFFF) + 1];
      if ( v5 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 288))(v5);
        v6 = result;
        if ( result )
        {
          result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)result + 320))(result);
          if ( (_BYTE)result )
          {
            (*(void (__thiscall **)(unsigned int, int))(*(_DWORD *)v6 + 1116))(v6, a2);
            v7 = *(_DWORD *)a1;
            v8 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1076))(a1);
            (*(void (__thiscall **)(float *, int))(v7 + 944))(a1, v8);
            (*(void (__thiscall **)(unsigned int, int))(*(_DWORD *)v6 + 1300))(v6, 5);
            v25 = 0.0;
            v26 = 0.0;
            v24[0] = 1;
            v27 = 0.0;
            v30 = 4;
            v32 = 0;
            v28 = 8192.0;
            v33 = 0;
            v36 = 0;
            v35 = 1.0;
            v34 = 0;
            v37 = 0;
            v38 = 1;
            v31 = 0;
            v40 = 0;
            v39 = 0;
            v9 = (float *)(*(int (__thiscall **)(unsigned int, _BYTE *))(*(_DWORD *)v6 + 968))(v6, v41);
            *(float *)&v24[1] = *v9;
            *(float *)&v24[2] = v9[1];
            *(float *)&v24[3] = v9[2];
            v10 = (float *)(*(int (__thiscall **)(unsigned int, _BYTE *, _DWORD))(*(_DWORD *)v6 + 1504))(v6, v41, 1.0);
            *(float *)&v24[4] = *v10;
            *(float *)&v24[5] = v10[1];
            v11 = *(double (__thiscall **)(float *))(*(_DWORD *)a1 + 1108);
            *(float *)&v24[6] = v10[2];
            v24[0] = 0;
            v42 = v11(a1);
            if ( *(float *)(dword_106B31C8 + 12) >= (double)a1[283] )
            {
              do
              {
                v12 = (*(int (__thiscall **)(float *, int, float))(*(_DWORD *)a1 + 876))(
                        a1,
                        a3,
                        COERCE_FLOAT(LODWORD(v23)));
                v23 = a1[283];
                if ( v12 )
                  a3 = 2;
                else
                  a3 = 1;
                (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 1132))(a1);
                v13 = a1[283];
                v43 = v13 + v42;
                if ( LODWORD(v13) != LODWORD(v43) )
                {
                  if ( *((_BYTE *)a1 + 84) )
                  {
                    *((_BYTE *)a1 + 88) |= 1u;
                  }
                  else
                  {
                    v14 = (int *)*((_DWORD *)a1 + 6);
                    if ( v14 )
                      sub_100194B0(v14, 1132);
                  }
                  a1[283] = v43;
                }
                ++v24[0];
              }
              while ( 0.0 != v42 && *(float *)(dword_106B31C8 + 12) >= (double)a1[283] );
            }
            if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 1272))(a1) )
            {
              if ( v24[0] >= *((_DWORD *)a1 + 300) )
                *(float *)v24 = a1[300];
              sub_100CBD20((int *)a1 + 300, v24);
            }
            else
            {
              v15 = sub_100CF5D0((_DWORD *)v6, *((_DWORD *)a1 + 298));
              v16 = v24[0];
              if ( v24[0] >= v15 )
              {
                v16 = sub_100CF5D0((_DWORD *)v6, *((_DWORD *)a1 + 298));
                v24[0] = v16;
              }
              sub_100CF490((char *)v6, v16, *((_DWORD *)a1 + 298));
            }
            v17 = *((_DWORD *)a1 + 298);
            v28 = 56755.84;
            v29 = v17;
            v30 = 2;
            v18 = (float *)(*(int (__thiscall **)(unsigned int, _BYTE *, float *, _DWORD))(*(_DWORD *)v6 + 1108))(
                             v6,
                             v41,
                             a1,
                             0);
            v25 = *v18;
            v26 = v18[1];
            v27 = v18[2];
            if ( *(_BYTE *)(v6 + 2137) )
            {
              v19 = *(float *)(sub_10275D10(*((_WORD *)a1 + 624)) + 84);
            }
            else
            {
              if ( (*(_DWORD *)(v6 + 252) & 0x1000) != 0 )
                sub_100DAFD0(v6);
              v22 = *(float *)(v6 + 480) * *(float *)(v6 + 480) + *(float *)(v6 + 476) * *(float *)(v6 + 476);
              if ( off_10689708(v22) < 175.0 )
                goto LABEL_35;
              v19 = *(float *)(sub_10275D10(*((_WORD *)a1 + 624)) + 48);
            }
            v25 = v25 * v19;
            v26 = v26 * v19;
            v27 = v19 * v27;
LABEL_35:
            if ( *(_BYTE *)(v6 + 2272) )
            {
              v20 = *(float *)(sub_10275D10(*((_WORD *)a1 + 624)) + 44);
              v25 = v25 * v20;
              v26 = v26 * v20;
              v27 = v20 * v27;
            }
            v32 = (*(int (__thiscall **)(float *, float))(*(_DWORD *)a1 + 852))(a1, COERCE_FLOAT(LODWORD(v23)));
            (*(void (__thiscall **)(unsigned int, _DWORD *))(*(_DWORD *)v6 + 432))(v6, v24);
            if ( !*((_DWORD *)a1 + 300) && sub_100CF5D0((_DWORD *)v6, *((_DWORD *)a1 + 298)) <= 0 )
              sub_101E8F80("!HEV_AMO0", 0, 0);
            return (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1168))(a1);
          }
        }
      }
    }
  }
  return result;
}
