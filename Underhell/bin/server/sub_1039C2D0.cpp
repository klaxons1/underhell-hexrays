void __thiscall sub_1039C2D0(int this)
{
  int v2; // eax
  float *v3; // edi
  double v4; // st4
  double v5; // st7
  double v6; // st4
  double v7; // st5
  void (__noreturn ***v8)(); // eax
  void (__noreturn ***v9)(); // ebx
  void (__noreturn **v10)(); // edi
  void (__noreturn ***v11)(); // eax
  void (__noreturn ***v12)(); // eax
  void (__noreturn ***v13)(); // eax
  float v14; // [esp+3Ch] [ebp-18h]
  float v15; // [esp+3Ch] [ebp-18h]
  float v16; // [esp+40h] [ebp-14h]
  float v17; // [esp+50h] [ebp-4h]
  float v18; // [esp+50h] [ebp-4h]

  if ( sub_10023D10((_DWORD *)this, 26) )
    *(float *)(this + 3852) = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
                                        dword_106B31E4,
                                        1,
                                        2)
                            + *(float *)(dword_106B31C8 + 12);
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    goto LABEL_16;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  v3 = (float *)v2;
  if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
    sub_100DAE60(v2);
  v4 = v3[145] - *(float *)(this + 580);
  v5 = v4 * v4;
  v6 = v3[146] - *(float *)(this + 584);
  v7 = v3[147] - *(float *)(this + 588);
  v16 = v7 * v7 + v6 * v6 + v5;
  if ( off_10689708(v16) < 300.0 )
  {
    if ( !*(_BYTE *)(this + 3860) )
    {
      v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              1.0,
              2.0);
      v8 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v8)[12])(
        v8,
        *(_DWORD *)(this + 3836),
        0.60000002,
        LODWORD(v17));
      v9 = sub_1023DBA0();
      v10 = *v9;
      v14 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              1.0,
              2.0);
      v15 = (float)(*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)dword_106B31E4 + 8))(
                     dword_106B31E4,
                     100,
                     120,
                     LODWORD(v14));
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD))v10[11])(
        v9,
        *(_DWORD *)(this + 3836),
        LODWORD(v15));
      v11 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v11)[12])(
        v11,
        *(_DWORD *)(this + 3840),
        0.0,
        LODWORD(v17));
      *(_BYTE *)(this + 3860) = 1;
      sub_1032CF60(this);
      return;
    }
  }
  else
  {
LABEL_16:
    if ( *(_BYTE *)(this + 3860) )
    {
      v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              2.0,
              4.0);
      v12 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v12)[12])(
        v12,
        *(_DWORD *)(this + 3836),
        0.60000002,
        LODWORD(v18));
      v13 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v13)[12])(
        v13,
        *(_DWORD *)(this + 3840),
        0.0,
        LODWORD(v18));
      *(_BYTE *)(this + 3860) = 0;
    }
  }
  sub_1032CF60(this);
}
