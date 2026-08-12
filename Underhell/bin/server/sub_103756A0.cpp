void __userpurge sub_103756A0(int a1@<ecx>, double a2@<st0>, _DWORD *a3)
{
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  double v7; // st7
  float v8; // [esp+1Ch] [ebp-4h]

  if ( *a3 != 100002 )
  {
    sub_10057D10(a1, a2, (int)a3);
    return;
  }
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 368))(*(_DWORD *)(a1 + 4))
    && sub_1004AFF0(*(_DWORD **)(a1 + 4), 10) )
  {
    v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 368))(*(_DWORD *)(a1 + 4));
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
      sub_100DAE60(v4);
    v5 = *(_DWORD *)(a1 + 4);
    if ( sub_100B1370(*(_DWORD **)(v5 + 2796), (float *)(v4 + 580)) == v5 )
    {
      v6 = *(_DWORD *)(a1 + 4);
      v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             0.0,
             0.25)
         + *(float *)(dword_106B31C8 + 12)
         + 1.0;
      v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
             dword_106B31E4,
             0.0,
             0.25)
         + v8;
      *(_DWORD *)(v6 + 4540) = 4;
      *(_DWORD *)(v6 + 4544) = 0;
      *(float *)(v6 + 4552) = v7;
      sub_10057D10(a1, v7, (int)a3);
      return;
    }
    sub_1004AF00(*(_DWORD **)(a1 + 4));
  }
  sub_10057D10(a1, a2, (int)a3);
}
