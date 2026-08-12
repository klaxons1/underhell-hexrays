int *__cdecl sub_10178260(
        int *a1,
        float *a2,
        float *a3,
        float a4,
        int a5,
        float a6,
        _BYTE *a7,
        char a8,
        const char *a9,
        float a10,
        float a11)
{
  int v11; // ebx
  int v12; // eax
  float *v13; // eax
  float *v14; // ecx
  char v15; // al
  float *v16; // ecx
  int *v17; // esi
  float *v18; // edi
  float *v20; // [esp+10h] [ebp-8h] BYREF

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_Smoke", 0, "Particle/Effect_Rendering", 0, 4);
  sub_100F32D0(&v20, (int)"FX_Smoke");
  sub_100F3060((int)v20, a2);
  v11 = 0;
  if ( a5 <= 0 )
  {
LABEL_4:
    v16 = v20;
    v17 = a1;
    *a1 = 0;
    v18 = v16;
    if ( !v16 )
      goto LABEL_10;
    sub_100F2950(v16);
    if ( *a1 )
      sub_100F2FF0(*a1);
    *a1 = (int)v18;
  }
  else
  {
    while ( 1 )
    {
      v12 = sub_100F29B0((int)v20, (int)a3, (int)a7, a9);
      v13 = sub_100F2B60((int)v20, (int)a7, 60, v12, a2);
      v14 = v13;
      if ( !v13 )
        break;
      ++v11;
      v13[11] = 0.0;
      v13[10] = a6;
      v13[6] = *a3;
      v13[7] = a3[1];
      v13[8] = a3[2];
      *((_BYTE *)v13 + 48) = *a7;
      *((_BYTE *)v13 + 49) = a7[1];
      *((_BYTE *)v13 + 50) = a7[2];
      *((_BYTE *)v13 + 51) = a8;
      *((_BYTE *)v13 + 52) = 0;
      v15 = (int)a4;
      *((_BYTE *)v14 + 53) = v15;
      *((_BYTE *)v14 + 54) = 2 * v15;
      v14[9] = a10;
      v14[14] = a11;
      if ( v11 >= a5 )
        goto LABEL_4;
    }
    v17 = a1;
    *a1 = 0;
  }
  if ( v20 )
    sub_100F2FF0((int)v20);
LABEL_10:
  CVProfile::ExitScope(g_VProfCurrentProfile);
  return v17;
}
