int __thiscall sub_100B21A0(int this, float *a2, float *a3, int a4)
{
  int result; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  float *v9; // eax
  int v10; // edx
  double v11; // st7
  unsigned __int8 (__thiscall *v12)(int); // eax
  bool v13; // zf
  int (*v14)(void); // eax
  float *v15; // eax
  double v16; // st7
  float *v17; // eax
  float *v18; // eax
  int v19; // eax
  int v20; // edi
  int v21; // eax
  float *v22; // eax
  int v23; // edx
  double v24; // st7
  unsigned __int8 (__thiscall *v25)(int); // eax
  int (*v26)(void); // eax
  float *v27; // eax
  double v28; // st7
  float *v29; // eax
  float *v30; // eax
  float v31; // ecx
  float v32; // edx
  float v33; // eax
  double v34; // st7
  int v35; // eax
  float *v36; // eax
  double v37; // st7
  double v38; // st7
  double v39; // st7
  double v40; // st6
  double v41; // st7
  double v42; // st6
  double v43; // st5
  double v44; // rtt
  double v45; // st5
  double v46; // st7
  double v47; // st5
  double v48; // st5
  double v49; // st4
  double v50; // st7
  double v51; // rt1
  double v52; // st7
  float v53; // [esp+0h] [ebp-A4h]
  _BYTE v54[12]; // [esp+10h] [ebp-94h] BYREF
  float v55; // [esp+1Ch] [ebp-88h]
  float v56; // [esp+20h] [ebp-84h]
  float v57; // [esp+24h] [ebp-80h]
  float v58; // [esp+64h] [ebp-40h] BYREF
  float v59; // [esp+68h] [ebp-3Ch]
  float v60; // [esp+6Ch] [ebp-38h]
  float v61; // [esp+70h] [ebp-34h] BYREF
  float v62; // [esp+74h] [ebp-30h]
  float v63; // [esp+78h] [ebp-2Ch]
  float v64; // [esp+7Ch] [ebp-28h] BYREF
  float v65; // [esp+80h] [ebp-24h]
  float v66; // [esp+84h] [ebp-20h]
  float v67; // [esp+88h] [ebp-1Ch] BYREF
  float v68; // [esp+8Ch] [ebp-18h]
  float v69; // [esp+90h] [ebp-14h]
  bool v70; // [esp+97h] [ebp-Dh]
  float v71; // [esp+98h] [ebp-Ch] BYREF
  float v72; // [esp+9Ch] [ebp-8h]
  float v73; // [esp+A0h] [ebp-4h]
  int savedregs; // [esp+A4h] [ebp+0h] BYREF

  result = dword_1042F9B4;
  v70 = *(_DWORD *)(dword_1042F9B4 + 48) == 0;
  if ( *(_DWORD *)(this + 40) )
  {
    v6 = *(_DWORD *)(this + 12);
    if ( v6 > 0 && (v7 = sub_1012D2F0(v6)) != 0 )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 848))(v7);
    }
    else
    {
      result = *(_DWORD *)(this + 40);
      if ( result <= 0 )
        return result;
      result = sub_1007A6A0(off_103DCD78, *(_DWORD *)(this + 40));
    }
    v8 = result;
    if ( result )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)result + 500))(result)
        || (result = (*(int (__thiscall **)(int))(*(_DWORD *)(v8 + 8) + 32))(v8 + 8), !(_BYTE)result) )
      {
        v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v8 + 4) + 4))(v8 + 4);
        v10 = *(_DWORD *)v8;
        v71 = *v9;
        v72 = v9[1];
        v11 = v9[2];
        v12 = *(unsigned __int8 (__thiscall **)(int))(v10 + 500);
        v73 = v11;
        v13 = v12(v8) == 0;
        v14 = *(int (**)(void))(*(_DWORD *)dword_10412D50 + 120);
        if ( v13 )
        {
          v15 = (float *)v14();
          v71 = v71 + v15[24];
          v72 = v15[25] + v72;
          v16 = v15[26];
        }
        else if ( (*(_BYTE *)(v8 + 732) & 2) != 0 )
        {
          v17 = (float *)v14();
          v71 = v17[15] + v71;
          v72 = v17[16] + v72;
          v16 = v17[17];
        }
        else
        {
          v18 = (float *)v14();
          v71 = *v18 + v71;
          v72 = v18[1] + v72;
          v16 = v18[2];
        }
        v19 = *(_DWORD *)(this + 44);
        v20 = 0;
        v73 = v16 + v73;
        if ( v19 > 0 && v19 != *(_DWORD *)(this + 40) && !v70 )
        {
          v21 = sub_1007A6A0(off_103DCD78, v19);
          v20 = v21;
          if ( v21 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(v21 + 8) + 32))(v21 + 8)
              && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v20 + 500))(v20) )
            {
              v20 = 0;
            }
            else
            {
              v22 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v20 + 4) + 4))(v20 + 4);
              v23 = *(_DWORD *)v20;
              v67 = *v22;
              v68 = v22[1];
              v24 = v22[2];
              v25 = *(unsigned __int8 (__thiscall **)(int))(v23 + 500);
              v69 = v24;
              v13 = v25(v20) == 0;
              v26 = *(int (**)(void))(*(_DWORD *)dword_10412D50 + 120);
              if ( v13 )
              {
                v27 = (float *)v26();
                v67 = v27[24] + v67;
                v68 = v27[25] + v68;
                v28 = v27[26];
              }
              else if ( (*(_BYTE *)(v20 + 732) & 2) != 0 )
              {
                v29 = (float *)v26();
                v67 = v67 + v29[15];
                v68 = v29[16] + v68;
                v28 = v29[17];
              }
              else
              {
                v30 = (float *)v26();
                v67 = *v30 + v67;
                v68 = v30[1] + v68;
                v28 = v30[2];
              }
              v69 = v28 + v69;
            }
          }
        }
        v31 = *(float *)(this + 28);
        v61 = *(float *)(this + 68);
        v32 = *(float *)(this + 32);
        v33 = *(float *)(this + 36);
        v62 = *(float *)(this + 64);
        v64 = v31;
        v65 = v32;
        v66 = v33;
        if ( v70 )
        {
          (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, &v64);
LABEL_41:
          sub_101EDFB0(&v64, &v58);
          off_103EDFEC();
          v38 = -*(float *)(this + 56);
          v61 = v58 * v38 + v71;
          v62 = v59 * v38 + v72;
          v63 = v38 * v60 + v73;
          v73 = v73 + *(float *)(this + 52);
          sub_10034140(0);
          sub_10012C30((int)&savedregs, this, &v71, &v61, flt_103E0850, flt_103E085C, 33570827, v8, 0, (int)v54);
          sub_10034180();
          v53 = (v55 - v71) * (v55 - v71) + (v56 - v72) * (v56 - v72) + (v57 - v73) * (v57 - v73);
          v39 = off_103EDFE0(v53);
          v40 = *((float *)off_103DC81C + 4) * 32.0 + *(float *)(this + 60);
          *(float *)(this + 60) = v40;
          if ( v40 >= v39 )
          {
            v42 = v55;
            v61 = v55;
            v48 = v56;
            v62 = v56;
            v63 = v57;
            v49 = v39;
            v50 = v57;
            *(float *)(this + 60) = v49;
            v51 = v48;
            v47 = v50;
            v46 = v51;
          }
          else
          {
            v41 = -v40;
            v42 = v58 * -v40 + v71;
            v61 = v42;
            v43 = v59 * v41 + v72;
            v62 = v43;
            v44 = v43;
            v45 = v41 * v60;
            v46 = v44;
            v47 = v45 + v73;
            v63 = v47;
          }
          if ( v20 )
          {
            v58 = (v67 + v71) * 0.5 - v42;
            v59 = (v68 + v72) * 0.5 - v46;
            v60 = (v69 + v73) * 0.5 - v47;
            sub_101EE190(&v58, &v67);
            v65 = v68;
            sub_10076970(&v64);
            v52 = 60.0;
            if ( v64 > 60.0 || (v52 = -60.0, v64 < -60.0) )
            {
              v64 = v52;
              sub_100B2110((float *)this, &v64);
            }
            else
            {
              sub_100B2110((float *)this, &v64);
            }
          }
          else
          {
            sub_100B20D0((float *)this, &v64);
          }
          *(float *)(this + 16) = v61;
          *(float *)(this + 20) = v62;
          *(float *)(this + 24) = v63;
          *a3 = *(float *)(this + 28);
          a3[1] = *(float *)(this + 32);
          a3[2] = *(float *)(this + 36);
          result = (int)a2;
          *a2 = *(float *)(this + 16);
          a2[1] = *(float *)(this + 20);
          a2[2] = *(float *)(this + 24);
          return result;
        }
        if ( v20 )
        {
          v58 = v67 - v71;
          v59 = v68 - v72;
          v60 = v69 - v73;
          sub_101EE190(&v58, &v64);
          v34 = 0.0;
        }
        else
        {
          v35 = *(_DWORD *)(this + 44);
          if ( v35 && v35 != *(_DWORD *)(this + 40) )
          {
            v61 = 0.0;
            v62 = 0.0;
LABEL_37:
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 500))(v8) )
              v37 = v61;
            else
              v37 = 15.0;
            v64 = v37 + v64;
            v65 = v62 + v65;
            goto LABEL_41;
          }
          v36 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 536))(v8);
          v64 = *v36;
          v65 = v36[1];
          v34 = 0.0;
          v64 = 0.0;
        }
        v66 = v34;
        goto LABEL_37;
      }
    }
  }
  return result;
}
