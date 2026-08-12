char __stdcall sub_101BA220(float *a1, float *a2, float *a3)
{
  int v3; // esi
  float *v5; // eax
  int (__thiscall *v6)(int); // edx
  float *v7; // eax
  double (__thiscall *v8)(int); // edx
  _BYTE v9[12]; // [esp+4h] [ebp-Ch] BYREF

  v3 = sub_100422D0();
  if ( !v3 )
    return 0;
  v5 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 532))(v3, v9);
  *a1 = *v5;
  a1[1] = v5[1];
  v6 = *(int (__thiscall **)(int))(*(_DWORD *)v3 + 536);
  a1[2] = v5[2];
  v7 = (float *)v6(v3);
  *a2 = *v7;
  a2[1] = v7[1];
  v8 = *(double (__thiscall **)(int))(*(_DWORD *)v3 + 952);
  a2[2] = v7[2];
  *a3 = v8(v3);
  return 1;
}
