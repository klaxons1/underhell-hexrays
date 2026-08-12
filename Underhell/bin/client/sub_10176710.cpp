void __cdecl sub_10176710(float *a1, float *a2, int a3, char a4)
{
  double v4; // st7
  double v5; // st6
  float v6; // [esp+14h] [ebp-2Ch]
  float v7; // [esp+1Ch] [ebp-24h]
  float v8; // [esp+24h] [ebp-1Ch]
  int v9[3]; // [esp+34h] [ebp-Ch] BYREF
  int savedregs; // [esp+40h] [ebp+0h] BYREF

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_HunterTracer", 0, "Particle/Effect_Rendering", 0, 4);
  *(float *)v9 = *a2 - *a1;
  *(float *)&v9[1] = a2[1] - a1[1];
  *(float *)&v9[2] = a2[2] - a1[2];
  v4 = off_103EDFEC();
  v5 = (double)a3;
  v8 = (v4 + 128.0) / v5;
  v7 = v4;
  v6 = v5 * 0.5;
  sub_1008DBD0((int)a1, (int)v9, v6, 128.0, v7, 2.0, v8, (int)"effects/huntertracer");
  if ( a4 )
    sub_1008DF90((int)&savedregs, a1, a2, 4);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
