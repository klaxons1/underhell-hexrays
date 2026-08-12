void __userpurge sub_1026F430(_BYTE *a1@<ecx>, int a2@<edi>, int a3@<esi>, int *a4)
{
  int v5; // esi
  int v6; // edi
  int v7; // eax

  if ( !a1[2093]
    && ((v5 = *a4) != 0 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(*a4)
     || *(int *)(dword_106B31C8 + 20) <= 1 && (v5 = sub_10261B20()) != 0) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v5 + 1088))(v5, a3) )
      (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v5 + 1412))(v5, &flt_106F1CA8, &flt_106F1CB4);
    (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v5 + 1476))(v5, 0, a2);
    v6 = *(_DWORD *)v5;
    v7 = (*(int (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 340))(a1, 0);
    (*(void (__thiscall **)(int, int))(v6 + 1408))(v5, v7);
  }
}
