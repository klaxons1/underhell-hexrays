void __thiscall sub_102B8980(int this, int a2)
{
  void (__noreturn ***v3)(); // eax
  void (__noreturn ***v4)(); // eax
  unsigned __int16 v5; // ax
  double v6; // st7
  void (__noreturn ***v7)(); // eax
  int v8; // ecx
  unsigned __int16 v9; // ax
  double v10; // st7
  int v11; // ecx
  double v12; // st7
  int v13; // ecx
  int v14; // ecx
  unsigned __int16 v15; // ax
  float v16; // [esp+3Ch] [ebp-24h]
  float v17; // [esp+3Ch] [ebp-24h]
  float v18; // [esp+3Ch] [ebp-24h]
  float v19; // [esp+3Ch] [ebp-24h]
  float v20; // [esp+3Ch] [ebp-24h]
  float v21[3]; // [esp+48h] [ebp-18h] BYREF
  float v22[3]; // [esp+54h] [ebp-Ch] BYREF
  float v23; // [esp+68h] [ebp+8h]

  *(_DWORD *)(this + 1204) = a2;
  switch ( a2 )
  {
    case 0:
      v3 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v3)[12])(
        v3,
        *(_DWORD *)(this + 1164),
        0.0,
        0.1);
      sub_102B7B10((float *)this, 0, 0, 0, 0, 0);
      sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
      break;
    case 1:
      sub_102B7300((volatile signed __int32 *)this, 1);
      sub_102B7B10((float *)this, 1, 0, 0, 255, 190);
      sub_100EC3F0((_DWORD *)this, (int)sub_102B7820, 0.0, 0);
      *(_DWORD *)(this + 196) = 0;
      v6 = *(float *)(dword_106B31C8 + 12);
      goto LABEL_5;
    case 2:
      v4 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v4)[12])(
        v4,
        *(_DWORD *)(this + 1164),
        0.0,
        0.2);
      v5 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 424) + 92))(*(_DWORD *)(this + 424));
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 424) + 88))(*(_DWORD *)(this + 424), v5 | 8);
      sub_102B7300((volatile signed __int32 *)this, 0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, *(_DWORD *)(this + 1200));
      *(_DWORD *)(this + 1200) = 0;
      sub_102B7B10((float *)this, 1, 0, 0, 255, 190);
      sub_100EC3F0((_DWORD *)this, (int)sub_102B7240, 0.0, 0);
      v16 = *(float *)(dword_106B31C8 + 12) + 0.1;
      sub_100EC4A0((int *)this, v16, 0);
      *(_DWORD *)(this + 196) = 0;
      break;
    case 3:
      sub_102B7B10((float *)this, 0, 0, 0, 0, 0);
      sub_100EC3F0((_DWORD *)this, (int)sub_102B8760, 0.0, 0);
      v6 = *(float *)(dword_106B31C8 + 12);
LABEL_5:
      v17 = v6 + 0.1;
      sub_100EC4A0((int *)this, v17, 0);
      break;
    case 4:
      sub_102B7300((volatile signed __int32 *)this, 0);
      if ( *(_DWORD *)(this + 1200) )
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, *(_DWORD *)(this + 1200));
        *(_DWORD *)(this + 1200) = 0;
      }
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_1023D4B0(8, (float *)(this + 580), 300, 1.0, this, 0, 0);
      v7 = sub_1023DBA0();
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v7)[12])(
        v7,
        *(_DWORD *)(this + 1164),
        0.0,
        0.2);
      v8 = *(_DWORD *)(this + 424);
      *(_DWORD *)(this + 196) = sub_102B88F0;
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 92))(v8);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 424) + 88))(*(_DWORD *)(this + 424), v9 | 8);
      v22[0] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                 dword_106B31E4,
                 -1.0,
                 1.0);
      v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -1.0,
              1.0);
      v11 = *(_DWORD *)(this + 424);
      v22[0] = v22[0] * 350.0;
      v22[1] = v10 * 350.0;
      v22[2] = 525.0;
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 96))(v11);
      (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(this + 424) + 236))(*(_DWORD *)(this + 424), v22);
      v23 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              0.0,
              20.0)
          + 10.0;
      v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              0.0,
              20.0);
      v13 = *(_DWORD *)(this + 424);
      v21[0] = v23;
      v21[1] = v12 + 10.0;
      v21[2] = 0.0;
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)v13 + 244))(v13, v21);
      *(float *)(this + 1172) = *(float *)(dword_106B31C8 + 12) + 1.0;
      sub_102B7B10((float *)this, 1, 255, 0, 0, 190);
      v18 = 0.0;
      if ( *(_DWORD *)(this + 1184) == 1 )
      {
        sub_100EC3F0((_DWORD *)this, (int)sub_102B8490, v18, 0);
        v19 = *(float *)(dword_106B31C8 + 12) + 0.15;
      }
      else
      {
        sub_100EC3F0((_DWORD *)this, (int)sub_102B75A0, v18, 0);
        v19 = *(float *)(dword_106B31C8 + 12) + 0.5;
      }
      sub_100EC4A0((int *)this, v19, 0);
      break;
    case 5:
      sub_102B7B10((float *)this, 1, 255, 0, 0, 190);
      sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
      v20 = *(float *)(dword_106B31C8 + 12) + 0.5;
      sub_100EC4A0((int *)this, v20, 0);
      v14 = *(_DWORD *)(this + 424);
      *(_DWORD *)(this + 196) = sub_102B88F0;
      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 92))(v14);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 424) + 88))(*(_DWORD *)(this + 424), v15 | 8);
      break;
    default:
      DevMsg("**Unknown Mine State: %d\n", a2);
      break;
  }
}
