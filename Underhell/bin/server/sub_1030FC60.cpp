int __thiscall sub_1030FC60(int this)
{
  int result; // eax
  void (__noreturn ***v3)(); // eax
  void (__noreturn ***v4)(); // ebx
  void (__noreturn **v5)(); // edi
  int v6; // eax
  void (__noreturn *v7)(); // edx
  void (__noreturn ***v8)(); // eax
  void (__noreturn ***v9)(); // ebx
  void (__noreturn **v10)(); // edi
  int v11; // eax
  void (__noreturn *v12)(); // edx
  void (__noreturn ***v13)(); // ebx
  void (__noreturn **v14)(); // edi
  void (__noreturn ***v15)(); // ebx
  void (__noreturn **v16)(); // edi
  int v17; // eax
  void (__noreturn *v18)(); // edx
  void (__noreturn ***v19)(); // ebx
  void (__noreturn **v20)(); // edi
  void (__noreturn ***v21)(); // ebx
  void (__noreturn **v22)(); // edi
  int v23; // eax
  void (__noreturn *v24)(); // edx
  void (__noreturn ***v25)(); // eax
  void (__noreturn ***v26)(); // ebx
  void (__noreturn **v27)(); // edi
  int v28; // edi
  float *v29; // eax
  double v30; // st7
  double v31; // st5
  int (__thiscall *v32)(int); // edx
  double v33; // st6
  double v34; // rt0
  float *v35; // eax
  int v36; // ecx
  char v37; // bl
  int *v38; // ecx
  float v39; // [esp+84h] [ebp-3Ch]
  float v40; // [esp+84h] [ebp-3Ch]
  float v41; // [esp+84h] [ebp-3Ch]
  float v42; // [esp+84h] [ebp-3Ch]
  float v43; // [esp+84h] [ebp-3Ch]
  float v44; // [esp+84h] [ebp-3Ch]
  float v45; // [esp+84h] [ebp-3Ch]
  float v46; // [esp+84h] [ebp-3Ch]
  float v47; // [esp+84h] [ebp-3Ch]
  float v48; // [esp+84h] [ebp-3Ch]
  char v49[12]; // [esp+94h] [ebp-2Ch] BYREF
  int v50[3]; // [esp+A0h] [ebp-20h] BYREF
  float v51; // [esp+ACh] [ebp-14h]
  float v52; // [esp+B0h] [ebp-10h]
  float v53; // [esp+B4h] [ebp-Ch]
  int v54; // [esp+B8h] [ebp-8h]
  char v55[4]; // [esp+BCh] [ebp-4h]

  result = sub_10041D00((_DWORD *)this);
  if ( *(_DWORD *)(this + 2324) != 7 && !*(_BYTE *)(this + 3629) )
  {
    if ( sub_100697A0((_DWORD *)this, 104, 1)
      || sub_100697A0((_DWORD *)this, 98, 1)
      || sub_100697A0((_DWORD *)this, 102, 1)
      || sub_100697A0((_DWORD *)this, 100, 1) )
    {
      if ( sub_100697A0((_DWORD *)this, 104, 1) || (v55[0] = 0, sub_100697A0((_DWORD *)this, 100, 1)) )
        v55[0] = 1;
      sub_1030FAF0((_DWORD *)this, v55[0], 350.0);
    }
    else if ( !sub_100697A0((_DWORD *)this, 91, 1) )
    {
      sub_10023E00((char *)this, 73);
      *(_DWORD *)(this + 3716) = -1;
    }
    sub_1030AFB0((int *)this);
    if ( *(float *)(this + 800) > 0.0 )
    {
      if ( *(_BYTE *)(this + 3628) )
      {
        sub_10309160((_DWORD *)this);
        v19 = sub_1023DBA0();
        v20 = *v19;
        v45 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                2.0,
                4.0);
        ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))v20[12])(
          v19,
          *(_DWORD *)(this + 3796),
          0.60000002,
          LODWORD(v45));
        v21 = sub_1023DBA0();
        v22 = *v21;
        v46 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                2.0,
                4.0);
        v23 = (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)dword_106B31E4 + 8))(
                dword_106B31E4,
                140,
                160,
                LODWORD(v46));
        v24 = v22[11];
        v54 = v23;
        v47 = (float)v23;
        ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD))v24)(v21, *(_DWORD *)(this + 3796), LODWORD(v47));
        v25 = sub_1023DBA0();
        ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v25)[12])(
          v25,
          *(_DWORD *)(this + 3792),
          0.0,
          1.0);
        v26 = sub_1023DBA0();
        v27 = *v26;
        v54 = (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)dword_106B31E4 + 8))(
                dword_106B31E4,
                90,
                110,
                0.2);
        v48 = (float)v54;
        ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD))v27[11])(
          v26,
          *(_DWORD *)(this + 3792),
          LODWORD(v48));
      }
      *(_BYTE *)(this + 3628) = 0;
    }
    else
    {
      if ( !*(_BYTE *)(this + 3628) )
      {
        sub_10309160((_DWORD *)this);
        *(float *)v55 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                          dword_106B31E4,
                          2.0,
                          8.0);
        v3 = sub_1023DBA0();
        ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v3)[12])(
          v3,
          *(_DWORD *)(this + 3796),
          0.0,
          *(_DWORD *)v55);
        v4 = sub_1023DBA0();
        v5 = *v4;
        v6 = (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)dword_106B31E4 + 8))(
               dword_106B31E4,
               40,
               60,
               *(_DWORD *)v55);
        v7 = v5[11];
        v54 = v6;
        v39 = (float)v6;
        ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD))v7)(v4, *(_DWORD *)(this + 3796), LODWORD(v39));
        v8 = sub_1023DBA0();
        ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v8)[12])(
          v8,
          *(_DWORD *)(this + 3792),
          0.0,
          *(_DWORD *)v55);
        v9 = sub_1023DBA0();
        v10 = *v9;
        v11 = (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)dword_106B31E4 + 8))(
                dword_106B31E4,
                120,
                140,
                *(_DWORD *)v55);
        v12 = v10[11];
        v54 = v11;
        v40 = (float)v11;
        ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD))v12)(v9, *(_DWORD *)(this + 3792), LODWORD(v40));
        *(float *)(this + 3648) = *(float *)(dword_106B31C8 + 12) + *(float *)v55 - *(float *)v55 * 0.75;
      }
      *(_BYTE *)(this + 3628) = 1;
      if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 3648) )
      {
        sub_10309160((_DWORD *)this);
        v13 = sub_1023DBA0();
        v14 = *v13;
        v41 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                0.5,
                1.0);
        v42 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                0.2,
                0.30000001,
                LODWORD(v41));
        ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD))v14[12])(
          v13,
          *(_DWORD *)(this + 3792),
          LODWORD(v42));
        v15 = sub_1023DBA0();
        v16 = *v15;
        v43 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                0.5,
                1.0);
        v17 = (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)dword_106B31E4 + 8))(
                dword_106B31E4,
                80,
                120,
                LODWORD(v43));
        v18 = v16[11];
        v54 = v17;
        v44 = (float)v17;
        ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD))v18)(v15, *(_DWORD *)(this + 3792), LODWORD(v44));
        *(float *)(this + 3648) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                    dword_106B31E4,
                                    1.0,
                                    8.0)
                                + *(float *)(dword_106B31C8 + 12);
      }
    }
    v28 = 0;
    do
    {
      v29 = (float *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)this + 908))(this, v49);
      ++v28;
      v30 = *v29 * 128.0;
      v54 = v28;
      v31 = v29[1] * 128.0;
      v32 = *(int (__thiscall **)(int))(*(_DWORD *)this + 576);
      v33 = 128.0 * v29[2];
      v34 = (double)v28;
      v51 = v30 * v34;
      v52 = v31 * v34;
      v53 = v34 * v33;
      v35 = (float *)v32(this);
      *(float *)v50 = *v35 + v51;
      *(float *)&v50[1] = v35[1] + v52;
      *(float *)&v50[2] = v35[2] + v53;
      sub_1023D4B0(8, (float *)v50, 128, 0.1, this, 0, 0);
    }
    while ( v28 < 3 );
    result = *(_DWORD *)(this + 216);
    v36 = *(_DWORD *)(this + 220);
    if ( v36 <= result >> 1 )
    {
      result >>= 2;
      v37 = (v36 <= result) + 1;
    }
    else
    {
      v37 = 0;
    }
    if ( v37 != *(_BYTE *)(this + 3820) )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_BYTE *)(this + 3820) = v37;
      }
      else
      {
        v38 = *(int **)(this + 24);
        if ( v38 )
          result = sub_100194B0(v38, 3820);
        *(_BYTE *)(this + 3820) = v37;
      }
    }
  }
  return result;
}
