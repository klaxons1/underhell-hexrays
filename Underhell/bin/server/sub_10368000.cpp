void __userpurge sub_10368000(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int *a4)
{
  int v5; // eax
  double v6; // st7
  double v7; // st6
  int v8; // edi
  double (__thiscall *v9)(int *, int, float *, float *, int); // edx
  int v10; // eax
  int (__thiscall *v11)(int *); // edx
  int (__thiscall *v12)(int *); // edx
  float *v13; // eax
  void (__noreturn ***v14)(); // ebx
  void (__noreturn **v15)(); // edi
  void (__noreturn ***v16)(); // eax
  float v17; // [esp+14h] [ebp-A4h]
  float v18; // [esp+1Ch] [ebp-9Ch]
  int v19; // [esp+20h] [ebp-98h]
  float v20; // [esp+20h] [ebp-98h]
  _DWORD v21[20]; // [esp+2Ch] [ebp-8Ch] BYREF
  float v22[3]; // [esp+7Ch] [ebp-3Ch] BYREF
  float v23[3]; // [esp+88h] [ebp-30h] BYREF
  int v24; // [esp+94h] [ebp-24h] BYREF
  float v25; // [esp+98h] [ebp-20h]
  float v26; // [esp+9Ch] [ebp-1Ch]
  float v27; // [esp+A0h] [ebp-18h] BYREF
  float v28; // [esp+A4h] [ebp-14h]
  float v29; // [esp+A8h] [ebp-10h]
  float v30; // [esp+ACh] [ebp-Ch] BYREF
  float v31; // [esp+B0h] [ebp-8h]
  float v32; // [esp+B4h] [ebp-4h]
  int v33; // [esp+C0h] [ebp+8h]

  v5 = *a4;
  if ( *a4 == dword_106E7F3C || v5 == dword_106E7F38 )
  {
    if ( !((unsigned __int8)++*((_BYTE *)a1 + 3988) % 3) )
    {
      v14 = sub_1023DBA0();
      v15 = *v14;
      v18 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              100.0,
              150.0,
              0.0);
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD))v15[11])(v14, a1[1004], LODWORD(v18));
      v16 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, void *, int))(*v16)[17])(
        v16,
        a1[1004],
        0,
        &unk_106733CC,
        2);
    }
  }
  else
  {
    if ( v5 == dword_106E7F48 )
    {
      sub_10367810((int)a1);
      return;
    }
    if ( v5 == dword_106E7F44 )
    {
      sub_1023C380(a1, (int)"NPC_FastZombie.GallopLeft", 0.0, 0);
      return;
    }
    if ( v5 == dword_106E7F40 )
    {
      sub_1023C380(a1, (int)"NPC_FastZombie.GallopRight", 0.0, 0);
      return;
    }
    if ( v5 == dword_106E56EC )
    {
      sub_104222B0(a1 + 182, 0, &v30, 0);
      v19 = 1;
      v30 = v30 * -50.0;
      v31 = v31 * -50.0;
      v32 = -50.0 * v32;
      v6 = -3.0;
      v27 = -3.0;
      v7 = -5.0;
LABEL_11:
      v8 = *a1;
      v28 = v7;
      v9 = *(double (__thiscall **)(int *, int, float *, float *, int))(v8 + 2240);
      v29 = v6;
      v20 = v9(a1, 3, &v27, &v30, v19);
      (*(void (__thiscall **)(int *, _DWORD))(v8 + 2292))(a1, LODWORD(v20));
      return;
    }
    if ( v5 == dword_106E56E8 )
    {
      sub_104222B0(a1 + 182, 0, &v30, 0);
      v19 = 0;
      v30 = v30 * 50.0;
      v31 = v31 * 50.0;
      v32 = 50.0 * v32;
      v6 = -3.0;
      v27 = -3.0;
      v7 = 5.0;
      goto LABEL_11;
    }
    if ( v5 == dword_106E7F50 )
    {
      sub_10367E60((int)a1, a2, a3);
    }
    else if ( v5 == dword_106E7F4C )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 2348))(a1) )
      {
        v30 = flt_106F1CA8;
        v31 = flt_106F1CAC;
        v32 = flt_106F1CB0;
        v10 = sub_10366D00(a1 + 958);
        if ( v10 )
          (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v10 + 540))(v10, &v30, 0);
        (*(void (__thiscall **)(int *, float *, float *, float *))(*a1 + 528))(a1, v22, v23, &v27);
        v11 = *(int (__thiscall **)(int *))(*a1 + 448);
        *(float *)&v24 = v22[0] * -2500.0;
        v25 = v22[1] * -2500.0;
        v30 = v27 * 300.0 + v23[0] * 200.0 + *(float *)&v24 + v30;
        v31 = v28 * 300.0 + v23[1] * 200.0 + v25 + v31;
        v32 = 300.0 * v29 + 200.0 * v23[2] + -2500.0 * v22[2] + v32;
        v33 = v11(a1) + 10;
        v12 = *(int (__thiscall **)(int *))(*a1 + 576);
        *(float *)&v24 = v30 * 25.0;
        v25 = v31 * 25.0;
        v26 = 25.0 * v32;
        v17 = (float)v33;
        v13 = (float *)v12(a1);
        sub_102487B0((int)v21, (int)a1, (int)a1, (float *)&v24, v13, v17, 17, 0, 0);
        sub_100D9E70(a1, (int)a1, v21);
      }
    }
    else
    {
      sub_10331E50(a1, a4);
    }
  }
}
