int __thiscall sub_1015E3A0(int this, int a2)
{
  int result; // eax
  _DWORD *v4; // edi
  int v5; // ebx
  int v6; // eax
  float *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  double v11; // st6
  double v12; // st7
  double v13; // st7
  double v14; // st5
  double v15; // st5
  double v16; // rt0
  double v17; // st4
  double v18; // st3
  double v19; // st5
  double v20; // rt2
  double v21; // st7
  int v22; // eax
  int v23; // eax
  int v24; // esi
  int v25; // edi
  int v26; // [esp+14h] [ebp-10h]
  int v27; // [esp+18h] [ebp-Ch]
  int v28; // [esp+1Ch] [ebp-8h]
  _DWORD *v29; // [esp+20h] [ebp-4h]
  int v30; // [esp+20h] [ebp-4h]
  int v31; // [esp+2Ch] [ebp+8h]
  bool v32; // [esp+2Fh] [ebp+Bh]

  result = sub_101BC880();
  if ( (_BYTE)result )
  {
    nullsub_5(a2);
    result = (*(int (__thiscall **)(int *))(*off_103ED578 + 120))(off_103ED578);
    if ( (_BYTE)result )
    {
      v4 = *(_DWORD **)(this + 1536);
      if ( v4 )
      {
        result = sub_1000EF90((_DWORD *)this);
        v29 = (_DWORD *)result;
        if ( result )
        {
          v32 = *(_BYTE *)(this + 1508)
             && (0.0 == *(float *)(this + 1464) || *((float *)off_103DC81C + 3) < (double)*(float *)(this + 1464));
          if ( v4[61] == -1 )
          {
            v5 = sub_1015C820(v4);
            if ( sub_10229D00(32) )
              v28 = sub_10229D20("OldParticleSystem_Create");
            else
              v28 = 0;
            sub_1022ABA0("name", "C_SmokeTrail");
            sub_1022ACA0("id", v5);
            sub_1022ACC0("time", *((float *)off_103DC81C + 3));
            sub_1022A6A0("DmeRandomEmitter", 1);
            sub_1022ACA0("count", (int)*(float *)(this + 1428));
            sub_1022ACC0("duration", -1.0);
            sub_1022ACA0("active", v32);
            sub_1022A6A0("emitter1", 1);
            sub_1022ACC0("randomamount", 0.5);
            sub_1022A6A0("emitter2", 1);
            sub_1022ACC0("randomamount", 0.5);
            v26 = sub_1022A6A0("DmeSpriteEmitter", 1);
            sub_1022ABA0("material", "particle/particle_smokegrenade");
            sub_1022A6A0("initializers", 1);
            sub_1022A6A0("DmePositionPointToEntityInitializer", 1);
            v6 = (*(int (__thiscall **)(_DWORD *))(v29[2] + 36))(v29 + 2);
            sub_1022ACE0("entindex", v6);
            sub_1022ACA0("attachmentIndex", *(_DWORD *)(this + 1512));
            sub_1022ACC0("randomDist", *(float *)(this + 1492));
            v7 = (float *)(*(int (__thiscall **)(_DWORD *))(*v29 + 36))(v29);
            sub_1022ACC0("startx", *v7);
            v8 = (*(int (__thiscall **)(_DWORD *))(*v29 + 36))(v29);
            sub_1022ACC0("starty", *(float *)(v8 + 4));
            v9 = (*(int (__thiscall **)(_DWORD *))(*v29 + 36))(v29);
            sub_1022ACC0("startz", *(float *)(v9 + 8));
            sub_1022A6A0("DmeRandomLifetimeInitializer", 1);
            sub_1022ACC0("minLifetime", *(float *)(this + 1460));
            sub_1022ACC0("maxLifetime", *(float *)(this + 1460));
            sub_1022A6A0("DmeAttachmentVelocityInitializer", 1);
            v10 = (*(int (__thiscall **)(int))(*(_DWORD *)(this + 8) + 36))(this + 8);
            sub_1022ACE0("entindex", v10);
            sub_1022ACC0("minAttachmentSpeed", *(float *)(this + 1476));
            sub_1022ACC0("maxAttachmentSpeed", *(float *)(this + 1480));
            sub_1022ACC0("minRandomSpeed", *(float *)(this + 1468));
            sub_1022ACC0("maxRandomSpeed", *(float *)(this + 1472));
            sub_1022A6A0("DmeRandomRollInitializer", 1);
            sub_1022ACC0("minRoll", 0.0);
            sub_1022ACC0("maxRoll", 360.0);
            sub_1022A6A0("DmeRandomRollSpeedInitializer", 1);
            sub_1022ACC0("minRollSpeed", -1.0);
            sub_1022ACC0("maxRollSpeed", 1.0);
            sub_1022A6A0("DmeRandomValueColorInitializer", 1);
            v11 = 255.0;
            v12 = *(float *)(this + 1440) * 255.0;
            if ( v12 <= 255.0 )
            {
              if ( v12 >= 0.0 )
              {
                v15 = v12;
                v13 = 255.0;
                v16 = v15;
                v14 = 0.0;
                v11 = v16;
              }
              else
              {
                v11 = 0.0;
                v14 = 0.0;
                v13 = 255.0;
              }
            }
            else
            {
              v13 = 255.0;
              v14 = 0.0;
            }
            v17 = *(float *)(this + 1436) * v13;
            if ( v17 <= v13 )
            {
              if ( v17 < v14 )
                v17 = v14;
            }
            else
            {
              v17 = v13;
            }
            v18 = *(float *)(this + 1432) * v13;
            if ( v18 <= v13 )
            {
              if ( v18 >= v14 )
                v14 = v18;
              v20 = v14;
              v19 = v17;
              v13 = v20;
            }
            else
            {
              v19 = v17;
            }
            LOBYTE(v30) = (int)v13;
            HIBYTE(v30) = -1;
            BYTE1(v30) = (int)v19;
            BYTE2(v30) = (int)v11;
            sub_1022AB60("startColor", v30);
            sub_1022ACC0("minStartValueDelta", -0.2);
            sub_1022ACC0("maxStartValueDelta", 0.2);
            sub_1022AB60("endColor", -16777216);
            sub_1022A6A0("DmeRandomAlphaInitializer", 1);
            v21 = *(float *)(this + 1456) * 255.0;
            v31 = (int)(0.75 * v21);
            v27 = (int)(v21 * 1.25);
            sub_1022ACA0("minStartAlpha", 0);
            sub_1022ACA0("maxStartAlpha", 0);
            if ( v31 <= 255 )
              v22 = v31 < 0 ? 0 : v31;
            else
              v22 = 255;
            sub_1022ACA0("minEndAlpha", v22);
            if ( v27 <= 255 )
              v23 = v27 < 0 ? 0 : v27;
            else
              v23 = 255;
            sub_1022ACA0("maxEndAlpha", v23);
            sub_1022A6A0("DmeRandomSizeInitializer", 1);
            sub_1022ACC0("minStartSize", *(float *)(this + 1484));
            sub_1022ACC0("maxStartSize", *(float *)(this + 1484));
            sub_1022ACC0("minEndSize", *(float *)(this + 1488));
            sub_1022ACC0("maxEndSize", *(float *)(this + 1488));
            sub_1022A6A0("updaters", 1);
            sub_1022A6A0("DmePositionVelocityUpdater", 1);
            sub_1022A6A0("DmeRollUpdater", 1);
            sub_1022A6A0("DmeRollSpeedAttenuateUpdater", 1);
            sub_1022ACC0("attenuation", 0.73333335);
            sub_1022ACC0("attenuationTme", 0.033333335);
            sub_1022ACC0("minRollSpeed", 0.5);
            sub_1022A6A0("DmeAlphaSineUpdater", 1);
            sub_1022A6A0("DmeColorUpdater", 1);
            sub_1022A6A0("DmeSizeUpdater", 1);
            v24 = sub_1022AD00(v26);
            sub_1022ABA0("material", (void *)"particle/particle_noisesphere");
            sub_1022A7C0(v24);
            sub_101BC9C0(0, v28);
            return sub_1022AF00(v28);
          }
          else
          {
            if ( sub_10229D00(32) )
              v25 = sub_10229D20("OldParticleSystem_ActivateEmitter");
            else
              v25 = 0;
            sub_1022ACA0("id", *(_DWORD *)(*(_DWORD *)(this + 1536) + 244));
            sub_1022ACA0("emitter", 0);
            sub_1022ACA0("active", v32);
            sub_1022ACC0("time", *((float *)off_103DC81C + 3));
            sub_101BC9C0(0, v25);
            return sub_1022AF00(v25);
          }
        }
      }
    }
  }
  return result;
}
