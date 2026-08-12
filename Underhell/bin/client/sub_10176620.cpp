void __cdecl sub_10176620(float *a1, float *a2, int a3, char a4)
{
  double v5; // st7
  double v6; // st7
  double v7; // st6
  float v8; // [esp+1Ch] [ebp-2Ch]
  float v9; // [esp+20h] [ebp-28h]
  float v10; // [esp+2Ch] [ebp-1Ch]
  int v11[3]; // [esp+3Ch] [ebp-Ch] BYREF
  int savedregs; // [esp+48h] [ebp+0h] BYREF
  float v13; // [esp+54h] [ebp+Ch]

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_StriderTracer", 0, "Particle/Effect_Rendering", 0, 4);
  *(float *)v11 = *a2 - *a1;
  *(float *)&v11[1] = a2[1] - a1[1];
  *(float *)&v11[2] = a2[2] - a1[2];
  v5 = off_103EDFEC();
  v13 = v5;
  if ( v5 > 256.0 )
  {
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           64.0,
           128.0);
    v7 = (double)a3;
    v10 = (v6 + v13) / v7;
    v9 = v6;
    v8 = v7;
    sub_1008DBD0((int)a1, (int)v11, v8, v9, v13, 2.5, v10, (int)"effects/gunshiptracer");
    if ( a4 )
      sub_1008DF90((int)&savedregs, a1, a2, 4);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
