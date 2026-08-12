void __thiscall sub_100546C0(float *this, _DWORD *a2)
{
  _DWORD *v3; // ecx
  int v4; // eax
  int v5; // eax
  int *v6; // eax
  double v7; // st7
  bool v8; // c0
  double v9; // st7
  float *v10; // eax
  float *v11; // edi
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  int v14; // eax
  _DWORD *v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  float *v19; // ecx
  double v20; // st7
  double v21; // st6
  double v22; // rt1
  double v23; // rt2
  double v24; // st5
  int v25; // ecx
  void (__thiscall *v26)(float *, int); // edx
  int v27; // ecx
  char v28; // bl
  int v29; // eax
  int v30; // eax
  float *v31; // eax
  double v32; // st4
  double v33; // st5
  char v34; // bl
  double v35; // st7
  int v36; // eax
  float *v37; // eax
  double v38; // st5
  double v39; // st3
  double v40; // st7
  double v41; // st3
  int v42; // eax
  float *v43; // ecx
  double v44; // st7
  double v45; // st6
  double v46; // st5
  int *v47; // edi
  float *v48; // eax
  int v49; // eax
  const char *v50; // eax
  int v51; // ebx
  int v52; // edi
  int v53; // eax
  int v54; // eax
  char *v55; // eax
  int v56; // eax
  int v57; // edi
  float *v58; // eax
  double v59; // st4
  double v60; // st6
  double v61; // st4
  int v62; // edi
  int v63; // eax
  float *v64; // eax
  double v65; // st4
  double v66; // st6
  double v67; // st4
  double v68; // st5
  double v69; // st6
  float *v70; // eax
  int v71; // ecx
  char v72; // bl
  float v73; // [esp+10h] [ebp-78h]
  float v74; // [esp+14h] [ebp-74h]
  float v75; // [esp+18h] [ebp-70h]
  float v76; // [esp+18h] [ebp-70h]
  float v77[12]; // [esp+28h] [ebp-60h] BYREF
  _BYTE v78[12]; // [esp+58h] [ebp-30h] BYREF
  _BYTE v79[12]; // [esp+64h] [ebp-24h] BYREF
  float v80[3]; // [esp+70h] [ebp-18h] BYREF
  int v81; // [esp+7Ch] [ebp-Ch] BYREF
  int v82; // [esp+80h] [ebp-8h] BYREF
  float v83; // [esp+84h] [ebp-4h]
  float v84; // [esp+90h] [ebp+8h]

  switch ( *a2 )
  {
    case 0x186A1:
    case 0x186A5:
      v82 = 63;
      goto LABEL_28;
    case 0x186A2:
      if ( (unsigned __int8)sub_1012B040(0) )
        goto LABEL_30;
      if ( *((_BYTE *)this + 132) )
      {
        sub_1004BD70((int)this, 129, 0.0);
        sub_10051DF0((int)this);
        return;
      }
      if ( !sub_10053910((int)this) )
      {
LABEL_30:
        (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 8))(this, 1);
        return;
      }
      if ( sub_10052120((_DWORD **)this) && *(_DWORD *)(dword_106921B4 + 48) )
      {
        if ( sub_10052150(this) && !sub_10052360((int)this) )
        {
          sub_100521C0(this);
          sub_1007DF40(&flt_106F1CA8);
          sub_1007DE40(-1);
          sub_10050BE0(this + 42);
          sub_10050BA0(this + 45, -1.0);
        }
        if ( *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 2588) + 12) != 1
          && !sub_10052150(this)
          && *((_DWORD *)this + 47) )
        {
          sub_10052590((int)this, *((_DWORD *)this + 47));
        }
      }
      else
      {
        sub_100521C0(this);
        if ( (unsigned __int8)sub_1007E040(*(_DWORD *)(*((_DWORD *)this + 1) + 2588)) )
        {
          sub_1007DF40(&flt_106F1CA8);
          sub_1007DE40(-1);
        }
      }
      if ( !(unsigned __int8)sub_1007E040(*(_DWORD *)(*((_DWORD *)this + 1) + 2588)) )
      {
        (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 12))(this, 0);
        if ( !sub_10052360((int)this) )
          sub_100521C0(this);
        if ( sub_10051020((int)this, this[12], this[11], *((_DWORD *)this + 6)) )
        {
          v75 = this[14];
          v29 = sub_10050FC0(this);
          sub_10043F70(this + 23, v29, v75);
          *((_BYTE *)this + 108) = 0;
        }
        else
        {
          sub_1001EDC0(this + 36, 0.25, 0.75);
        }
        return;
      }
      if ( sub_10052150(this) )
      {
        v47 = sub_10052270(this);
        v48 = (float *)sub_1007DD50(*(_DWORD *)(*((_DWORD *)this + 1) + 2588));
        if ( sub_1001F080(v48, (float *)v47) )
        {
          if ( !(unsigned __int8)sub_100846B0(v47) )
          {
            (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 8))(this, 11);
            *((_BYTE *)this + 108) = 1;
            return;
          }
          sub_10051DF0((int)this);
          if ( !sub_100524D0(this) )
          {
            sub_100519F0(this);
            v49 = sub_100713E0(v78);
            sub_1007DF40(v49);
          }
          if ( *(_DWORD *)(sub_100519F0(this) + 832) )
          {
            v50 = *(const char **)(sub_100519F0(this) + 832);
            if ( !v50 )
              v50 = String;
            v51 = sub_10008FB0((int)v50);
            if ( v51 == -1 )
            {
              v55 = *(char **)(sub_100519F0(this) + 832);
              if ( !v55 )
                v55 = (char *)String;
              v56 = sub_100BDF40(v55);
              if ( v56 != -1 )
                sub_1007DF00(v56);
            }
            else
            {
              v52 = *((_DWORD *)this + 1);
              v53 = sub_100519F0(this);
              v54 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v52 + 2060))(v52, *(__int16 *)(v53 + 816), v51);
              sub_1007DE40(v54);
            }
          }
        }
      }
      else
      {
        v84 = this[10];
        v30 = sub_10050FC0(this);
        v31 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v30 + 536))(v30, v79);
        v32 = -v31[1];
        v33 = -v31[2];
        if ( v33 * v33 + v32 * v32 + -*v31 * -*v31 >= 2304.0 )
        {
          v35 = v84;
          v34 = 0;
        }
        else
        {
          v34 = 1;
          v35 = ((double (__stdcall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(*((_DWORD *)this + 1) + 2604) + 92))(12.0)
              - 12.0
              + v84;
        }
        v73 = v35;
        if ( sub_10051020((int)this, v73, this[11], *((_DWORD *)this + 6)) )
        {
          sub_10050BE0(this + 48);
          (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 12))(this, 0);
          sub_10082A70(v34 == 0);
          v76 = this[14];
          v36 = sub_10050FC0(this);
          sub_10043F70(this + 23, v36, v76);
          return;
        }
        if ( sub_1001ED60(this + 40) )
        {
          v37 = (float *)sub_1007DD50(*(_DWORD *)(*((_DWORD *)this + 1) + 2588));
          v38 = v37[2] - this[9];
          v39 = *v37 - this[7];
          v40 = v39 * v39;
          v41 = v37[1] - this[8];
          if ( v41 * v41 + v40 + v38 * v38 > this[15] * this[15]
            && *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 2588) + 12) != 1 )
          {
            this[40] = *(float *)(dword_106B31C8 + 12) + 0.5;
            if ( !(unsigned __int8)sub_100846B0(this + 7) )
            {
              v42 = sub_10050FC0(this);
              v43 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v42 + 576))(v42);
              v44 = this[7] - *v43;
              v45 = this[8] - v43[1];
              v46 = this[9] - v43[2];
              if ( v44 * v44 + v45 * v45 <= 72.0
                || (v80[0] = v44 * 0.5 + *v43,
                    v80[1] = v45 * 0.5 + v43[1],
                    v80[2] = v46 * 0.5 + v43[2],
                    !(unsigned __int8)sub_100846B0(v80)) )
              {
                (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 8))(this, 11);
                *((_BYTE *)this + 108) = 1;
              }
              return;
            }
            sub_10051DF0((int)this);
          }
        }
      }
      if ( *((_DWORD *)this + 41) != 11 )
      {
        v57 = *((_DWORD *)this + 1);
        v58 = (float *)sub_1007DD50(*(_DWORD *)(v57 + 2588));
        v59 = v58[1] - *(float *)(v57 + 720);
        v60 = v59 * v59;
        v61 = *v58 - *(float *)(v57 + 716);
        if ( this[16] * this[16] <= v61 * v61 + v60 || (v62 = 6, *(_DWORD *)(*((_DWORD *)this + 1) + 2324) == 3) )
          v62 = 11;
        if ( ((_BYTE)this[6] & 2) != 0 )
        {
          v63 = sub_1026A890(this + 5);
          if ( !(unsigned __int8)sub_100AB270(v63) )
            v62 = 11;
        }
        if ( v62 != *((_DWORD *)this + 41) )
        {
          *((_DWORD *)this + 41) = v62;
          sub_1007DD70(v62);
        }
      }
      v64 = (float *)sub_1004BF30(this);
      v65 = this[31] - v64[1];
      v66 = v65 * v65;
      v67 = this[30] - *v64;
      v68 = v66;
      v69 = this[32] - v64[2];
      if ( v67 * v67 + v68 + v69 * v69 > 32400.0 )
      {
        v70 = (float *)sub_1004BF30(this);
        this[30] = *v70;
        this[31] = v70[1];
        this[32] = v70[2];
        sub_10051DF0((int)this);
      }
      return;
    case 0x186A3:
      v3 = (_DWORD *)*((_DWORD *)this + 1);
      v4 = v3[538];
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 != 1 )
            return;
          goto LABEL_5;
        }
      }
      else if ( (*(int (__thiscall **)(_DWORD *))(*v3 + 368))(v3) )
      {
        v8 = this[17] > 144.0;
        *(float *)&v81 = flt_10689730;
        *(float *)&v82 = flt_10689734;
        v83 = flt_10689738;
        v9 = 144.0;
        if ( !v8 )
          v9 = this[17];
        v74 = v9;
        if ( (unsigned __int8)sub_10051350((_DWORD **)this, v74, (int)&v81) )
        {
          v10 = (float *)*((_DWORD *)this + 1);
          v10[719] = *(float *)&v81;
          v10[720] = *(float *)&v82;
          v10[721] = v83;
        }
        goto LABEL_13;
      }
      v11 = (float *)(*((_DWORD *)this + 1) + 2876);
      if ( sub_1001F080(v11, &flt_10689730) )
      {
        sub_1001EE90(v77, 7, v11, 11, -2.0, 0, dword_10603BB4);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(*((_DWORD *)this + 1) + 2588) + 20))(
               *(_DWORD *)(*((_DWORD *)this + 1) + 2588),
               v77,
               8) )
        {
          (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 12))(this, 0);
          *((_BYTE *)this + 132) = 1;
          return;
        }
LABEL_13:
        ++*(_DWORD *)(*((_DWORD *)this + 1) + 2152);
        return;
      }
LABEL_5:
      if ( sub_10052150(this) && sub_10052360((int)this) )
      {
        v6 = sub_10052270(this);
        v81 = *v6;
        v82 = v6[1];
        v7 = *((float *)v6 + 2);
      }
      else
      {
        v81 = *((int *)this + 7);
        v82 = *((int *)this + 8);
        v7 = this[9];
      }
      v83 = v7;
      sub_10042450(v77, (float *)&v81, -1, this[12], 0, dword_10603BB4);
      v12 = (_DWORD *)sub_1026A890(this + 5);
      if ( sub_10019AD0(v12)
        && (v13 = (_DWORD *)sub_1026A890(this + 5),
            v14 = sub_10019AD0(v13),
            (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 340))(v14)) )
      {
        v15 = (_DWORD *)sub_1026A890(this + 5);
        v16 = sub_10019AD0(v15);
      }
      else
      {
        v16 = sub_1026A890(this + 5);
      }
      v17 = *((_DWORD *)this + 1);
      LODWORD(v77[11]) = v16;
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(v17 + 2588) + 20))(
             *(_DWORD *)(v17 + 2588),
             v77,
             8) )
      {
        goto LABEL_25;
      }
      v18 = sub_10050FC0(this);
      v19 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 576))(v18);
      v20 = *(float *)&v81 - *v19;
      v21 = *(float *)&v82 - v19[1];
      if ( v20 * v20 + v21 * v21 <= 72.0 )
        goto LABEL_26;
      v22 = v20 * 0.5 + *v19;
      v23 = v21 * 0.5 + v19[1];
      v24 = (v83 - v19[2]) * 0.5 + v19[2];
      v25 = *((_DWORD *)this + 1);
      v77[1] = v22;
      v77[2] = v23;
      v77[3] = v24;
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(v25 + 2588) + 20))(
             *(_DWORD *)(v25 + 2588),
             v77,
             8) )
      {
LABEL_25:
        (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 12))(this, 0);
      }
      else
      {
LABEL_26:
        sub_1001EDC0(this + 36, 2.0, 5.0);
        v26 = *(void (__thiscall **)(float *, int))(*(_DWORD *)this + 8);
        *((_BYTE *)this + 109) = 1;
        v26(this, 11);
      }
      return;
    case 0x186A8:
      v71 = *((_DWORD *)this + 1);
      v72 = *((_BYTE *)this + 8);
      v83 = 0.0;
      v82 = 67;
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v71 + 1264))(v71, &v82);
      *((_BYTE *)this + 8) = v72;
      return;
    case 0x186AA:
      v82 = 67;
LABEL_28:
      v27 = *((_DWORD *)this + 1);
      v28 = *((_BYTE *)this + 8);
      v83 = 0.0;
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v27 + 1264))(v27, &v82);
      *((_BYTE *)this + 8) = v28;
      return;
    default:
      sub_1004B450(this, (int)a2);
      return;
  }
}
