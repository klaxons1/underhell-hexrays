char __userpurge sub_100D2850@<al>(_DWORD *a1@<ecx>, double a2@<st0>, int a3)
{
  int v3; // edi
  int v6; // eax
  int v8; // ebx
  int v9; // [esp-4h] [ebp-18h]
  int v10; // [esp+4h] [ebp-10h]
  float v11; // [esp+4h] [ebp-10h]
  int v12; // [esp+1Ch] [ebp+8h]

  v3 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  v6 = sub_100BDCE0((int)a1, a3);
  if ( v6 == -1 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
    return 0;
  }
  else
  {
    v9 = a1[227];
    a1[292] = a3;
    a1[291] = v6;
    v12 = sub_100BF270((int)a1, v9, v6, 0);
    if ( a3 == 172 || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 1008))(a1) || v12 == a1[291] )
    {
      v10 = a1[291];
      a1[290] = a1[292];
      sub_100C1170((int)a1, v10);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 948))(a1, a1[291]);
    }
    else
    {
      a1[290] = 2;
      sub_100C1170((int)a1, v12);
      (*(void (__thiscall **)(_DWORD *, int))(*a1 + 948))(a1, v12);
    }
    v8 = *a1;
    sub_100D18C0((int)a1);
    v11 = a2 + *(float *)(dword_106B31C8 + 12);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(v8 + 960))(a1, LODWORD(v11));
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
    return 1;
  }
}
