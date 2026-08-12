int __userpurge sub_100EEDD0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  int v5; // edi
  int v6; // eax
  int v7; // ecx
  __int16 v8; // ax
  int v9; // eax
  int v10; // edi
  _DWORD **v11; // ebx
  int v12; // eax
  int v13; // ecx
  int v14; // edi
  bool v15; // zf
  double v16; // st6
  double v17; // st5
  double v18; // st4
  double v19; // st5
  double v20; // st7
  int v21; // ebx
  int v22; // edi
  int v23; // eax
  _BYTE v24[64]; // [esp+74h] [ebp-B8h] BYREF
  _BYTE v25[64]; // [esp+B4h] [ebp-78h] BYREF
  float v26[3]; // [esp+F4h] [ebp-38h] BYREF
  float v27[3]; // [esp+100h] [ebp-2Ch] BYREF
  float v28[3]; // [esp+10Ch] [ebp-20h] BYREF
  float v29[3]; // [esp+118h] [ebp-14h] BYREF
  char v30[4]; // [esp+124h] [ebp-8h]
  float v31; // [esp+128h] [ebp-4h]
  int v32; // [esp+134h] [ebp+8h]

  CVProfile::EnterScope(
    g_VProfCurrentProfile,
    "CParticleEffectBinding::DrawModel",
    0,
    "Particle/Effect_Rendering",
    0,
    4);
  if ( *(_DWORD *)(dword_104358BC + 48)
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 56))(dword_1044CC48)
    && (a3 & 0x40000000) == 0 )
  {
    *(_DWORD *)(a1 + 144) |= 0x20u;
    v5 = a1 - 4;
    v32 = a1 - 4;
    if ( *(_WORD *)(a1 + 128) )
    {
      sub_100ED4B0(a1 - 4, a2, a1, (int)v24, (int)v25);
      v6 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 8);
      v7 = *(_DWORD *)(a1 + 140);
      v31 = 0.0;
      v30[0] = v6 == 0;
      v8 = *(_WORD *)(v7 + 36);
      if ( *(_WORD *)(a1 + 130) != v8 )
      {
        *(_WORD *)(a1 + 130) = v8;
        v31 = *((float *)off_103DC81C + 4);
      }
      v9 = *(unsigned __int16 *)(a1 + 192);
      if ( v9 != 0xFFFF )
      {
        do
        {
          v10 = 8 * (unsigned __int16)v9;
          v11 = *(_DWORD ***)(v10 + *(_DWORD *)(a1 + 180));
          if ( **v11 && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)**v11 + 96))(**v11, 1) )
            sub_100ECE60(v10);
          if ( **v11 && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)**v11 + 100))(**v11, 1) )
            sub_100ECEE0((int)v11, v10);
          sub_100ED270(v32, v30[0], v11, v31, 0);
          v9 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 180) + v10 + 6);
        }
        while ( v9 != 0xFFFF );
        v5 = a1 - 4;
      }
      if ( sub_100EC2E0() )
      {
        v12 = *(unsigned __int16 *)(a1 + 192);
        if ( v12 != 0xFFFF )
        {
          v13 = *(_DWORD *)(a1 + 180);
          do
          {
            v14 = 8 * (unsigned __int16)v12;
            sub_100ED270(v32, v30[0], *(_DWORD ***)(v14 + v13), v31, 1);
            v13 = *(_DWORD *)(a1 + 180);
            v12 = *(unsigned __int16 *)(v14 + v13 + 6);
          }
          while ( v12 != 0xFFFF );
          v5 = a1 - 4;
        }
      }
      if ( *(_DWORD *)(dword_10435994 + 48) )
      {
        v15 = (*(_BYTE *)(a1 + 144) & 8) == 0;
        v16 = *(float *)(a1 + 80) + *(float *)(a1 + 92);
        v17 = *(float *)(a1 + 84) + *(float *)(a1 + 96);
        v18 = (*(float *)(a1 + 88) + *(float *)(a1 + 76)) * 0.5;
        v29[0] = v18;
        v29[1] = v16 * 0.5;
        v19 = 0.5 * v17;
        v20 = v16 * 0.5;
        v29[2] = v19;
        v27[0] = *(float *)(a1 + 76) - v18;
        v27[1] = *(float *)(a1 + 80) - v20;
        v27[2] = *(float *)(a1 + 84) - v19;
        v26[0] = *(float *)(a1 + 88) - v18;
        v26[1] = *(float *)(a1 + 92) - v20;
        v26[2] = *(float *)(a1 + 96) - v19;
        if ( v15 )
        {
          v21 = 0;
          LODWORD(v31) = 255;
        }
        else
        {
          v21 = 255;
          v31 = 0.0;
        }
        v28[0] = 0.0;
        v28[1] = 0.0;
        v28[2] = 0.0;
        (*(void (__thiscall **)(int, float *, float *, float *, float *, int, float, _DWORD, int, _DWORD))(*(_DWORD *)dword_1041316C + 4))(
          dword_1041316C,
          v29,
          v27,
          v26,
          v28,
          v21,
          COERCE_FLOAT(LODWORD(v31)),
          0,
          16,
          0.0);
        v22 = *(_DWORD *)dword_1041316C;
        v23 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 136) + 44))(
                *(_DWORD *)(a1 + 136),
                *(unsigned __int16 *)(a1 + 128));
        (*(void (__cdecl **)(int, float *, _DWORD, _DWORD, int, float, _DWORD, int, const char *, int))(v22 + 60))(
          dword_1041316C,
          v29,
          0,
          0.0,
          v21,
          COERCE_FLOAT(LODWORD(v31)),
          0,
          64,
          "%s:(%d)",
          v23);
        v5 = a1 - 4;
      }
      sub_100ED5E0(v5, a1, (int)v24, (int)v25);
      CVProfile::ExitScope(g_VProfCurrentProfile);
      return 1;
    }
    else
    {
      CVProfile::ExitScope(g_VProfCurrentProfile);
      return 1;
    }
  }
  else
  {
    CVProfile::ExitScope(g_VProfCurrentProfile);
    return 0;
  }
}
