void __thiscall sub_10376F00(int *this, float *a2)
{
  float v3; // eax
  int *v4; // eax
  int *v5; // ecx
  double v6; // st5
  double v7; // rt1
  double v8; // st5
  double v9; // st7
  double v10; // rt2
  double v11; // st5
  double v12; // st2
  double v13; // rt0
  double v14; // st2
  double v15; // rt1
  double v16; // st2
  double v17; // st5
  double v18; // rtt
  double v19; // st5
  double v20; // st7
  double v21; // rt0
  double v22; // st5
  double v23; // st2
  double v24; // rt2
  double v25; // st2
  double v26; // rtt
  double v27; // st2
  char *v28; // ecx
  int v29; // eax
  int v30; // edx
  void (__thiscall *v31)(int *, int *, _DWORD, _DWORD); // edx
  int v32; // edi
  int v33; // edx
  double v34; // st7
  double (__thiscall *v35)(int, _DWORD, _DWORD); // eax
  double v36; // st7
  double (__thiscall *v37)(int, _DWORD, _DWORD); // eax
  double v38; // st7
  _BYTE v39[44]; // [esp+2Ch] [ebp-84h] BYREF
  float v40; // [esp+58h] [ebp-58h]
  int v41; // [esp+80h] [ebp-30h] BYREF
  float v42; // [esp+84h] [ebp-2Ch]
  float v43; // [esp+88h] [ebp-28h]
  int v44; // [esp+8Ch] [ebp-24h] BYREF
  float v45; // [esp+90h] [ebp-20h]
  float v46; // [esp+94h] [ebp-1Ch]
  int v47; // [esp+98h] [ebp-18h] BYREF
  float v48; // [esp+9Ch] [ebp-14h]
  float v49; // [esp+A0h] [ebp-10h]
  int v50; // [esp+A4h] [ebp-Ch] BYREF
  float v51; // [esp+A8h] [ebp-8h]
  float v52; // [esp+ACh] [ebp-4h]
  int savedregs; // [esp+B0h] [ebp+0h] BYREF

  v3 = *a2;
  if ( *(_DWORD *)a2 == dword_106E8540 )
  {
    sub_103745F0(this, (int)&v44, COERCE_INT(a2[3]));
    return;
  }
  if ( LODWORD(v3) == dword_106E853C )
  {
    sub_103746B0(this, (int)&v44, COERCE_INT(a2[3]));
    return;
  }
  if ( LODWORD(v3) == dword_106E8538 )
  {
    sub_10374770(this, (int)&v44, COERCE_INT(a2[3]));
    return;
  }
  if ( LODWORD(v3) != dword_106E8520 && LODWORD(v3) != dword_106E851C )
  {
    if ( LODWORD(v3) == dword_106E8534 )
    {
      sub_1023C380(this, (int)"NPC_Hunter.MeleeAnnounce", 0.0, 0);
      return;
    }
    if ( LODWORD(v3) == dword_106E8530 )
    {
      sub_104222B0(this + 182, &v50, &v47, 0);
      v4 = &v41;
      v5 = &v44;
      v6 = *(float *)&v47 * -100.0;
      *(float *)&v47 = v6;
      v7 = v6;
      v8 = v48 * -100.0;
      v9 = v7;
      v48 = v8;
      v10 = v8;
      v11 = -100.0 * v49;
      v49 = v11;
      v12 = *(float *)&v50 * 600.0;
      *(float *)&v50 = v12;
      v13 = v12;
      v14 = v51 * 600.0;
      v51 = v14;
      v15 = v14;
      v16 = 600.0 * v52;
      v52 = v16;
      *(float *)&v41 = v9 + v13;
      v42 = v10 + v15;
      v43 = v16 + v11;
      *(float *)&v44 = 25.0;
      v45 = 30.0;
      v46 = -20.0;
LABEL_13:
      sub_10373D80(this, 80.0, (int)*(float *)(dword_106E85BC + 44), (float *)v5, (float *)v4, 0);
      return;
    }
    if ( LODWORD(v3) == dword_106E852C )
    {
      sub_104222B0(this + 182, &v50, &v47, 0);
      v4 = &v44;
      v5 = &v41;
      v17 = *(float *)&v47 * 100.0;
      *(float *)&v47 = v17;
      v18 = v17;
      v19 = v48 * 100.0;
      v20 = v18;
      v48 = v19;
      v21 = v19;
      v22 = 100.0 * v49;
      v49 = v22;
      v23 = *(float *)&v50 * 600.0;
      *(float *)&v50 = v23;
      v24 = v23;
      v25 = v51 * 600.0;
      v51 = v25;
      v26 = v25;
      v27 = 600.0 * v52;
      v52 = v27;
      *(float *)&v44 = v20 + v24;
      v45 = v21 + v26;
      v46 = v27 + v22;
      *(float *)&v41 = 25.0;
      v42 = -30.0;
      v43 = 20.0;
      goto LABEL_13;
    }
    if ( LODWORD(v3) == dword_106E8524 )
    {
      v28 = (char *)*((_DWORD *)a2 + 1);
      if ( v28 && sub_100BEFA0(this, v28, (int)&v47, (int)&v44) )
      {
        sub_104222B0(&v44, &v41, 0, 0);
      }
      else
      {
        v29 = (*(int (__thiscall **)(int *))(*this + 576))(this);
        v30 = *this;
        v47 = *(int *)v29;
        v31 = *(void (__thiscall **)(int *, int *, _DWORD, _DWORD))(v30 + 528);
        v48 = *(float *)(v29 + 4);
        v49 = *(float *)(v29 + 8);
        v31(this, &v41, 0, 0);
      }
      sub_10124BC0((float *)&v47, (float *)&v41, 0, 4, COERCE_FLOAT(255));
      v32 = 3;
      do
      {
        v52 = v43;
        v50 = v41;
        v33 = *(_DWORD *)dword_106B31E4;
        v51 = v42;
        v34 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v33 + 4))(dword_106B31E4, -0.1, 0.1);
        v35 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
        *(float *)&v50 = v34 + *(float *)&v50;
        v36 = v35(dword_106B31E4, -0.1, 0.1);
        v37 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
        v51 = v36 + v51;
        v38 = v37(dword_106B31E4, -0.1, 0.1);
        *(float *)&v44 = *(float *)&v50 * 192.0 + *(float *)&v47;
        v45 = v51 * 192.0 + v48;
        v46 = 192.0 * (v38 + v52) + v49;
        sub_1002A5F0((int)&savedregs, (int)this, (float *)&v47, (float *)&v44, 16395, (int)this, 0, (int)v39);
        if ( 1.0 != v40 )
          sub_10265C30((int)v39, 0);
        --v32;
      }
      while ( v32 );
    }
    else
    {
      sub_103329F0(this, (int)a2);
    }
  }
}
