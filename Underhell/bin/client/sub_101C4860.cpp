int __cdecl sub_101C4860(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // edx
  int v8; // eax
  DWORD v9; // edi
  _DWORD *v10; // esi
  int v11; // ecx
  double v12; // st7
  double v13; // st7
  double v14; // st7
  int v15; // eax
  unsigned int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  HANDLE v23; // eax
  DWORD v24; // ecx
  DWORD i; // esi
  DWORD v26; // ebx
  DWORD j; // esi
  int v28; // esi
  float v30; // [esp+44h] [ebp-72Ch]
  float v31; // [esp+44h] [ebp-72Ch]
  float v32; // [esp+44h] [ebp-72Ch]
  int v33; // [esp+44h] [ebp-72Ch]
  DWORD ExitCode; // [esp+48h] [ebp-728h] BYREF
  unsigned int v35; // [esp+4Ch] [ebp-724h]
  unsigned int v36; // [esp+50h] [ebp-720h]
  int v37; // [esp+54h] [ebp-71Ch]
  int v38; // [esp+58h] [ebp-718h]
  int v39; // [esp+5Ch] [ebp-714h]
  DWORD ThreadId; // [esp+60h] [ebp-710h] BYREF
  HANDLE hThread[64]; // [esp+64h] [ebp-70Ch] BYREF
  _BYTE Parameter[1536]; // [esp+164h] [ebp-60Ch] BYREF
  int v43; // [esp+76Ch] [ebp-4h]

  v36 = dword_1044FA10;
  if ( (unsigned int)dword_1044FA10 >= 0x40 )
    v36 = 64;
  v7 = a1[6];
  v8 = a2[6];
  v35 = a2[2];
  v39 = v7;
  v37 = v8;
  `eh vector constructor iterator'(
    Parameter,
    0x18u,
    64,
    (void (__thiscall *)(void *))unknown_libname_9,
    (void (__thiscall *)(void *))sub_101C47B0);
  v9 = 0;
  v43 = 0;
  ExitCode = 0;
  v38 = 0;
  if ( v36 )
  {
    v10 = Parameter;
    while ( 1 )
    {
      v11 = sub_101C63E0(a7);
      *v10 = v11;
      if ( !v11 )
      {
        v43 = -1;
        `eh vector destructor iterator'(Parameter, 0x18u, 64, (void (__thiscall *)(void *))sub_101C47B0);
        return 7;
      }
      if ( a3 && *(_DWORD *)a3 == 48 )
      {
        if ( *(_DWORD *)(a3 + 4)
          && (*(double *)(a3 + 8) > 0.0 || *(double *)(a3 + 16) > 0.0 || *(double *)(a3 + 24) > 0.0) )
        {
          (*(void (__thiscall **)(int, const unsigned __int8 *, int))(*(_DWORD *)v11 + 8))(
            v11,
            "UseChannelWeighting",
            1);
          if ( *(double *)(a3 + 8) <= 0.009999999776482582 )
            v12 = 0.0099999998;
          else
            v12 = *(double *)(a3 + 8);
          v30 = v12;
          (*(void (__stdcall **)(const unsigned __int8 *, _DWORD))(*(_DWORD *)*v10 + 4))("WeightR", LODWORD(v30));
          if ( *(double *)(a3 + 16) <= 0.009999999776482582 )
            v13 = 0.0099999998;
          else
            v13 = *(double *)(a3 + 16);
          v31 = v13;
          (*(void (__stdcall **)(const unsigned __int8 *, _DWORD))(*(_DWORD *)*v10 + 4))("WeightG", LODWORD(v31));
          if ( *(double *)(a3 + 24) <= 0.009999999776482582 )
            v14 = 0.0099999998;
          else
            v14 = *(double *)(a3 + 24);
          v32 = v14;
          (*(void (__stdcall **)(const unsigned __int8 *, _DWORD))(*(_DWORD *)*v10 + 4))("WeightB", LODWORD(v32));
        }
        (*(void (__thiscall **)(_DWORD, const unsigned __int8 *, _DWORD))(*(_DWORD *)*v10 + 8))(
          *v10,
          "UseAdaptiveWeighting",
          *(_DWORD *)(a3 + 32));
        (*(void (__thiscall **)(_DWORD, const unsigned __int8 *, _DWORD))(*(_DWORD *)*v10 + 8))(
          *v10,
          "DXT1UseAlpha",
          *(_DWORD *)(a3 + 36));
        (*(void (__stdcall **)(const unsigned __int8 *, _DWORD))(*(_DWORD *)*v10 + 8))(
          "AlphaThreshold",
          *(unsigned __int8 *)(a3 + 40));
      }
      v15 = a1[4];
      v33 = 1;
      switch ( v15 )
      {
        case 4:
          v33 = 5;
          break;
        case 3:
          v33 = 4;
          break;
        case 2:
          v33 = 3;
          break;
        case 1:
          v33 = 2;
          break;
      }
      if ( v36 - v38 <= 1 )
      {
        v17 = v35;
      }
      else
      {
        v16 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v10 + 24))(*v10);
        v17 = v16 * ((v35 / (v36 - v38) + v16 - 1) / v16);
        v35 -= v17;
      }
      if ( v17 )
      {
        v18 = sub_101C69B0(v33, a1[1], v17, a1[3], v39);
        v19 = *v10;
        v10[1] = v18;
        v20 = (*(int (__thiscall **)(int, _DWORD, int, _DWORD, int))(*(_DWORD *)v19 + 28))(v19, a2[1], v17, a2[3], v37);
        v21 = a1[1];
        v22 = a1[4];
        v10[2] = v20;
        v39 += sub_101C4480(v22, v21, v17, a1[3]);
        v37 += sub_101C6710(a7, a2[1], v17);
        if ( !v10[1] || !v10[2] )
        {
          v43 = -1;
          `eh vector destructor iterator'(Parameter, 0x18u, 64, (void (__thiscall *)(void *))sub_101C47B0);
          return 8;
        }
        v10[3] = a4;
        v10[4] = a5;
        v10[5] = a6;
        v23 = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)StartAddress, v10, 4u, &ThreadId);
        v24 = ExitCode;
        hThread[ExitCode] = v23;
        ExitCode = v24 + 1;
      }
      v10 += 6;
      if ( ++v38 >= v36 )
      {
        v9 = ExitCode;
        break;
      }
    }
  }
  for ( i = 0; i < v9; ++i )
    ResumeThread(hThread[i]);
  WaitForMultipleObjects(v9, hThread, 1, 0xFFFFFFFF);
  v26 = 0;
  for ( j = 0; j < v9; ++j )
  {
    if ( !v26 && GetExitCodeThread(hThread[j], &ExitCode) )
      v26 = ExitCode;
    CloseHandle(hThread[j]);
  }
  if ( v26 )
  {
    if ( v26 == 2 )
      v28 = 1;
    else
      v28 = 8;
  }
  else
  {
    v28 = 0;
  }
  v43 = -1;
  `eh vector destructor iterator'(Parameter, 0x18u, 64, (void (__thiscall *)(void *))sub_101C47B0);
  return v28;
}
