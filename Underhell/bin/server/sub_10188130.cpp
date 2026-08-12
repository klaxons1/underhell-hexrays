char __usercall sub_10188130@<al>(int **a1@<ecx>, int a2@<edi>)
{
  double v3; // st7
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // eax
  int *v11; // edi
  int v12; // edx
  int v14; // [esp+78h] [ebp-4h] BYREF

  v3 = ((double (__thiscall *)(int, int *))*(_DWORD *)(*(_DWORD *)dword_106B3CDC + 224))(dword_106B3CDC, a1[1]);
  *(float *)&v14 = v3;
  if ( v3 > 0.0 )
  {
    v4 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0, a2);
    if ( v4 && (v5 = *(_DWORD *)(v4 + 12)) != 0 )
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
    else
      v6 = 0;
    v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
    if ( v7 && (v8 = *(_DWORD *)(v7 + 12)) != 0 )
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 20))(v8);
    else
      v9 = 0;
    v10 = (_DWORD *)sub_10248110(v9, v6, *(float *)&v14, 32, 0);
    sub_100D9E70(a1[1], (int)a1, v10);
    v11 = a1[1];
    if ( (v11[63] & 0x800) != 0 )
      sub_100DAE60((int)a1[1]);
    ((void (__thiscall *)(int **, int *))(*a1)[5])(a1, v11 + 145);
  }
  if ( a1[1][55] > 0 )
    return 1;
  if ( (*(unsigned __int8 (__thiscall **)(int, int *))(*(_DWORD *)dword_106B3CDC + 252))(dword_106B3CDC, a1[1]) )
  {
    v12 = (int)a1[1];
    *(float *)&v14 = -1.7014118e38;
    sub_102600B0(v12, (int)&v14, 0.0, 9999.0, 10);
  }
  return 0;
}
