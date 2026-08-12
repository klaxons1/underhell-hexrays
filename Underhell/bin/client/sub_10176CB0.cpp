void __cdecl sub_10176CB0(float a1, int a2, int a3, char *a4, char a5)
{
  double v5; // st7
  double v6; // st7
  double v7; // st7
  int v8; // edi
  int *v9; // esi
  double v10; // st5
  int v11; // eax
  float *v12; // eax
  float *v13; // esi
  double v14; // st6
  double v15; // st7
  char v16; // al
  int v17; // eax
  int v18; // eax
  int *v19; // edi
  _DWORD *v20; // eax
  int v21; // esi
  int v22; // ebx
  int v23; // eax
  double v24; // st7
  double v25; // st7
  char v26; // dl
  char v27; // cl
  char v28; // al
  double v29; // st7
  float v30; // [esp+30h] [ebp-4Ch]
  float v31; // [esp+34h] [ebp-48h]
  float v32; // [esp+34h] [ebp-48h]
  float v33; // [esp+34h] [ebp-48h]
  float v34; // [esp+34h] [ebp-48h]
  float v35; // [esp+34h] [ebp-48h]
  float v36; // [esp+44h] [ebp-38h] BYREF
  float v37; // [esp+48h] [ebp-34h]
  float v38; // [esp+4Ch] [ebp-30h]
  float v39[3]; // [esp+50h] [ebp-2Ch] BYREF
  float v40[3]; // [esp+5Ch] [ebp-20h] BYREF
  int v41; // [esp+68h] [ebp-14h]
  int v42; // [esp+6Ch] [ebp-10h]
  float v43; // [esp+70h] [ebp-Ch]
  int *v44; // [esp+74h] [ebp-8h] BYREF
  int v45; // [esp+78h] [ebp-4h]
  int v46; // [esp+8Ch] [ebp+10h]
  float v47; // [esp+8Ch] [ebp+10h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "FX_MuzzleEffect", 0, "Particle/Effect_Rendering", 0, 4);
  sub_100F15C0(&v44, (int)"MuzzleFlash", a2, a3, 0);
  if ( v44 )
  {
    v5 = a1 * 16.0;
    v40[0] = v5;
    v40[1] = v5;
    v40[2] = v5;
    v39[0] = -v5;
    v39[1] = v39[0];
    v39[2] = v39[0];
    sub_100EC3F0((int)(v44 + 2), v39, v40, 1);
    v31 = a1 + 0.25;
    v30 = a1 - 0.25;
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           LODWORD(v30),
           LODWORD(v31));
    v43 = v6;
    if ( v6 >= 0.5 )
    {
      if ( v6 > 8.0 )
        v43 = 8.0;
    }
    else
    {
      v43 = 0.5;
    }
    v7 = 0.0;
    v8 = 11;
    v42 = 1;
    v45 = 11;
    while ( 1 )
    {
      v9 = v44;
      v10 = ((double)v42 + (double)v42) * a1;
      v36 = v10;
      v37 = v7 * v10;
      v38 = v37;
      v11 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 3);
      v12 = sub_100F2B60((int)v9, (int)v9, 60, dword_1043DF30[v11], &v36);
      v13 = v12;
      if ( !v12 )
        break;
      v12[11] = 0.0;
      if ( a5 )
        v14 = 0.000099999997;
      else
        v14 = 0.1;
      v12[10] = v14;
      v12[6] = 0.0;
      v12[7] = 0.0;
      v12[8] = 0.0;
      if ( a4 )
      {
        *((_BYTE *)v12 + 48) = *a4;
        *((_BYTE *)v12 + 49) = a4[1];
        *((_BYTE *)v12 + 50) = a4[2];
      }
      else
      {
        *((_WORD *)v12 + 24) = -1;
        *((_BYTE *)v12 + 50) = -1;
      }
      *(_WORD *)((char *)v12 + 51) = -32513;
      v15 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              6.0,
              9.0);
      v41 = (int)(v15 * (double)v45 * 0.11111111 * v43);
      v16 = v41;
      *((_BYTE *)v13 + 53) = v41;
      *((_BYTE *)v13 + 54) = v16;
      v17 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
      ++v42;
      v41 = v17;
      v45 = --v8;
      v13[9] = (float)v17;
      v7 = 0.0;
      v13[14] = 0.0;
      if ( v8 <= 3 )
      {
        if ( (unsigned __int8)sub_101BC880()
          && (*(unsigned __int8 (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578) )
        {
          v18 = sub_1007A770(off_103DCD78, a2);
          v41 = v18;
          if ( v18 )
            (*(void (__thiscall **)(int))(*(_DWORD *)(v18 + 4) + 172))(v18 + 4);
          v19 = v44;
          v20 = sub_100F0920();
          v21 = v20[66];
          v20[66] = v21 + 1;
          v19[61] = v21;
          if ( sub_10229D00(32) )
            v22 = sub_10229D20("OldParticleSystem_Create");
          else
            v22 = 0;
          sub_1022ABA0("name", "FX_MuzzleEffectAttached");
          sub_1022ACA0("id", v21);
          sub_1022ACC0("time", *((float *)off_103DC81C + 3));
          sub_1022A6A0("DmeSpriteEmitter", 1);
          sub_1022ACA0("count", 9);
          sub_1022ACC0("duration", 0.0);
          sub_1022ABA0("material", "effects/muzzleflash2");
          sub_1022ACA0("active", 1);
          sub_1022A6A0("initializers", 1);
          sub_1022A6A0("DmeLinearAttachedPositionInitializer", 1);
          v23 = (*(int (__thiscall **)(int))(*(_DWORD *)(v41 + 8) + 36))(v41 + 8);
          sub_1022ACE0("entindex", v23);
          sub_1022ACA0("attachmentIndex", a3);
          v32 = a1 + a1;
          sub_1022ACC0("linearOffsetX", v32);
          sub_1022A6A0("DmeRandomLifetimeInitializer", 1);
          if ( a5 )
            v24 = 0.041666668;
          else
            v24 = 0.1;
          v33 = v24;
          sub_1022ACC0("minLifetime", v33);
          if ( a5 )
            v25 = 0.041666668;
          else
            v25 = 0.1;
          v34 = v25;
          sub_1022ACC0("maxLifetime", v34);
          sub_1022A6A0("DmeConstantVelocityInitializer", 1);
          sub_1022ACC0("velocityX", 0.0);
          sub_1022ACC0("velocityY", 0.0);
          sub_1022ACC0("velocityZ", 0.0);
          sub_1022A6A0("DmeRandomRollInitializer", 1);
          sub_1022ACC0("minRoll", 0.0);
          sub_1022ACC0("maxRoll", 360.0);
          sub_1022A6A0("DmeRandomRollSpeedInitializer", 1);
          sub_1022ACC0("minRollSpeed", 0.0);
          sub_1022ACC0("maxRollSpeed", 0.0);
          sub_1022A6A0("DmeRandomInterpolatedColorInitializer", 1);
          if ( a4 )
          {
            v26 = a4[2];
            v27 = a4[1];
            v28 = *a4;
          }
          else
          {
            v26 = -1;
            v27 = -1;
            v28 = -1;
          }
          BYTE1(v46) = v27;
          LOBYTE(v46) = v28;
          BYTE2(v46) = v26;
          HIBYTE(v46) = -1;
          sub_1022AB60("color1", v46);
          sub_1022AB60("color2", v46);
          sub_1022A6A0("DmeRandomAlphaInitializer", 1);
          sub_1022ACA0("minStartAlpha", 255);
          sub_1022ACA0("maxStartAlpha", 255);
          sub_1022ACA0("minEndAlpha", 128);
          sub_1022ACA0("maxEndAlpha", 128);
          sub_1022A6A0("DmeMuzzleFlashSizeInitializer", 1);
          v29 = v43 * 0.11111111;
          v47 = v29;
          v35 = v29 * 4.0;
          sub_1022ACC0("indexedBase", v35);
          sub_1022ACC0("indexedDelta", v47);
          sub_1022ACC0("minRandomFactor", 6.0);
          sub_1022ACC0("maxRandomFactor", 9.0);
          sub_101BC9C0(0, v22);
          sub_1022AF00(v22);
        }
        break;
      }
    }
    if ( v44 )
      sub_100F2FF0((int)v44);
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
