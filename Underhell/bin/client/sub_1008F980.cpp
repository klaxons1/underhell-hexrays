void __cdecl sub_1008F980(float *a1, int *a2, float *a3)
{
  double v3; // st6
  double v4; // st7
  int v5; // eax
  int v6; // esi
  unsigned __int16 v7; // ax

  v3 = a1[2];
  if ( *a3 != a1[1] || a3[1] != v3 || a3[2] != a1[3] )
  {
    v4 = a1[3];
    *a3 = a1[1];
    v5 = a2[1];
    a3[1] = v3;
    a3[2] = v4;
    *(_DWORD *)(v5 + 312) |= 0x4000u;
    sub_1008F420(a2);
    v6 = *(_DWORD *)off_103DD080;
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)(a2[1] + 4) + 28))(a2[1] + 4);
    (*(void (__thiscall **)(void *, _DWORD))(v6 + 140))(off_103DD080, v7);
  }
}
