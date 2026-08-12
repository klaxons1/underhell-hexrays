int sub_100F53E0()
{
  double v0; // st7
  int v1; // eax
  int v3; // [esp-4h] [ebp-18h]
  float v4[3]; // [esp+8h] [ebp-Ch] BYREF

  dword_10436254 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10436248 + 20))(dword_10436248);
  dword_1043625C = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10436248 + 32))(dword_10436248);
  v0 = *(float *)(dword_10434644 + 44);
  v4[0] = 0.0;
  v4[1] = 0.0;
  v4[2] = -v0;
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_10436254 + 12))(dword_10436254, v4);
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10436254 + 148))(0.015);
  (*(void (__thiscall **)(int, int (__stdcall ***)(int)))(*(_DWORD *)dword_10436254 + 164))(
    dword_10436254,
    &off_103E1A70);
  (*(void (__thiscall **)(int, int (__stdcall ***)(int, int, int, int)))(*(_DWORD *)dword_10436254 + 132))(
    dword_10436254,
    &off_103E1A74);
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413178 + 16))(dword_10413178);
  v1 = sub_10073890();
  dword_1043624C = sub_10102150(v1, v3, 1);
  return (**(int (__thiscall ***)(int, int, int (__stdcall ***)(int, char *, char *), _DWORD, void *))dword_10413190)(
           dword_10413190,
           dword_10436254,
           &off_103E2154,
           0,
           &unk_1030E968);
}
