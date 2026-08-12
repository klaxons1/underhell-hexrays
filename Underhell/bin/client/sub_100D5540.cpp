void __userpurge sub_100D5540(int a1@<ecx>, int a2@<edi>, float a3, int a4)
{
  double v5; // st7
  int v6; // esi
  int *v7; // edi
  int v8; // eax
  bool v9; // zf
  long double v10; // st7
  int v11; // eax
  int v12; // edx
  float v13; // ecx
  int v14; // eax
  int v15; // edi
  float v16; // ecx
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st4
  _DWORD *v21; // eax
  _DWORD *v22; // esi
  int v23; // eax
  int v24; // esi
  double v25; // st7
  double v26; // st7
  double v27; // st6
  double v28; // st7
  double v29; // st6
  double v30; // st5
  double v31; // rt1
  double v32; // st5
  double v33; // st6
  double v34; // st7
  double v35; // st7
  long double v36; // st7
  long double v37; // rt2
  long double v38; // st6
  double v39; // st4
  double v40; // st5
  double v41; // st7
  double v42; // st7
  bool v43; // c0
  bool v44; // c3
  double v45; // st7
  double v46; // st7
  double v47; // st6
  bool v48; // c0
  bool v49; // c3
  float v50; // [esp+Ch] [ebp-568h]
  float v51; // [esp+Ch] [ebp-568h]
  float v52; // [esp+10h] [ebp-564h]
  float v53; // [esp+10h] [ebp-564h]
  float v54; // [esp+10h] [ebp-564h]
  float v55; // [esp+10h] [ebp-564h]
  float v56; // [esp+10h] [ebp-564h]
  float v57; // [esp+10h] [ebp-564h]
  float v58; // [esp+10h] [ebp-564h]
  float v59; // [esp+10h] [ebp-564h]
  _BYTE v61[1288]; // [esp+20h] [ebp-554h] BYREF
  float v62; // [esp+528h] [ebp-4Ch]
  int v63; // [esp+52Ch] [ebp-48h]
  int v64; // [esp+530h] [ebp-44h]
  float v65; // [esp+534h] [ebp-40h]
  int v66; // [esp+538h] [ebp-3Ch]
  float v67; // [esp+53Ch] [ebp-38h]
  int v68; // [esp+540h] [ebp-34h]
  float v69; // [esp+544h] [ebp-30h]
  int v70; // [esp+548h] [ebp-2Ch]
  float v71; // [esp+54Ch] [ebp-28h]
  int v72; // [esp+550h] [ebp-24h]
  float v73; // [esp+554h] [ebp-20h] BYREF
  float v74; // [esp+558h] [ebp-1Ch]
  float v75; // [esp+560h] [ebp-14h]
  float v76; // [esp+564h] [ebp-10h]
  float v77; // [esp+568h] [ebp-Ch]
  float v78; // [esp+56Ch] [ebp-8h]
  float v79; // [esp+570h] [ebp-4h]

  if ( !*(_BYTE *)(a1 + 50) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 80))(a1);
    *(_BYTE *)(a1 + 50) = 1;
  }
  if ( *(_DWORD *)(dword_10432A74 + 48)
    && (*(int (__thiscall **)(int))(*(_DWORD *)dword_104131B0 + 76))(dword_104131B0)
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 204))(dword_1047CA6C)
    && *(float *)(a1 + 68) > 0.0 )
  {
    v5 = a3;
    if ( a3 > (double)*(float *)(a1 + 68) )
    {
      v5 = *(float *)(a1 + 68);
      a3 = *(float *)(a1 + 68);
    }
    *(float *)(a1 + 68) = *(float *)(a1 + 68) - v5;
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, &v73);
    v63 = 0;
    v64 = 0;
    v65 = 0.0;
    v66 = 0;
    v67 = 0.0;
    v68 = 0;
    v69 = 0.0;
    v70 = 0;
    v71 = 0.0;
    v72 = 0;
    v6 = 0;
    v7 = (int *)(a1 + 112);
    do
    {
      if ( *v7 )
      {
        v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_104131B0 + 56))(dword_104131B0, v6 + 4);
        v9 = *(_DWORD *)(dword_104321BC + 48) == 0;
        v10 = (double)v8;
        v76 = v10;
        if ( !v9 )
        {
          v10 = pow(fabs(v10) * 0.00125, 1.3) * 300.0;
          if ( v10 > 14000.0 )
            v10 = 14000.0;
          if ( v76 <= 0.0 )
            v10 = -v10;
        }
        v11 = *v7;
        v12 = v7[1];
        *((float *)&v63 + 2 * v11) = v10;
        *(&v64 + 2 * v11) = v12;
      }
      ++v6;
      v7 += 3;
    }
    while ( v6 < 6 );
    if ( !*(_DWORD *)(dword_104319DC + 48) && (byte_104326F4 & 1) != 0 )
    {
      v13 = v65;
      v65 = 0.0;
      v67 = v13;
      v14 = *off_103E0EB8;
      v68 = v66;
      if ( ((double (__thiscall *)(int *))*(_DWORD *)(v14 + 64))(off_103E0EB8) < 0.0 )
        v67 = v67 * -1.0;
    }
    v15 = v72;
    if ( (byte_104326E8 & 1) != 0 || 0.0 != *(float *)(dword_10432A2C + 44) && (byte_104326F4 & 1) != 0 )
    {
      v16 = v71;
      v71 = 0.0;
      v69 = v16;
      v70 = v72;
    }
    v52 = *(float *)(dword_10431BD4 + 44) * 32768.0;
    v77 = sub_100D4C60(v65, v52);
    v53 = *(float *)(dword_10431C1C + 44) * 32768.0;
    v79 = sub_100D4C60(v69, v53);
    v54 = *(float *)(dword_10431C64 + 44) * 32768.0;
    v78 = sub_100D4C60(v67, v54);
    v55 = *(float *)(dword_10431CAC + 44) * 32768.0;
    v75 = sub_100D4C60(v71, v55);
    if ( *(_DWORD *)(dword_1043224C + 48) )
      v78 = v78 * -1.0;
    if ( (*(int (**)(void))(*(_DWORD *)a1 + 132))() && *(_DWORD *)(dword_10432CFC + 48) )
    {
      v17 = v77;
      v18 = 0.0;
      if ( 0.0 != v77 || 0.0 != v79 )
      {
        v74 = atan2(-v79, -v17) * 57.29578 + *(float *)(a1 + 192);
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, &v73);
        v56 = v79 * v79 + v77 * v77;
        *(float *)(a4 + 24) = off_103EDFE0(v56) * *(float *)(dword_10432954 + 44) + *(float *)(a4 + 24);
        v17 = v77;
        v18 = 0.0;
      }
      v19 = v78;
      v20 = v75;
      if ( v18 != v78 || v18 != v20 )
      {
        *(float *)(a1 + 188) = *(float *)(dword_10431D84 + 44) * v19 + *(float *)(a1 + 188);
        *(float *)(a1 + 192) = *(float *)(dword_10431DCC + 44) * v20 + *(float *)(a1 + 192);
      }
      if ( v18 != v17 || v18 != v79 || v18 != v19 || v18 != v20 )
      {
        v57 = *(float *)(a1 + 188) - v73;
        sub_10229120(v57);
        v58 = *(float *)(a1 + 192) - v74;
        sub_10229120(v58);
      }
      return;
    }
    v76 = sub_100B3A20((float *)&dword_1042FB78) * a3;
    v21 = (_DWORD *)sub_100422D0();
    v22 = v21;
    if ( v21 && sub_10012CD0(v21) )
    {
      if ( sub_1000A550(v22) )
      {
        v23 = sub_1000A550(v22);
        v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 56))(v23);
      }
      else
      {
        v24 = *(_DWORD *)(dword_10431E5C + 48);
      }
    }
    else
    {
      v24 = *(_DWORD *)(dword_10431E14 + 48);
    }
    v77 = sub_100D4CC0(v24, v77, 0, *(float *)(dword_10431CF4 + 44)) * *(float *)(dword_10432954 + 44);
    v79 = sub_100D4CC0(v24, v79, 1, *(float *)(dword_10431D3C + 44)) * *(float *)(dword_104328C4 + 44);
    v59 = v75 * v75 + v78 * v78;
    v25 = off_103EDFE0(v59);
    v62 = v25;
    if ( v15 )
    {
      v29 = *(float *)(dword_10431DCC + 44) * v75 * v76 * 180.0;
      v30 = v25;
      v28 = v76;
    }
    else
    {
      if ( *(_DWORD *)(dword_10431EA4 + 48) == 1 )
      {
        v26 = sub_100D50A0(1, v75, v78, a3);
      }
      else
      {
        v50 = v25;
        v26 = sub_100D4EC0(1, v75, v50, a3);
      }
      v27 = v26 * *(float *)(dword_10431DCC + 44) * v76;
      v28 = v76;
      v29 = v27 * *(float *)(dword_104327A4 + 44);
      v30 = v62;
    }
    v74 = v74 + v29;
    v31 = v30;
    v32 = v29;
    v33 = v31;
    *(_WORD *)(a4 + 56) = (int)v32;
    if ( (byte_104326F4 & 1) != 0 )
    {
      if ( v68 )
      {
        v35 = v28 * (*(float *)(dword_10431D84 + 44) * v78) * 180.0;
      }
      else
      {
        if ( *(_DWORD *)(dword_10431EA4 + 48) == 1 )
        {
          v34 = sub_100D50A0(0, v78, v75, a3);
        }
        else
        {
          v51 = v33;
          v34 = sub_100D4EC0(0, v78, v51, a3);
        }
        v35 = v34 * *(float *)(dword_10431D84 + 44) * v76 * *(float *)(dword_104327EC + 44);
      }
      v73 = v73 + v35;
      *(_WORD *)(a4 + 58) = (int)v35;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 36))(dword_10439968);
      if ( 0.0 == v78 && *(float *)(dword_104329E4 + 44) == 0.0 )
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 36))(dword_10439968);
    }
    if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 132))(a1, a2) && *(_DWORD *)(dword_10432D44 + 48) )
    {
      v36 = *(float *)(dword_104312D4 + 44) * 0.017453292;
      v37 = sin(v36);
      v38 = cos(v36);
      v39 = v77;
      v40 = v79;
      *(float *)(a4 + 24) = v37 * v79 + v38 * v77 + *(float *)(a4 + 24);
      v41 = v40 * v38 - v39 * v37 + *(float *)(a4 + 28);
    }
    else
    {
      *(float *)(a4 + 24) = *(float *)(a4 + 24) + v77;
      v41 = *(float *)(a4 + 28) + v79;
    }
    *(float *)(a4 + 28) = v41;
    sub_10229200(v61);
    if ( fabs(v77) >= *(float *)(dword_10432204 + 44) || fabs(v79) >= *(float *)(dword_10432204 + 44) )
      sub_100D5D70((int)&unk_1043268C, 0);
    else
      sub_100D5DE0((int)&unk_1043268C, 0);
    v42 = *(float *)(dword_10432834 + 44);
    v43 = v73 < v42;
    v44 = v73 == v42;
    v45 = v73;
    if ( v43 || v44 )
    {
      v47 = -*(float *)(dword_1043287C + 44);
      v48 = v47 < v45;
      v49 = v47 == v45;
      v46 = v47;
      if ( v48 || v49 )
        goto LABEL_75;
    }
    else
    {
      v46 = *(float *)(dword_10432834 + 44);
    }
    v73 = v46;
LABEL_75:
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, &v73);
  }
}
