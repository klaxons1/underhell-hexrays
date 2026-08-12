void __cdecl sub_1008DDF0(float *a1, float *a2)
{
  double v2; // st7
  double v3; // st7
  double v4; // st7
  int v5; // eax
  float v6; // [esp+2Ch] [ebp-38h]
  int v7[3]; // [esp+40h] [ebp-24h] BYREF
  int v8; // [esp+4Ch] [ebp-18h] BYREF
  float v9; // [esp+50h] [ebp-14h]
  float v10; // [esp+54h] [ebp-10h]
  float v11; // [esp+58h] [ebp-Ch]
  float v12; // [esp+5Ch] [ebp-8h]
  float v13; // [esp+60h] [ebp-4h]
  float v14; // [esp+70h] [ebp+Ch]

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_PlayerTracer", 0, "Particle/Effect_Rendering", 0, 4);
  v11 = *a2 - *a1;
  v12 = a2[1] - a1[1];
  v13 = a2[2] - a1[2];
  v2 = off_103EDFEC();
  v14 = v2;
  if ( v2 >= 256.0 )
  {
    v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           -24.0,
           64.0)
       + 8.0;
    *(float *)&v8 = v11 * v3 + *a1;
    v9 = v12 * v3 + a1[1];
    v10 = v3 * v13 + a1[2];
    v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           0.1,
           0.60000002)
       * v14;
    *(float *)v7 = v11 * v4 + *(float *)&v8;
    *(float *)&v7[1] = v12 * v4 + v9;
    *(float *)&v7[2] = v4 * v13 + v10;
    if ( sub_100DDA40(52) )
    {
      v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
             dword_10413198,
             0.5,
             0.75);
      v5 = sub_100A5980((int)"Tracer", (int)&v8, (int)v7, v6, 0.0099999998, (int)"effects/spark", 0);
    }
    else
    {
      v5 = 0;
    }
    ((void (__thiscall *)(int (__stdcall ***)(char), int))(*off_103DD168)[1])(off_103DD168, v5);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
