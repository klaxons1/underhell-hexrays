int __thiscall sub_1015A620(int this, int a2)
{
  int result; // eax
  int v4; // ebx
  int v5; // eax
  double v6; // st6
  double v7; // st7
  double v8; // st7
  double v9; // st5
  double v10; // st5
  double v11; // rt0
  double v12; // st4
  double v13; // st3
  double v14; // rt1
  double v15; // st5
  double v16; // st6
  double v17; // st5
  double v18; // st4
  double v19; // st3
  double v20; // st6
  float v21; // [esp+4h] [ebp-24h]
  float v22; // [esp+4h] [ebp-24h]
  float v23; // [esp+4h] [ebp-24h]
  int v24; // [esp+1Ch] [ebp-Ch]
  int v25; // [esp+20h] [ebp-8h]
  int v26; // [esp+24h] [ebp-4h]

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    nullsub_5(a2);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 7600) + 352))(this + 7600, a2);
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      if ( *(_BYTE *)(this + 2361) && *(_DWORD *)(this + 1412) == -1 )
      {
        *(_BYTE *)(this + 2361) = 0;
        v4 = sub_101591B0((_DWORD *)this);
        if ( sub_10229D00(32) )
          v24 = sub_10229D20("OldParticleSystem_Create");
        else
          v24 = 0;
        sub_1022ABA0("name", "C_ParticleSmokeGrenade");
        sub_1022ACA0("id", v4);
        sub_1022ACC0("time", *((float *)off_103DC81C + 3));
        sub_1022A6A0("DmeSpriteEmitter", 1);
        sub_1022ACA0("count", 216);
        sub_1022ACC0("duration", 0.0);
        sub_1022ABA0("material", "particle/particle_smokegrenade1");
        sub_1022ACA0("active", 1);
        sub_1022A6A0("initializers", 1);
        sub_1022A6A0("DmeVoxelPositionInitializer", 1);
        sub_1022ACC0("centerx", *(float *)(this + 1432));
        sub_1022ACC0("centery", *(float *)(this + 1436));
        sub_1022ACC0("centerz", *(float *)(this + 1440));
        v21 = (float)*(int *)(this + 7552);
        sub_1022ACC0("particlesPerDimension", v21);
        sub_1022ACC0("particleSpacing", *(float *)(this + 7564));
        sub_1022A6A0("DmeRandomLifetimeInitializer", 1);
        sub_1022ACC0("minLifetime", *(float *)(this + 1452));
        sub_1022ACC0("maxLifetime", *(float *)(this + 1452));
        sub_1022A6A0("DmeAttachmentVelocityInitializer", 1);
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 8) + 36))(this + 8);
        sub_1022ACE0("entindex", v5);
        sub_1022ACC0("minRandomSpeed", 10.0);
        sub_1022ACC0("maxRandomSpeed", 20.0);
        sub_1022A6A0("DmeRandomRollInitializer", 1);
        sub_1022ACC0("minRoll", -6.0);
        sub_1022ACC0("maxRoll", 6.0);
        sub_1022A6A0("DmeRandomRollSpeedInitializer", 1);
        sub_1022ACC0("minRollSpeed", -0.60000002);
        sub_1022ACC0("maxRollSpeed", 0.60000002);
        v6 = 255.0;
        sub_1022A6A0("DmeRandomInterpolatedColorInitializer", 1);
        v7 = *(float *)(this + 7576) * 255.0;
        if ( v7 <= 255.0 )
        {
          if ( v7 >= 0.0 )
          {
            v10 = v7;
            v8 = 255.0;
            v11 = v10;
            v9 = 0.0;
            v6 = v11;
          }
          else
          {
            v6 = 0.0;
            v9 = 0.0;
            v8 = 255.0;
          }
        }
        else
        {
          v8 = 255.0;
          v9 = 0.0;
        }
        v12 = *(float *)(this + 7572) * v8;
        if ( v12 <= v8 )
        {
          if ( v12 < v9 )
            v12 = v9;
        }
        else
        {
          v12 = v8;
        }
        v13 = *(float *)(this + 7568) * v8;
        if ( v13 <= v8 )
        {
          if ( v13 < v9 )
            v13 = v9;
        }
        else
        {
          v13 = v8;
        }
        HIBYTE(v26) = -1;
        LOBYTE(v26) = (int)v13;
        BYTE1(v26) = (int)v12;
        v14 = v9;
        v15 = v6;
        v16 = v14;
        BYTE2(v26) = (int)v15;
        v17 = *(float *)(this + 7588) * v8;
        if ( v17 <= v8 )
        {
          if ( v17 < v16 )
            v17 = v16;
        }
        else
        {
          v17 = v8;
        }
        v18 = *(float *)(this + 7584) * v8;
        if ( v18 <= v8 )
        {
          if ( v18 < v16 )
            v18 = v16;
        }
        else
        {
          v18 = v8;
        }
        v19 = *(float *)(this + 7580) * v8;
        if ( v19 <= v8 )
        {
          if ( v19 >= v16 )
            v16 = v19;
          v8 = v16;
          v20 = v18;
        }
        else
        {
          v20 = v18;
        }
        LOBYTE(v25) = (int)v8;
        HIBYTE(v25) = -1;
        BYTE1(v25) = (int)v20;
        BYTE2(v25) = (int)v17;
        sub_1022AB60("color1", v26);
        sub_1022AB60("color2", v25);
        sub_1022A6A0("DmeRandomAlphaInitializer", 1);
        sub_1022ACA0("minStartAlpha", 255);
        sub_1022ACA0("maxStartAlpha", 255);
        sub_1022ACA0("minEndAlpha", 0);
        sub_1022ACA0("maxEndAlpha", 0);
        sub_1022A6A0("DmeRandomSizeInitializer", 1);
        sub_1022ACC0("minStartSize", 55.0);
        sub_1022ACC0("maxStartSize", 55.0);
        sub_1022ACC0("minEndSize", 55.0);
        sub_1022ACC0("maxEndSize", 55.0);
        sub_1022A6A0("DmeSolidKillInitializer", 1);
        sub_1022A6A0("updaters", 1);
        sub_1022A6A0("DmeRollUpdater", 1);
        sub_1022A6A0("DmeColorUpdater", 1);
        sub_1022A6A0("DmeAlphaCosineUpdater", 1);
        v22 = *(float *)(this + 1452) - *(float *)(this + 1448);
        sub_1022ACC0("duration", v22);
        sub_1022A6A0("DmeColorDynamicLightUpdater", 1);
        sub_1022A6A0("DmeSmokeGrenadeUpdater", 1);
        sub_1022ACC0("centerx", *(float *)(this + 1432));
        sub_1022ACC0("centery", *(float *)(this + 1436));
        sub_1022ACC0("centerz", *(float *)(this + 1440));
        v23 = (float)*(int *)(this + 7552);
        sub_1022ACC0("particlesPerDimension", v23);
        sub_1022ACC0("particleSpacing", *(float *)(this + 7564));
        sub_1022ACC0("radiusExpandTime", 5.5);
        sub_1022ACC0("cutoffFraction", 0.69999999);
        sub_101BC9C0(0, v24);
        return sub_1022AF00(v24);
      }
    }
  }
  return result;
}
