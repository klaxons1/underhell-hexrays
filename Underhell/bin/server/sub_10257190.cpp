void __thiscall sub_10257190(int this, int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  int *v4; // ecx
  char *v5; // eax
  unsigned int v6; // eax
  int v7; // eax
  int v8; // eax
  float *v9; // eax
  float *v10; // eax
  int v11; // ebx
  float *v12; // eax
  double v13; // st7
  bool v14; // c0
  bool v15; // c3
  double v16; // st7
  _BYTE v17[12]; // [esp+14h] [ebp-24h] BYREF
  float v18; // [esp+20h] [ebp-18h]
  float v19; // [esp+24h] [ebp-14h]
  float v20; // [esp+28h] [ebp-10h]
  float v21; // [esp+2Ch] [ebp-Ch] BYREF
  float v22; // [esp+30h] [ebp-8h]
  float v23; // [esp+34h] [ebp-4h]

  HIDWORD(v2) = this;
  if ( !*(_BYTE *)(this + 1140) )
  {
    if ( (v3 = *(_DWORD *)(this + 1116), v3 != -1)
      && (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 1116) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(HIDWORD(v2) + 1116) & 0xFFF) + 2] == v3 >> 12)
      && *v4
      || ((v5 = sub_100D8070((_DWORD *)HIDWORD(v2))) == 0
        ? (*(_DWORD *)(HIDWORD(v2) + 1116) = -1)
        : (*(_DWORD *)(HIDWORD(v2) + 1116) = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 8))(v5)),
          (v6 = *(_DWORD *)(HIDWORD(v2) + 1116), v6 != -1)
       && off_1061BE18[4 * (*(_DWORD *)(HIDWORD(v2) + 1116) & 0xFFF) + 2] == v6 >> 12
       && off_1061BE18[4 * (*(_DWORD *)(HIDWORD(v2) + 1116) & 0xFFF) + 1]) )
    {
      LODWORD(v2) = a2;
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
      {
        if ( (*(_DWORD *)(HIDWORD(v2) + 248) & 0x100) != 0 )
        {
          if ( (*(_DWORD *)(a2 + 252) & 0x1000) != 0 )
            sub_100DAFD0(a2);
          v21 = *(float *)(a2 + 476);
          v22 = *(float *)(a2 + 480);
          v23 = *(float *)(a2 + 484);
          if ( sub_10018CD0(&v21, &flt_106F1CA8) && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 1088))(a2) )
          {
            v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1092))(a2);
            v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 32))(v7);
            v9 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v8 + 536))(v8, v17);
            v21 = *v9;
            v22 = v9[1];
            v23 = v9[2];
          }
          off_10689714();
        }
        else
        {
          v10 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 924))(a2, v17);
          v21 = *v10;
          v22 = v10[1];
          v23 = v10[2];
        }
        if ( *(_DWORD *)(HIDWORD(v2) + 1116) == -1
          || off_1061BE18[4 * (*(_DWORD *)(HIDWORD(v2) + 1116) & 0xFFF) + 2] != *(_DWORD *)(HIDWORD(v2) + 1116) >> 12 )
        {
          v11 = 0;
        }
        else
        {
          v11 = off_1061BE18[4 * (*(_DWORD *)(HIDWORD(v2) + 1116) & 0xFFF) + 1];
        }
        if ( (*(_DWORD *)(v11 + 252) & 0x800) != 0 )
          sub_100DAE60(v11);
        v12 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a2 + 504))(a2, v17);
        v18 = *(float *)(v11 + 580) - *v12;
        v19 = *(float *)(v11 + 584) - v12[1];
        v20 = *(float *)(v11 + 588) - v12[2];
        off_10689714();
        v13 = v18 * v21 + v19 * v22 + v20 * v23;
        v14 = v13 < *(float *)(HIDWORD(v2) + 1120);
        v15 = v13 == *(float *)(HIDWORD(v2) + 1120);
        v16 = *(float *)(HIDWORD(v2) + 1128);
        if ( v14 || v15 )
        {
          *(float *)(HIDWORD(v2) + 1128) = -1.0;
          if ( -1.0 != v16 )
            sub_1010DD80((_DWORD *)(HIDWORD(v2) + 1172), v2, 0.0);
        }
        else
        {
          if ( -1.0 == v16 )
          {
            *(float *)(HIDWORD(v2) + 1132) = *(float *)(dword_106B31C8 + 12);
            *(float *)(HIDWORD(v2) + 1128) = 0.0;
          }
          else
          {
            *(float *)(HIDWORD(v2) + 1128) = *(float *)(dword_106B31C8 + 12)
                                           - *(float *)(HIDWORD(v2) + 1132)
                                           + *(float *)(HIDWORD(v2) + 1128);
            *(float *)(HIDWORD(v2) + 1132) = *(float *)(dword_106B31C8 + 12);
          }
          if ( *(float *)(HIDWORD(v2) + 1124) <= (double)*(float *)(HIDWORD(v2) + 1128) )
            sub_102560F0(HIDWORD(v2), a2, 0);
        }
      }
    }
  }
}
