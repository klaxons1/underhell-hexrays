unsigned int __usercall sub_1000DA60@<eax>(float *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  unsigned int result; // eax
  _DWORD *v5; // ecx
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  float *v9; // eax
  float *v10; // eax
  double (__thiscall *v11)(float *); // edx
  bool v12; // zf
  float v13; // ecx
  double v14; // st6
  double v15; // st7
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  float *v23; // eax
  double v24; // st7
  double v25; // st7
  float v27; // [esp+20h] [ebp-74h]
  float v28; // [esp+24h] [ebp-70h]
  _DWORD v29[7]; // [esp+28h] [ebp-6Ch] BYREF
  float v30; // [esp+44h] [ebp-50h]
  float v31; // [esp+48h] [ebp-4Ch]
  float v32; // [esp+4Ch] [ebp-48h]
  float v33; // [esp+50h] [ebp-44h]
  int v34; // [esp+54h] [ebp-40h]
  int v35; // [esp+58h] [ebp-3Ch]
  int v36; // [esp+5Ch] [ebp-38h]
  int v37; // [esp+60h] [ebp-34h]
  int v38; // [esp+64h] [ebp-30h]
  int v39; // [esp+68h] [ebp-2Ch]
  float v40; // [esp+6Ch] [ebp-28h]
  int v41; // [esp+70h] [ebp-24h]
  int v42; // [esp+74h] [ebp-20h]
  __int16 v43; // [esp+78h] [ebp-1Ch]
  char v44; // [esp+7Bh] [ebp-19h]
  __int16 v45; // [esp+7Ch] [ebp-18h]
  _BYTE v46[12]; // [esp+80h] [ebp-14h] BYREF
  float v47; // [esp+8Ch] [ebp-8h]
  float v48; // [esp+90h] [ebp-4h]

  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 1184))(a1) && !*((_DWORD *)a1 + 510) )
    return (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 976))(a1);
  result = *((_DWORD *)a1 + 490);
  if ( result != -1 )
  {
    v5 = (_DWORD *)((char *)off_103DCD74 + 16 * ((_DWORD)a1[490] & 0xFFF) + 4);
    result >>= 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * ((_DWORD)a1[490] & 0xFFF) + 2) == result )
    {
      v6 = *v5;
      if ( *v5 )
      {
        result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 512))(*v5);
        if ( (_BYTE)result )
        {
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 504))(v6);
          if ( (_BYTE)result )
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 704))(v6, a2);
            v7 = *(_DWORD *)a1;
            v8 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 988))(a1);
            (*(void (__thiscall **)(float *, int))(v7 + 852))(a1, v8);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 980))(v6, 5);
            v30 = 0.0;
            v31 = 0.0;
            v32 = 0.0;
            v29[0] = 1;
            v35 = 4;
            v33 = 8192.0;
            v37 = 0;
            v38 = 0;
            v40 = 1.0;
            v41 = 0;
            v39 = 0;
            v42 = 0;
            v43 = 1;
            v36 = 0;
            v45 = 0;
            v44 = 0;
            v9 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v6 + 816))(v6, v46);
            *(float *)&v29[1] = *v9;
            *(float *)&v29[2] = v9[1];
            *(float *)&v29[3] = v9[2];
            v10 = (float *)(*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v6 + 824))(v6, v46, 1.0);
            *(float *)&v29[4] = *v10;
            *(float *)&v29[5] = v10[1];
            v11 = *(double (__thiscall **)(float *))(*(_DWORD *)a1 + 1020);
            *(float *)&v29[6] = v10[2];
            v29[0] = 0;
            v48 = v11(a1);
            if ( *((float *)off_103DC81C + 3) >= (double)a1[493] )
            {
              do
              {
                v12 = (*(unsigned __int8 (__thiscall **)(float *, int, float))(*(_DWORD *)a1 + 784))(
                        a1,
                        a3,
                        COERCE_FLOAT(LODWORD(v28))) == 0;
                v28 = a1[493];
                if ( v12 )
                  a3 = 1;
                else
                  a3 = 2;
                (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 1044))(a1);
                v13 = a1[493];
                v14 = v13 + v48;
                v15 = v48;
                v47 = v14;
                if ( LODWORD(v13) != LODWORD(v47) )
                  a1[493] = v14;
                ++v29[0];
              }
              while ( 0.0 != v15 && *((float *)off_103DC81C + 3) >= (double)a1[493] );
            }
            if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 1184))(a1) )
            {
              v16 = *((_DWORD *)a1 + 510);
              v17 = v29[0];
              if ( v29[0] >= v16 )
              {
                v17 = *((_DWORD *)a1 + 510);
                v29[0] = v17;
              }
              v18 = v16 - v17;
              if ( *((_DWORD *)a1 + 510) != v18 )
                *((_DWORD *)a1 + 510) = v18;
            }
            else
            {
              v19 = sub_1000A5F0((_DWORD *)v6, *((_DWORD *)a1 + 508));
              v20 = v29[0];
              if ( v29[0] >= v19 )
              {
                v20 = sub_1000A5F0((_DWORD *)v6, *((_DWORD *)a1 + 508));
                v29[0] = v20;
              }
              sub_1000A590((_DWORD *)v6, v20, *((_DWORD *)a1 + 508));
            }
            v21 = *((_DWORD *)a1 + 508);
            v33 = 56755.84;
            v34 = v21;
            v35 = 2;
            v22 = sub_10033760(LODWORD(v28));
            v23 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v22 + 1012))(v22);
            v30 = *v23;
            v31 = v23[1];
            v32 = v23[2];
            if ( *(_BYTE *)(v6 + 4140) )
            {
              v24 = *(float *)(sub_1014F160(*((_WORD *)a1 + 1044)) + 84);
            }
            else
            {
              sub_10038150(v6);
              v27 = *(float *)(v6 + 248) * *(float *)(v6 + 248) + *(float *)(v6 + 244) * *(float *)(v6 + 244);
              if ( off_103EDFE0(v27) < 175.0 )
              {
LABEL_30:
                if ( *(_BYTE *)(v6 + 3528) )
                {
                  v25 = *(float *)(sub_1014F160(*((_WORD *)a1 + 1044)) + 44);
                  v30 = v30 * v25;
                  v31 = v31 * v25;
                  v32 = v25 * v32;
                }
                v37 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 760))(a1);
                (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v6 + 68))(v6, v29);
                if ( !*((_DWORD *)a1 + 510) && sub_1000A5F0((_DWORD *)v6, *((_DWORD *)a1 + 508)) <= 0 )
                  nullsub_3("!HEV_AMO0", 0, 0);
                return (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1080))(a1);
              }
              v24 = *(float *)(sub_1014F160(*((_WORD *)a1 + 1044)) + 48);
            }
            v30 = v30 * v24;
            v31 = v31 * v24;
            v32 = v24 * v32;
            goto LABEL_30;
          }
        }
      }
    }
  }
  return result;
}
