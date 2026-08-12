void __cdecl sub_101A9D80(float *a1, float *a2)
{
  double v2; // st7
  double v3; // st7
  bool v4; // c0
  double v5; // st7
  int v6; // esi
  int v7; // eax
  float v8; // [esp+34h] [ebp-38h]
  int v9[3]; // [esp+48h] [ebp-24h] BYREF
  int v10; // [esp+54h] [ebp-18h] BYREF
  float v11; // [esp+58h] [ebp-14h]
  float v12; // [esp+5Ch] [ebp-10h]
  float v13; // [esp+60h] [ebp-Ch]
  float v14; // [esp+64h] [ebp-8h]
  float v15; // [esp+68h] [ebp-4h]
  float v16; // [esp+78h] [ebp+Ch]

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_PlayerAR2Tracer", 0, "Particle/Effect_Rendering", 0, 4);
  v13 = *a2 - *a1;
  v14 = a2[1] - a1[1];
  v15 = a2[2] - a1[2];
  v2 = off_103EDFEC();
  v16 = v2;
  if ( v2 >= 128.0 )
  {
    v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           0.0,
           8.0);
    *(float *)&v10 = v13 * v3 + *a1;
    v11 = v14 * v3 + a1[1];
    v12 = v3 * v15 + a1[2];
    v4 = v16 < ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                 dword_10413198,
                 256.0,
                 1024.0);
    v5 = v16;
    if ( !v4 )
      v5 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
             dword_10413198,
             256.0,
             1024.0);
    *(float *)v9 = v13 * v5 + *(float *)&v10;
    *(float *)&v9[1] = v14 * v5 + v11;
    *(float *)&v9[2] = v5 * v15 + v12;
    v6 = sub_100DDA40(52);
    if ( v6 )
    {
      v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
             dword_10413198,
             6.0,
             12.0);
      v7 = sub_100A5980(
             v6,
             (int)"Tracer",
             (float *)&v10,
             (float *)v9,
             v8,
             0.0099999998,
             (int)"effects/gunshiptracer",
             0);
    }
    else
    {
      v7 = 0;
    }
    ((void (__thiscall *)(int (__stdcall ***)(char), int))(*off_103DD168)[1])(off_103DD168, v7);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
