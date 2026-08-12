int __thiscall sub_101604C0(int this, int a2)
{
  int result; // eax
  _DWORD *v4; // ebx
  int v5; // esi
  int v6; // eax
  float *v7; // eax
  int v8; // eax
  int v9; // eax
  double v10; // st6
  double v11; // st7
  double v12; // st7
  double v13; // st5
  double v14; // st5
  double v15; // rt0
  double v16; // st4
  double v17; // st3
  double v18; // st5
  double v19; // rt2
  double v20; // st7
  int v21; // eax
  int v22; // esi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // esi
  int v28; // [esp+18h] [ebp-8h]
  int v29; // [esp+1Ch] [ebp-4h]
  int v30; // [esp+1Ch] [ebp-4h]
  int v31; // [esp+1Ch] [ebp-4h]
  bool v32; // [esp+2Bh] [ebp+Bh]

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    nullsub_5(a2);
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      v4 = *(_DWORD **)(this + 1580);
      if ( v4 )
      {
        result = sub_1000EF90((_DWORD *)this);
        v5 = result;
        if ( result )
        {
          v32 = *(_BYTE *)(this + 1500)
             && (0.0 == *(float *)(this + 1456) || *((float *)off_103DC81C + 3) < (double)*(float *)(this + 1456));
          if ( v4[61] == -1 )
          {
            v29 = sub_1015C820(v4);
            if ( sub_10229D00(32) )
              v28 = sub_10229D20("OldParticleSystem_Create");
            else
              v28 = 0;
            sub_1022ABA0("name", "C_DustTrail");
            sub_1022ACA0("id", v29);
            sub_1022ACC0("time", *((float *)off_103DC81C + 3));
            sub_1022A6A0("DmeSpriteEmitter", 1);
            sub_1022ABA0("material", "particle/smokesprites_0001");
            sub_1022ACA0("count", (int)*(float *)(this + 1428));
            sub_1022ACC0("duration", -1.0);
            sub_1022ACA0("active", v32);
            sub_1022A6A0("initializers", 1);
            sub_1022A6A0("DmePositionPointToEntityInitializer", 1);
            v6 = (*(int (__thiscall **)(int))(*(_DWORD *)(v5 + 8) + 36))(v5 + 8);
            sub_1022ACE0("entindex", v6);
            sub_1022ACA0("attachmentIndex", *(unsigned __int8 *)(this + 318));
            sub_1022ACC0("randomDist", *(float *)(this + 1484));
            v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 36))(v5);
            sub_1022ACC0("startx", *v7);
            v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 36))(v5);
            sub_1022ACC0("starty", *(float *)(v8 + 4));
            v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 36))(v5);
            sub_1022ACC0("startz", *(float *)(v9 + 8));
            sub_1022A6A0("DmeDecayVelocityInitializer", 1);
            sub_10038150(v5);
            sub_1022ACC0("velocityX", *(float *)(v5 + 244));
            sub_10038150(v5);
            sub_1022ACC0("velocityY", *(float *)(v5 + 248));
            sub_10038150(v5);
            sub_1022ACC0("velocityZ", *(float *)(v5 + 252));
            sub_1022ACC0("decayto", 0.5);
            sub_1022ACC0("decaytime", 0.30000001);
            sub_1022A6A0("DmeRandomLifetimeInitializer", 1);
            sub_1022ACC0("minLifetime", *(float *)(this + 1448));
            sub_1022ACC0("maxLifetime", *(float *)(this + 1448));
            sub_1022A6A0("DmeRandomRollInitializer", 1);
            sub_1022ACC0("minRoll", 0.0);
            sub_1022ACC0("maxRoll", 360.0);
            sub_1022A6A0("DmeRandomRollSpeedInitializer", 1);
            sub_1022ACC0("minRollSpeed", -1.0);
            sub_1022ACC0("maxRollSpeed", 1.0);
            sub_1022A6A0("DmeRandomValueColorInitializer", 1);
            v10 = 255.0;
            v11 = *(float *)(this + 1440) * 255.0;
            if ( v11 <= 255.0 )
            {
              if ( v11 >= 0.0 )
              {
                v14 = v11;
                v12 = 255.0;
                v15 = v14;
                v13 = 0.0;
                v10 = v15;
              }
              else
              {
                v10 = 0.0;
                v13 = 0.0;
                v12 = 255.0;
              }
            }
            else
            {
              v12 = 255.0;
              v13 = 0.0;
            }
            v16 = *(float *)(this + 1436) * v12;
            if ( v16 <= v12 )
            {
              if ( v16 < v13 )
                v16 = v13;
            }
            else
            {
              v16 = v12;
            }
            v17 = *(float *)(this + 1432) * v12;
            if ( v17 <= v12 )
            {
              if ( v17 >= v13 )
                v13 = v17;
              v19 = v13;
              v18 = v16;
              v12 = v19;
            }
            else
            {
              v18 = v16;
            }
            LOBYTE(v30) = (int)v12;
            HIBYTE(v30) = -1;
            BYTE1(v30) = (int)v18;
            BYTE2(v30) = (int)v10;
            sub_1022AB60("startColor", v30);
            sub_1022ACC0("minStartValueDelta", 0.0);
            sub_1022ACC0("maxStartValueDelta", 0.0);
            sub_1022AB60("endColor", v30);
            sub_1022A6A0("DmeRandomAlphaInitializer", 1);
            v20 = *(float *)(this + 1444) * 255.0;
            v21 = (int)(0.75 * v20);
            v22 = v21;
            v31 = (int)(v20 * 1.25);
            if ( v21 <= 255 )
              v23 = v21 < 0 ? 0 : v21;
            else
              v23 = 255;
            sub_1022ACA0("minStartAlpha", v23);
            if ( v31 <= 255 )
              v24 = v31 < 0 ? 0 : v31;
            else
              v24 = 255;
            sub_1022ACA0("maxStartAlpha", v24);
            if ( v22 <= 255 )
              v25 = v22 < 0 ? 0 : v22;
            else
              v25 = 255;
            sub_1022ACA0("minEndAlpha", v25);
            if ( v31 <= 255 )
              v26 = v31 < 0 ? 0 : v31;
            else
              v26 = 255;
            sub_1022ACA0("maxEndAlpha", v26);
            sub_1022A6A0("DmeRandomSizeInitializer", 1);
            sub_1022ACC0("minStartSize", *(float *)(this + 1476));
            sub_1022ACC0("maxStartSize", *(float *)(this + 1476));
            sub_1022ACC0("minEndSize", *(float *)(this + 1480));
            sub_1022ACC0("maxEndSize", *(float *)(this + 1480));
            sub_1022A6A0("updaters", 1);
            sub_1022A6A0("DmePositionVelocityDecayUpdater", 1);
            sub_1022A6A0("DmeRollUpdater", 1);
            sub_1022A6A0("DmeRollSpeedAttenuateUpdater", 1);
            sub_1022ACC0("attenuation", 0.73333335);
            sub_1022ACC0("attenuationTme", 0.033333335);
            sub_1022ACC0("minRollSpeed", 0.5);
            sub_1022A6A0("DmeAlphaSineRampUpdater", 1);
            sub_1022A6A0("DmeColorUpdater", 1);
            sub_1022A6A0("DmeSizeUpdater", 1);
            v27 = v28;
          }
          else
          {
            if ( sub_10229D00(32) )
              v27 = sub_10229D20("OldParticleSystem_ActivateEmitter");
            else
              v27 = 0;
            sub_1022ACA0("id", *(_DWORD *)(*(_DWORD *)(this + 1580) + 244));
            sub_1022ACA0("emitter", 0);
            sub_1022ACA0("active", v32);
            sub_1022ACC0("time", *((float *)off_103DC81C + 3));
          }
          sub_101BC9C0(0, v27);
          return sub_1022AF00(v27);
        }
      }
    }
  }
  return result;
}
