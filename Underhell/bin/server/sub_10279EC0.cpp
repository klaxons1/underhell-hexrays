char __usercall sub_10279EC0@<al>(float *a1@<ecx>, double a2@<st0>)
{
  float v3; // eax
  char v4; // bl
  int v5; // eax
  int v6; // eax
  int *v7; // edi
  int v8; // eax
  int v9; // eax
  float v11; // [esp+4h] [ebp-14h]
  int v12; // [esp+8h] [ebp-10h]

  v12 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1220))(a1);
  v3 = COERCE_FLOAT((*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1216))(a1));
  v4 = sub_100D4170(a1, a2, v3, v12, 183);
  if ( v4 )
  {
    v5 = sub_100D1940(a1);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) )
    {
      v6 = sub_100D1940(a1);
      v7 = (int *)v6;
      if ( *(_BYTE *)(v6 + 2121) )
      {
        if ( *(_DWORD *)(sub_101E7EA0((_DWORD *)v6, 1) + 908) != 2 )
        {
          v8 = sub_101E7EA0(v7, 1);
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 836))(v8, 3);
          v9 = sub_101E7EA0(v7, 1);
          sub_100D18C0(v9);
          v11 = a2 + *(float *)(dword_106B31C8 + 12);
          sub_100EC4A0(v7, v11, (int)"FlashLightContext");
        }
      }
    }
    (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)a1 + 1132))(a1, 7, 0.0);
    a1[350] = 0.0;
  }
  return v4;
}
