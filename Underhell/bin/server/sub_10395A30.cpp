char __thiscall sub_10395A30(int this, int a2)
{
  int v4; // eax
  int v5; // eax
  double v6; // st7
  int v7; // eax
  int v8; // eax
  int v9; // edi
  char v10; // bl
  float v11; // [esp+1Ch] [ebp-5Ch]
  int v12[19]; // [esp+28h] [ebp-50h] BYREF
  float v13; // [esp+74h] [ebp-4h]

  if ( sub_10023D10((_DWORD *)this, 10) )
    return 0;
  v13 = 1.0 - *(float *)(this + 5592) + 1.0 - *(float *)(this + 5592) + 1.0;
  v4 = sub_103942C0(this);
  if ( !v4 )
  {
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           2.0)
       + 3.0;
    goto LABEL_9;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           2.0)
       + 1.0;
    goto LABEL_9;
  }
  if ( v5 == 1 )
  {
    v6 = 1.0;
LABEL_9:
    v13 = v6;
  }
  v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          0.0,
          0.5)
      + v13;
  *(float *)(a2 + 16) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                          dword_106B31E4,
                          LODWORD(v13),
                          LODWORD(v11));
  if ( sub_10023D10((_DWORD *)this, 32)
    && *(_DWORD *)(dword_10698344 + 48)
    && (v7 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 2)) == 0 )
  {
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
      v7 = sub_10261B20();
    sub_10019680((_DWORD *)a2, v7);
    return 1;
  }
  else
  {
    sub_10072560(v12);
    sub_10072690(v12, 13);
    sub_10072690(v12, 14);
    sub_10072690(v12, 16);
    sub_1042C170(1281);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_10072770(v12, (float *)(this + 580), 1800.0);
    v8 = sub_10072EE0(this, v12);
    v9 = v8;
    if ( v8 )
    {
      *(_DWORD *)a2 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( *(_WORD *)(v9 + 816) != 16 )
        sub_10070510(v9, 5.0);
      sub_100725D0(v12);
      return 1;
    }
    else
    {
      v10 = sub_10019990((int *)this, a2);
      sub_100725D0(v12);
      return v10;
    }
  }
}
