void __thiscall sub_10331E50(int *this, int *a2)
{
  int v2; // eax
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  void (__thiscall *v8)(int *, void *, int); // edx
  int *v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int *v13; // eax
  float v14; // edx
  int v15; // ecx
  float v16; // eax
  int v17; // edx
  float *v18; // eax
  double v19; // st6
  double v20; // st7
  double v21; // st7
  int v22; // eax
  float *v23; // edx
  float *v24; // eax
  double v25; // st5
  double v26; // rt0
  double v27; // st5
  double v28; // st7
  double v29; // rt1
  double v30; // st5
  double v31; // st2
  double v32; // rtt
  double v33; // st2
  double v34; // rt0
  double v35; // st2
  double v36; // st5
  double v37; // rt2
  double v38; // st5
  double v39; // st7
  double v40; // rtt
  double v41; // st5
  double v42; // st2
  double v43; // rt1
  double v44; // st2
  double v45; // rt2
  double v46; // st2
  unsigned int v47; // edi
  double v48; // st7
  int (__thiscall *v49)(int, int, int); // eax
  unsigned int v50; // edi
  char *v51; // ebx
  int v52; // eax
  int v53; // edi
  int v54; // ebx
  int v55; // eax
  int v56; // eax
  int (__thiscall *v57)(int *, _BYTE *); // edx
  double v58; // st7
  int v59; // eax
  __int16 v60; // [esp+14h] [ebp-138h]
  float v61; // [esp+18h] [ebp-134h]
  int v62; // [esp+20h] [ebp-12Ch]
  float v63; // [esp+20h] [ebp-12Ch]
  float v64; // [esp+20h] [ebp-12Ch]
  char String[128]; // [esp+30h] [ebp-11Ch] BYREF
  int v66[20]; // [esp+B0h] [ebp-9Ch] BYREF
  _BYTE v67[12]; // [esp+100h] [ebp-4Ch] BYREF
  _BYTE v68[12]; // [esp+10Ch] [ebp-40h] BYREF
  float v69; // [esp+118h] [ebp-34h]
  float v70; // [esp+11Ch] [ebp-30h] BYREF
  float v71; // [esp+120h] [ebp-2Ch]
  float v72; // [esp+124h] [ebp-28h]
  float v73; // [esp+128h] [ebp-24h] BYREF
  float v74; // [esp+12Ch] [ebp-20h]
  float v75; // [esp+130h] [ebp-1Ch]
  int v76; // [esp+134h] [ebp-18h] BYREF
  float v77; // [esp+138h] [ebp-14h]
  float v78; // [esp+13Ch] [ebp-10h]
  int v79; // [esp+140h] [ebp-Ch] BYREF
  int v80; // [esp+144h] [ebp-8h]
  int v81; // [esp+148h] [ebp-4h]
  int v82; // [esp+154h] [ebp+8h]
  float v83; // [esp+154h] [ebp+8h]
  int v84; // [esp+154h] [ebp+8h]

  v2 = *a2;
  if ( *a2 == 28 )
  {
    if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
    {
      v4 = (*(int (__thiscall **)(int *))(*this + 368))(this);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 284))(v4) )
      {
        if ( sub_10023D10(this, 23) )
        {
          v5 = dword_106E5708;
          v6 = (*(int (__thiscall **)(int *))(*this + 368))(this);
          v7 = sub_100D7680(v6);
          if ( v5 > 0 )
            (*(void (__thiscall **)(int, int, _DWORD, int *))(*(_DWORD *)v7 + 896))(v7, v5, 0, this);
        }
      }
    }
    return;
  }
  if ( v2 == dword_106E56C0 )
  {
    (*(void (__thiscall **)(int *))(*this + 2244))(this);
    return;
  }
  if ( v2 == dword_106E56BC )
  {
    (*(void (__thiscall **)(int *))(*this + 1616))(this);
    return;
  }
  if ( v2 == dword_106E56D8 )
  {
    (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 1652))(this, 180.0, 0.5);
    (*(void (__thiscall **)(int *, _DWORD))(*this + 2312))(this, 0);
    return;
  }
  if ( v2 == dword_106E56D4 )
  {
    (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 1652))(this, 180.0, 0.5);
    (*(void (__thiscall **)(int *, int))(*this + 2312))(this, 1);
    return;
  }
  if ( v2 == dword_106E56C4 )
  {
    (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 1652))(this, 180.0, 3.0);
    if ( (this[64] & 0x8000000) == 0 )
    {
      v8 = *(void (__thiscall **)(int *, void *, int))(*this + 2324);
      this[950] = *(int *)(dword_106B31C8 + 12);
      v8(this, &unk_1066E180, 2);
    }
    return;
  }
  if ( v2 == dword_106E56D0 )
  {
    (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 1652))(this, 180.0, 0.5);
    (*(void (__thiscall **)(int *, _DWORD))(*this + 2316))(this, 0);
    return;
  }
  if ( v2 == dword_106E56CC )
  {
    (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 1652))(this, 180.0, 0.5);
    (*(void (__thiscall **)(int *, int))(*this + 2316))(this, 1);
    return;
  }
  if ( v2 == dword_106E56DC )
  {
    (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 1652))(this, 180.0, 0.5);
    (*(void (__thiscall **)(int *))(*this + 2300))(this);
    return;
  }
  if ( v2 == dword_106E56C8 )
  {
    (*(void (__thiscall **)(int *))(*this + 2300))(this);
    return;
  }
  if ( v2 == dword_106E56E0 )
  {
    v9 = (int *)(*(int (__thiscall **)(int *))(*this + 368))(this);
    if ( v9 )
    {
      v10 = sub_1026A890((unsigned int *)this + 949);
      v82 = v10;
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 424);
        if ( v11 )
        {
          sub_1023C380(this, (int)"NPC_BaseZombie.Swat", 0.0, 0);
          v60 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106BAFF8 + 12))(dword_106BAFF8);
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 152))(v11);
          sub_101BA6C0((int)v9, v11, 4, v12, v60, COERCE_FLOAT("flesh"), 0.5);
          v13 = (int *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v82 + 576))(v82, 800.0);
          v14 = *((float *)v13 + 1);
          v15 = *v13;
          v16 = *((float *)v13 + 2);
          v77 = v14;
          v17 = *v9;
          v76 = v15;
          v78 = v16;
          v18 = (float *)(*(int (__thiscall **)(int *))(v17 + 576))(v9);
          v19 = v18[1] - v77;
          v20 = v18[2] - v78;
          *(float *)&v79 = *v18 - *(float *)&v76;
          *(float *)&v80 = v19;
          *(float *)&v81 = v20;
          off_10689714();
          *(float *)&v79 = *(float *)&v79 * 800.0;
          *(float *)&v80 = *(float *)&v80 * 800.0;
          *(float *)&v81 = 800.0 * *(float *)&v81 + 200.0;
          v83 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  -180.0,
                  180.0);
          v21 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                  dword_106B31E4,
                  -360.0,
                  360.0);
          v70 = v83;
          v71 = 20.0;
          v72 = v21;
          (*(void (__thiscall **)(int, int *, float *))(*(_DWORD *)v11 + 208))(v11, &v79, &v70);
          this[949] = -1;
          *((float *)this + 952) = *(float *)(dword_106B31C8 + 12) + 5.0;
        }
        else
        {
          DevMsg("**Zombie: No Physics Object for physics Ent!");
        }
      }
      else
      {
        DevMsg("**Zombie: Missing my physics ent!!");
      }
      return;
    }
  }
  v22 = *a2;
  if ( *a2 == dword_106E56EC )
  {
    sub_104222B0(this + 182, &v79, &v76, 0);
    v62 = 1;
    v23 = &v70;
    v24 = &v73;
    v25 = *(float *)&v76 * 100.0;
    *(float *)&v76 = v25;
    v26 = v25;
    v27 = v77 * 100.0;
    v28 = v26;
    v77 = v27;
    v29 = v27;
    v30 = 100.0 * v78;
    v78 = v30;
    v31 = *(float *)&v79 * 200.0;
    *(float *)&v79 = v31;
    v32 = v31;
    v33 = *(float *)&v80 * 200.0;
    *(float *)&v80 = v33;
    v34 = v33;
    v35 = 200.0 * *(float *)&v81;
    *(float *)&v81 = v35;
    v70 = v28 + v32;
    v71 = v29 + v34;
    v72 = v35 + v30;
    v73 = -5.0;
    v74 = -7.0;
    v75 = -3.0;
LABEL_37:
    v47 = *this;
    v63 = ((double (__thiscall *)(int *, int, float *, float *, int))*(_DWORD *)(*this + 2240))(
            this,
            (int)*(float *)(dword_106E573C + 44),
            v24,
            v23,
            v62);
    (*(void (__thiscall **)(int *, _DWORD))(v47 + 2292))(this, LODWORD(v63));
    return;
  }
  if ( v22 == dword_106E56E8 )
  {
    sub_104222B0(this + 182, &v79, &v76, 0);
    v62 = 0;
    v23 = &v73;
    v24 = &v70;
    v36 = *(float *)&v76 * -100.0;
    *(float *)&v76 = v36;
    v37 = v36;
    v38 = v77 * -100.0;
    v39 = v37;
    v77 = v38;
    v40 = v38;
    v41 = -100.0 * v78;
    v78 = v41;
    v42 = *(float *)&v79 * 200.0;
    *(float *)&v79 = v42;
    v43 = v42;
    v44 = *(float *)&v80 * 200.0;
    *(float *)&v80 = v44;
    v45 = v44;
    v46 = 200.0 * *(float *)&v81;
    *(float *)&v81 = v46;
    v73 = v39 + v43;
    v74 = v40 + v45;
    v75 = v46 + v41;
    v70 = -5.0;
    v71 = 7.0;
    v72 = -3.0;
    goto LABEL_37;
  }
  if ( v22 == dword_106E56E4 )
  {
    v48 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -5, 5);
    v49 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8);
    v69 = v48;
    v73 = -10.0;
    v74 = v69;
    v75 = (float)v49(dword_106B31E4, -5, 5);
    sub_10422220(this + 182, &v79);
    v50 = *this;
    *(float *)&v79 = *(float *)&v79 * 200.0;
    *(float *)&v80 = *(float *)&v80 * 200.0;
    *(float *)&v81 = 200.0 * *(float *)&v81;
    v64 = ((double (__thiscall *)(int *, int, float *, int *, int))*(_DWORD *)(v50 + 2240))(
            this,
            (int)*(float *)(dword_106E573C + 44),
            &v73,
            &v79,
            2);
    (*(void (__thiscall **)(int *, _DWORD))(v50 + 2292))(this, LODWORD(v64));
  }
  else if ( v22 == dword_106E56B8 )
  {
    if ( sub_1002FDF0(this) )
    {
      v51 = sub_1025F620(String, (char *)a2[1], 32);
      v52 = sub_1002FDF0(this);
      v53 = sub_100BEAD0(v52, String);
      if ( v53 == -1 )
      {
        Warning(
          "AE_ZOMBIE_POPHEADCRAB event using invalid bone name! Usage: event AE_ZOMBIE_POPHEADCRAB \"<BoneName> <Speed>\" \n");
      }
      else
      {
        sub_1025F620(String, v51, 32);
        v54 = sub_100BEF30((int)this, "headcrab");
        v84 = atoi(String);
        v55 = sub_1002FDF0(this);
        sub_100BEB30(v55, v53, (int)&v73, (int)v68);
        sub_100BD6D0(this, v54, (int)&v79, 0, 0, 0);
        *(float *)&v76 = *(float *)&v79 - v73;
        v77 = *(float *)&v80 - v74;
        v78 = *(float *)&v81 - v75;
        off_10689714();
        v61 = (float)this[55];
        v56 = sub_1002FDF0(this);
        sub_10248110((int)v66, (int)this, v56, v61, 0x10000000, 0);
        v66[4] = v79;
        v57 = *(int (__thiscall **)(int *, _BYTE *))(*this + 504);
        v66[5] = v80;
        v66[6] = v81;
        v58 = (double)v84;
        v70 = *(float *)&v76 * v58;
        v71 = v77 * v58;
        v72 = v58 * v78;
        v59 = v57(this, v67);
        sub_10330EE0((int)this, v59, &v70, 1, 0, COERCE_FLOAT(1));
        sub_10248740((int)v66, (float *)&v76, (float *)&v79, 0.5);
        sub_100D9E70(this, (int)this, v66);
      }
    }
  }
  else
  {
    sub_103329F0(a2);
  }
}
