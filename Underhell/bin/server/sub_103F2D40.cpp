void __userpurge sub_103F2D40(_BYTE *a1@<ecx>, int a2@<edi>, int a3@<esi>, _DWORD *a4)
{
  int v5; // esi
  int v6; // edi
  int v7; // eax

  if ( !a1[2113]
    && (*a4 && (v5 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a4 + 288))(*a4)) != 0 || (v5 = sub_1025FB50(1)) != 0) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v5 + 1088))(v5, a3) )
        (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v5 + 1412))(v5, &flt_106F1CA8, &flt_106F1CB4);
      v6 = *(_DWORD *)v5;
      v7 = (*(int (__thiscall **)(_BYTE *, _DWORD, int))(*(_DWORD *)a1 + 340))(a1, 0, a2);
      (*(void (__thiscall **)(int, int))(v6 + 1408))(v5, v7);
    }
  }
}
