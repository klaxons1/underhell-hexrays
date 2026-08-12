int __cdecl sub_10273D90(int a1)
{
  int result; // eax
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  int v4; // ebx
  int v5; // edx
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 144))(a1);
  if ( (result & 0x40000000) != 0 )
  {
    if ( !dword_106CFCC8 )
    {
      v2 = (_DWORD *)sub_10184390(12);
      v3 = v2;
      if ( v2 )
      {
        sub_10170440(v2, 0);
        *v3 = &GlobalCleanUp::`vftable';
      }
      dword_106CFCC8 = sub_10184390(49152);
      dword_106CFCCC = sub_10184390(49152);
      dword_106CFCD0 = sub_10184390(0x4000);
    }
    v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a1 + 24));
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v5 = dword_106CFCC8;
    v6 = 12 * v4;
    *(float *)(12 * v4 + dword_106CFCC8) = *(float *)(a1 + 580);
    v7 = 12 * v4 + v5;
    *(float *)(v7 + 4) = *(float *)(a1 + 584);
    *(float *)(v7 + 8) = *(float *)(a1 + 588);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v8 = dword_106CFCCC;
    *(float *)(v6 + dword_106CFCCC) = *(float *)(a1 + 704);
    v9 = v6 + v8;
    *(float *)(v9 + 4) = *(float *)(a1 + 708);
    *(float *)(v9 + 8) = *(float *)(a1 + 712);
    result = dword_106CFCD0;
    *(_DWORD *)(dword_106CFCD0 + 4 * v4) = *(_DWORD *)(a1 + 92);
  }
  return result;
}
