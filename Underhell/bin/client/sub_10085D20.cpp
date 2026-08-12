void __thiscall sub_10085D20(_DWORD *this, float a2)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  double v6; // st7
  double v7; // st6
  int v8; // eax
  double v9; // st7
  double v10; // st5
  double v11; // rtt
  double v12; // st6
  double v13; // st7
  double v14; // st6
  double v15; // st4
  double v16; // st7
  double v17; // st5
  double v18; // st4
  float v19; // edx
  double v20; // rt1
  double v21; // st6
  double v22; // st7
  float v23; // eax
  float v24; // ecx
  double v25; // st6
  float v26; // edx
  float v27; // ecx
  float *v28; // eax
  double v29; // st6
  double v30; // st7
  float *v31; // eax
  double v32; // st6
  double v33; // st7
  double v34; // st7
  double v35; // st5
  double v36; // st4
  double v37; // rtt
  double v38; // st5
  double v39; // st7
  double v40; // st0
  double v41; // st2
  double v42; // st0
  double v43; // st1
  double v44; // st2
  bool v45; // c3
  double v46; // st7
  float *v47; // eax
  double v48; // st6
  double v49; // st5
  double v50; // st7
  double v51; // rt0
  double v52; // st5
  float v53[9]; // [esp+18h] [ebp-78h] BYREF
  float v54; // [esp+3Ch] [ebp-54h] BYREF
  float v55; // [esp+40h] [ebp-50h]
  float v56; // [esp+44h] [ebp-4Ch]
  float v57[3]; // [esp+48h] [ebp-48h] BYREF
  float v58; // [esp+54h] [ebp-3Ch]
  float v59; // [esp+58h] [ebp-38h]
  float v60; // [esp+5Ch] [ebp-34h]
  float v61; // [esp+60h] [ebp-30h]
  float v62; // [esp+64h] [ebp-2Ch]
  float v63; // [esp+68h] [ebp-28h]
  float v64; // [esp+6Ch] [ebp-24h]
  float v65; // [esp+70h] [ebp-20h]
  float v66; // [esp+74h] [ebp-1Ch]
  int v67; // [esp+78h] [ebp-18h] BYREF
  float v68; // [esp+7Ch] [ebp-14h]
  float v69; // [esp+80h] [ebp-10h]
  int v70; // [esp+84h] [ebp-Ch] BYREF
  float v71; // [esp+88h] [ebp-8h]
  float v72; // [esp+8Ch] [ebp-4h]
  float v73; // [esp+98h] [ebp+8h]

  v3 = this[9] + 168 * LOWORD(a2);
  v4 = sub_1007A730(off_103DCD78, *(_DWORD *)v3);
  v5 = v4;
  if ( v4 )
  {
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v4 + 84))(v4, v57, v53);
    *(float *)&v67 = (v53[0] + v57[0]) * 0.5;
    v68 = 0.5 * (v53[1] + v57[1]);
    v69 = v57[2];
    v6 = 1.0;
    v7 = 3.4028235e38;
    if ( *(float *)(v3 + 144) < 1.0 )
    {
      v10 = *(float *)&v70;
    }
    else
    {
      v73 = *(float *)(dword_1042C25C + 44);
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
      if ( (unsigned __int8)sub_101BD0C0(v8, &v70, &v54) && v73 * v73 <= v55 * v55 + v54 * v54 + v56 * v56 )
      {
        v9 = *(float *)&v70;
        v7 = 3.4028235e38;
      }
      else
      {
        v7 = 3.4028235e38;
        *(float *)&v70 = 3.4028235e38;
        v9 = 3.4028235e38;
        v71 = 3.4028235e38;
        v72 = 3.4028235e38;
      }
      v10 = v9;
      v6 = 1.0;
    }
    if ( v7 == *(float *)(v3 + 144) )
    {
      *(float *)(v3 + 120) = v10;
      *(float *)(v3 + 124) = v71;
      *(float *)(v3 + 128) = v72;
      *(float *)(v3 + 132) = *(float *)&v70;
      *(float *)(v3 + 136) = v71;
      *(float *)(v3 + 140) = v72;
      v11 = v7;
      v12 = v6;
      v13 = v11;
      *(float *)(v3 + 144) = v12;
      v14 = *(float *)&v70;
    }
    else
    {
      v15 = v6;
      v16 = 0.0;
      if ( v15 <= *(float *)(v3 + 144) )
      {
        v40 = v71 - *(float *)(v3 + 124);
        v41 = v40 * v40;
        v42 = v10 - *(float *)(v3 + 120);
        v43 = v41;
        v44 = v72 - *(float *)(v3 + 128);
        if ( v42 * v42 + v43 + v44 * v44 <= v15 )
        {
          v13 = v7;
        }
        else
        {
          *(float *)(v3 + 132) = v10;
          *(float *)(v3 + 136) = v71;
          *(float *)(v3 + 140) = v72;
          v13 = v7;
          *(float *)(v3 + 144) = 0.0;
        }
        v14 = *(float *)(v3 + 120);
        v70 = *(int *)(v3 + 120);
        v71 = *(float *)(v3 + 124);
        v72 = *(float *)(v3 + 128);
      }
      else
      {
        v17 = v15;
        v18 = *((float *)off_103DC81C + 4) / *(float *)(dword_1042C184 + 44) + *(float *)(v3 + 144);
        *(float *)(v3 + 144) = v18;
        if ( v18 > v17 || (v17 = v18, v18 >= 0.0) )
          v16 = v17;
        v19 = *(float *)(v3 + 120);
        v20 = v7;
        v21 = v16;
        v22 = v20;
        v23 = *(float *)(v3 + 124);
        *(float *)(v3 + 144) = v21;
        v24 = *(float *)(v3 + 128);
        v61 = v19;
        v25 = v19;
        v26 = *(float *)(v3 + 132);
        v62 = v23;
        v65 = *(float *)(v3 + 136);
        v63 = v24;
        v27 = *(float *)(v3 + 140);
        v64 = v26;
        v66 = v27;
        if ( v20 == v25 )
        {
          v28 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 120))(this);
          v29 = v69 - 200.0 * v28[2];
          v30 = v68 - v28[1] * 200.0;
          v61 = *(float *)&v67 - *v28 * 200.0;
          v62 = v30;
          v63 = v29;
          v22 = 3.4028235e38;
        }
        if ( v64 == v22 )
        {
          v31 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 120))(this);
          v32 = v69 - 200.0 * v31[2];
          v33 = v68 - v31[1] * 200.0;
          v64 = *(float *)&v67 - *v31 * 200.0;
          v65 = v33;
          v66 = v32;
        }
        v53[6] = *(float *)&v67 - *(float *)(v3 + 120);
        v53[7] = v68 - *(float *)(v3 + 124);
        v53[8] = v69 - *(float *)(v3 + 128);
        off_103EDFEC();
        v53[3] = *(float *)&v67 - *(float *)(v3 + 132);
        v53[4] = v68 - *(float *)(v3 + 136);
        v53[5] = v69 - *(float *)(v3 + 140);
        off_103EDFEC();
        v34 = *(float *)(v3 + 144);
        v35 = v61 + (v64 - v61) * v34;
        v36 = v34 * (v66 - v63);
        *(float *)&v70 = v35;
        v37 = v35;
        v38 = (v65 - v62) * v34 + v62;
        v39 = v37;
        v71 = v38;
        v72 = v63 + v36;
        if ( *(float *)(v3 + 144) >= 1.0 )
        {
          *(float *)(v3 + 120) = *(float *)(v3 + 132);
          *(float *)(v3 + 124) = *(float *)(v3 + 136);
          *(float *)(v3 + 128) = *(float *)(v3 + 140);
          v39 = *(float *)&v70;
        }
        v14 = v39;
        v13 = 3.4028235e38;
      }
    }
    v45 = v14 == v13;
    v46 = v14;
    if ( v45 )
    {
      v47 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 120))(this);
      v48 = v69 - 200.0 * v47[2];
      v49 = *(float *)&v67 - *v47 * 200.0;
      v50 = v68 - v47[1] * 200.0;
      *(float *)&v70 = v49;
      v51 = v49;
      v52 = v50;
      v46 = v51;
      v71 = v52;
      v72 = v48;
    }
    v58 = *(float *)&v67 - v46;
    v59 = v68 - v71;
    v60 = v69 - v72;
    off_103EDFEC();
    v60 = *(float *)(dword_1042C214 + 44) * v60;
    off_103EDFEC();
    *(float *)(v3 + 84) = v58;
    *(float *)(v3 + 88) = v59;
    *(float *)(v3 + 92) = v60;
    if ( *(_DWORD *)(dword_1042C1CC + 48) )
      sub_10092EA0((int)&v70, (int)&v67, 255, 255, 0, 0, 0.0);
  }
  else
  {
    DevWarning(
      "%s(): Skipping shadow with invalid client renderable (shadow handle %d)\n",
      "CClientShadowMgr::UpdateShadowDirectionFromLocalLightSource",
      LOWORD(a2));
  }
}
