int __thiscall sub_101B55D0(_BYTE *this)
{
  int v2; // eax
  double v3; // st7
  int v4; // esi
  int v5; // eax
  _DWORD *v6; // eax
  int result; // eax
  _DWORD v8[8]; // [esp+2Ch] [ebp-38h] BYREF
  _DWORD v9[3]; // [esp+4Ch] [ebp-18h] BYREF
  float v10[3]; // [esp+58h] [ebp-Ch] BYREF

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106BAFE8 + 20))(dword_106BAFE8);
  *(float *)&v8[2] = 2000.0;
  dword_106BAFF4 = v2;
  v8[1] = 250;
  *(float *)&v8[3] = 3600.0;
  v8[0] = 10;
  *(float *)&v8[4] = 1.0;
  *(float *)&v8[5] = 0.5;
  *(float *)&v8[6] = 10.0;
  *(float *)&v8[7] = 2500.0;
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v2 + 236))(v2, v8);
  dword_106BAFFC = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106BAFE8 + 32))(dword_106BAFE8);
  sub_10171060(v9);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 4))(dword_106BAFF4, v9[0]);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 200))(dword_106BAFF4, 1);
  (*(void (__thiscall **)(int, void *))(*(_DWORD *)dword_106BAFF4 + 132))(dword_106BAFF4, &unk_106B9F3C);
  (*(void (__thiscall **)(int, void *))(*(_DWORD *)dword_106BAFF4 + 164))(dword_106BAFF4, &unk_106B9F38);
  (*(void (__thiscall **)(int, int (__stdcall ***)(int)))(*(_DWORD *)dword_106BAFF4 + 172))(
    dword_106BAFF4,
    off_10636438);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 260))(dword_106BAFF4, 1);
  (*(void (__thiscall **)(int, void *))(*(_DWORD *)dword_106BAFF4 + 168))(dword_106BAFF4, &unk_106B9F40);
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_106BAFF4 + 148))(0.015);
  v3 = *(float *)(dword_106B6F0C + 44);
  v10[0] = 0.0;
  v10[1] = 0.0;
  v10[2] = -v3;
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_106BAFF4 + 12))(dword_106BAFF4, v10);
  flt_106B9E70 = 0.0;
  v4 = sub_10280AC0();
  (**(void (__thiscall ***)(int, int, int (__stdcall ***)(int, char *, char *), int))dword_106B31E0)(
    dword_106B31E0,
    dword_106BAFF4,
    &off_1063AFBC,
    v4);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31F0 + 16))(dword_106B31F0);
  dword_106BAFEC = sub_101DB6C0(v4, v5, 1);
  v6 = (_DWORD *)sub_10184390(8);
  if ( v6 )
    dword_106B9E74 = (int)sub_1010BCC0(v6);
  else
    dword_106B9E74 = 0;
  result = sub_101DAC80();
  this[88] = 1;
  return result;
}
