int __usercall sub_101C4510@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        _DWORD *a3,
        _DWORD *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v9; // esi
  double v11; // st7
  double v12; // st7
  double v13; // st7
  int v14; // edx
  int v15; // ecx
  void (__thiscall ***v16)(_DWORD, int); // edi
  int v17; // eax
  void (__thiscall ***v18)(_DWORD, int); // ebx
  unsigned int v19; // ebp
  int v20; // [esp+68h] [ebp-4h]
  float retaddr; // [esp+6Ch] [ebp+0h]

  v9 = sub_101C63E0(a9);
  if ( !v9 )
    return 7;
  if ( a5 && *(_DWORD *)a5 == 48 )
  {
    if ( *(_DWORD *)(a5 + 4) && (*(double *)(a5 + 8) > 0.0 || *(double *)(a5 + 16) > 0.0 || *(double *)(a5 + 24) > 0.0) )
    {
      (*(void (__thiscall **)(int, const unsigned __int8 *, int, int))(*(_DWORD *)v9 + 8))(
        v9,
        "UseChannelWeighting",
        1,
        a2);
      if ( *(double *)(a5 + 8) <= 0.009999999776482582 )
        v11 = 0.0099999998;
      else
        v11 = *(double *)(a5 + 8);
      retaddr = v11;
      (*(void (__thiscall **)(int, const unsigned __int8 *, float))(*(_DWORD *)v9 + 4))(
        v9,
        "WeightR",
        COERCE_FLOAT(LODWORD(retaddr)));
      if ( *(double *)(a5 + 16) <= 0.009999999776482582 )
        v12 = 0.0099999998;
      else
        v12 = *(double *)(a5 + 16);
      retaddr = v12;
      (*(void (__thiscall **)(int, const unsigned __int8 *, float))(*(_DWORD *)v9 + 4))(
        v9,
        "WeightG",
        COERCE_FLOAT(LODWORD(retaddr)));
      if ( *(double *)(a5 + 24) <= 0.009999999776482582 )
        v13 = 0.0099999998;
      else
        v13 = *(double *)(a5 + 24);
      retaddr = v13;
      (*(void (__thiscall **)(int, const unsigned __int8 *))(*(_DWORD *)v9 + 4))(v9, "WeightB");
    }
    (*(void (__thiscall **)(int, const unsigned __int8 *, _DWORD))(*(_DWORD *)v9 + 8))(
      v9,
      "UseAdaptiveWeighting",
      *(_DWORD *)(a5 + 32));
    (*(void (__thiscall **)(int, const unsigned __int8 *, _DWORD))(*(_DWORD *)v9 + 8))(
      v9,
      "DXT1UseAlpha",
      *(_DWORD *)(a5 + 36));
    (*(void (__thiscall **)(int, const unsigned __int8 *, _DWORD))(*(_DWORD *)v9 + 8))(
      v9,
      "AlphaThreshold",
      *(unsigned __int8 *)(a5 + 40));
  }
  v14 = a3[4];
  v15 = 1;
  if ( v14 == 4 )
    v15 = 5;
  switch ( v14 )
  {
    case 3:
      v15 = 4;
      break;
    case 2:
      v15 = 3;
      break;
    case 1:
      v15 = 2;
      break;
  }
  v16 = (void (__thiscall ***)(_DWORD, int))sub_101C69B0(v15, a3[1], a3[2], a3[3], a3[6]);
  v17 = (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v9 + 28))(
          v9,
          a4[1],
          a4[2],
          a4[3],
          a4[6],
          a1);
  v18 = (void (__thiscall ***)(_DWORD, int))v17;
  if ( v16 && v17 )
  {
    v19 = _controlfp(0, 0);
    _controlfp(0x8001Fu, 0x8001Fu);
    v20 = (*(int (__thiscall **)(int, void (__thiscall ***)(_DWORD, int), void (__thiscall ***)(_DWORD, int), int, int))(*(_DWORD *)v9 + 32))(
            v9,
            v16,
            v18,
            a7,
            a8);
    _controlfp(v19, 0x8001Fu);
    (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    (**v16)(v16, 1);
    (**v18)(v18, 1);
    if ( !v20 )
      return 0;
    if ( v20 == 2 )
      return 1;
  }
  else
  {
    (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    if ( v16 )
      (**v16)(v16, 1);
    if ( v18 )
      (**v18)(v18, 1);
  }
  return 8;
}
