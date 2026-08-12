bool __stdcall sub_101863C0(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  int v4; // eax
  float v5[3]; // [esp+8h] [ebp-Ch] BYREF

  v1 = (_DWORD *)sub_100422D0();
  v2 = v1;
  if ( !v1 )
    return 0;
  if ( !a1 )
    return 0;
  if ( sub_10042360(v1) == *(_DWORD *)(a1 + 4) )
    return 0;
  v5[0] = 0.0;
  v5[1] = 0.0;
  v5[2] = 0.0;
  if ( sub_1000E3F0((float *)(a1 + 56), v5) )
    return 0;
  if ( (*(int (__thiscall **)(_DWORD *))(*v2 + 296))(v2) <= 1 )
    return 1;
  if ( *(int *)(a1 + 48) <= 1 )
    return 0;
  v4 = *(_DWORD *)(dword_1042F6CC + 48);
  if ( v4 == 2 )
    return 0;
  if ( v4 != 1 )
    return 1;
  return (*(int (__thiscall **)(_DWORD *))(*v2 + 296))(v2) == *(_DWORD *)(a1 + 48);
}
