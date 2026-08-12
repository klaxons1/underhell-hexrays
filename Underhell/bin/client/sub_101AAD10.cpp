void __cdecl sub_101AAD10(int a1, int a2)
{
  int v2; // eax
  int (__thiscall *v3)(int, int); // edx
  int v4; // esi
  double v5; // st7
  _BYTE v6[12]; // [esp+4h] [ebp-3Ch] BYREF
  float v7; // [esp+10h] [ebp-30h]
  float v8; // [esp+20h] [ebp-20h]
  float v9; // [esp+30h] [ebp-10h]
  float v10; // [esp+34h] [ebp-Ch]
  float v11; // [esp+38h] [ebp-8h]
  float v12; // [esp+3Ch] [ebp-4h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "MuzzleFlash_Hunter", 0, "Particle/Effect_Rendering", 0, 4);
  if ( sub_10175F70(a1, a2, v6) )
  {
    v2 = *(_DWORD *)dword_10413164;
    v10 = v7;
    v3 = *(int (__thiscall **)(int, int))(v2 + 20);
    v11 = v8;
    v12 = v9;
    v4 = v3(dword_10413164, 0x40000000);
    *(float *)(v4 + 4) = v10;
    *(float *)(v4 + 8) = v11;
    *(float *)(v4 + 12) = v12;
    *(_DWORD *)(v4 + 20) = 97902130;
    v5 = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 120, 200);
    *(float *)(v4 + 16) = v5;
    *(float *)(v4 + 28) = v5 * 20.0;
    *(float *)(v4 + 24) = *((float *)off_103DC81C + 3) + 0.050000001;
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
