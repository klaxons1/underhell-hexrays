int __userpurge sub_100F2450@<eax>(float *a1@<ecx>, int a2@<ebx>, int a3@<esi>, int a4)
{
  _BYTE *v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // ebx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  char v13; // al
  _DWORD *v14; // eax
  float *v15; // eax
  double v16; // st7
  bool v17; // zf
  float v18; // eax
  int v19; // esi
  int v20; // ebx
  int v21; // eax
  _BYTE *v22; // [esp+5Ch] [ebp-4Ch]
  _BYTE v24[12]; // [esp+68h] [ebp-40h] BYREF
  float v25[3]; // [esp+74h] [ebp-34h] BYREF
  float v26[3]; // [esp+80h] [ebp-28h] BYREF
  float v27[3]; // [esp+8Ch] [ebp-1Ch] BYREF
  float v28; // [esp+98h] [ebp-10h] BYREF
  float v29; // [esp+9Ch] [ebp-Ch]
  float v30; // [esp+A0h] [ebp-8h]
  int v31; // [esp+A4h] [ebp-4h] BYREF
  int v32; // [esp+B0h] [ebp+8h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "CNewParticleEffect::DrawModel", 0, "Particle/Effect_Rendering", 0, 4);
  if ( !*(_DWORD *)(dword_104358BC + 48)
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 56))(dword_1044CC48)
    || (v6 = sub_100F0920(), !sub_100EB210(v6))
    || (a4 & 0x40000000) != 0 )
  {
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return 0;
  }
  v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a3);
  v8 = v7;
  v31 = v7;
  if ( v7 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
  v22 = v24;
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 588))(v8);
  v9 = *((_DWORD *)a1 + 18);
  if ( *(float *)(v9 + 536) * *(float *)(v9 + 536) < sub_101F0070(a1 + 1506, a1 + 1509, v24) )
    goto LABEL_14;
  if ( a4 >= 0 )
  {
    if ( a1 == (float *)8 )
      v14 = 0;
    else
      v14 = a1 + 2;
    sub_101FCDC0(v14);
  }
  else
  {
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 108))(dword_10413168);
    v11 = sub_1007A6A0(off_103DCD78, v10);
    if ( v11 )
    {
      v12 = *(_DWORD *)(*((_DWORD *)a1 + 18) + 548);
      if ( v12 != -1 && v12 <= *((_DWORD *)a1 + 1512) && sub_10012BE0((unsigned int *)&a1[v12 + 1684], v11) )
      {
LABEL_14:
        sub_100170F0(&v31);
        CVProfile::ExitScope(g_VProfCurrentProfile);
        return 0;
      }
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 80))(v8, 10);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 84))(v8);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 124))(v8);
    v13 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)a1 + 160))(a1, v11);
    sub_101F9D00(v8, v13, v24);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 80))(v8, 10);
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 88))(v8);
  }
  if ( *(_DWORD *)(dword_10435994 + 48) )
  {
    v15 = (float *)(*(int (__thiscall **)(float *, _BYTE *, int))(*(_DWORD *)a1 + 4))(a1, v22, a2);
    v16 = a1[1506];
    v17 = ((_BYTE)a1[1678] & 0x20) == 0;
    v28 = *v15;
    v29 = v15[1];
    v18 = v15[2];
    v25[0] = v16 - v28;
    v30 = v18;
    v25[1] = a1[1507] - v29;
    v25[2] = a1[1508] - v18;
    v26[0] = a1[1509] - v28;
    v26[1] = a1[1510] - v29;
    v26[2] = a1[1511] - v18;
    if ( v17 )
    {
      v19 = 0;
      v20 = 255;
    }
    else
    {
      v19 = 255;
      v20 = 0;
    }
    v27[0] = 0.0;
    v27[1] = 0.0;
    v27[2] = 0.0;
    (*(void (__thiscall **)(int, float *, float *, float *, float *, int, int, _DWORD))(*(_DWORD *)dword_1041316C + 4))(
      dword_1041316C,
      &v28,
      v25,
      v26,
      v27,
      v19,
      v20,
      0);
    v32 = *(_DWORD *)dword_1041316C;
    v21 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*((_DWORD *)a1 - 2) + 44))((_DWORD *)a1 - 2, *((_DWORD *)a1 + 12));
    (*(void (__cdecl **)(int, float *, _DWORD, _DWORD, int, int, _DWORD, int, const char *, int))(v32 + 60))(
      dword_1041316C,
      &v28,
      0,
      0.0,
      v19,
      v20,
      0,
      64,
      "%s:(%d)",
      v21);
  }
  sub_100170F0(&v31);
  CVProfile::ExitScope(g_VProfCurrentProfile);
  return 1;
}
