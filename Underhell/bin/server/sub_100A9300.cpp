void __thiscall sub_100A9300(int this)
{
  bool v2; // cc
  int v3; // eax
  const char *v4; // eax
  int v5; // edi
  int v6; // edx
  bool v7; // zf
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  bool v12; // c0
  const char *v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  int v16; // ebx
  int *v17; // edi
  double v18; // st7
  const char *v19; // eax
  const char *v20; // eax
  const char *v21; // eax
  int v22; // [esp+0h] [ebp-38h]
  int v23; // [esp+4h] [ebp-34h]
  float v24; // [esp+8h] [ebp-30h]
  const char *v25; // [esp+8h] [ebp-30h]
  float v26; // [esp+8h] [ebp-30h]
  _DWORD v27[3]; // [esp+18h] [ebp-20h] BYREF
  int v28; // [esp+24h] [ebp-14h]
  int v29; // [esp+28h] [ebp-10h]
  int v30; // [esp+2Ch] [ebp-Ch]
  int v31; // [esp+30h] [ebp-8h]
  int v32; // [esp+34h] [ebp-4h]

  if ( *(_BYTE *)(this + 876) != 1 )
  {
    v2 = *(_DWORD *)(dword_106B31C8 + 20) <= 1;
    v32 = 0;
    if ( v2 )
      v3 = sub_10261B20();
    else
      v3 = 0;
    if ( (*(_DWORD *)(v3 + 256) & 0x8000) != 0 && *(_DWORD *)(dword_10695074 + 48) )
    {
      v4 = (const char *)sub_100D6390(this);
      DevMsg("%s WARNING: Player is NOTARGET. This will affect all LOS conditiosn involving the player!\n", v4);
    }
    v5 = 0;
    v28 = 0;
    if ( *(int *)(this + 1008) > 0 )
    {
      v31 = 0;
      do
      {
        v6 = *(_DWORD *)(this + 996);
        v7 = v31 + v6 == 0;
        v8 = v31 + v6;
        v30 = v8;
        if ( v7 )
        {
          v31 += 20;
          v28 = v5 + 1;
        }
        else
        {
          if ( *(_DWORD *)v8 == -1 || off_1061BE18[4 * (*(_DWORD *)v8 & 0xFFF) + 2] != *(_DWORD *)v8 >> 12 )
            v9 = 0;
          else
            v9 = off_1061BE18[4 * (*(_DWORD *)v8 & 0xFFF) + 1];
          v29 = this;
          if ( v9 && (*(_BYTE *)(this + 248) & 1) != 0 )
            v29 = v9;
          if ( !*(_DWORD *)(this + 904) || v9 )
          {
            v31 += 20;
            v12 = *(float *)(this + 980) > 0.0;
            v28 = v5 + 1;
            if ( v12 && *(float *)(dword_106B31C8 + 12) - *(float *)(v8 + 12) > -0.001 )
            {
              if ( *(_DWORD *)(dword_10695074 + 48) )
              {
                v13 = *(const char **)(this + 260);
                if ( !v13 )
                  v13 = String;
                DevMsg("%s firing output OnConditionsTimeout (%f seconds)\n", v13, *(float *)(v8 + 16));
              }
              v24 = 0.0;
              v23 = this;
              v22 = v29;
LABEL_50:
              ++v32;
              sub_1010DD80(v22, v23, v24);
            }
            else
            {
              v27[0] = v9;
              v27[1] = sub_10261B20();
              v14 = *(_DWORD *)(this + 880);
              if ( v14 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] != v14 >> 12 )
                v15 = 0;
              else
                v15 = off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1];
              v27[2] = v15;
              v16 = 0;
              v17 = &dword_1060AC4C;
              do
              {
                if ( !((unsigned __int8 (__thiscall *)(int, _DWORD *))*(v17 - 1))(this + *v17, v27) )
                {
                  *(float *)(v30 + 4) = *(float *)(v30 + 8) + *(float *)(dword_106B31C8 + 12);
                  if ( *(_DWORD *)(dword_10695074 + 48) )
                  {
                    v25 = (&off_1060AC50)[4 * v16];
                    v19 = (const char *)sub_100D6390(this);
                    DevMsg("%s failed on: %s\n", v19, v25);
                  }
                  goto LABEL_51;
                }
                v17 += 4;
                ++v16;
              }
              while ( (int)v17 < (int)dword_1060AD2C );
              if ( *(_DWORD *)(dword_10695074 + 48) )
              {
                v18 = *(float *)(v30 + 4) - *(float *)(dword_106B31C8 + 12);
                if ( v18 < 0.0 )
                  v18 = 0.0;
                v20 = (const char *)sub_100D6390(this);
                DevMsg("%s waiting... %f\n", v20, v18);
              }
              if ( *(float *)(dword_106B31C8 + 12) - *(float *)(v30 + 4) > -0.001 )
              {
                if ( *(_DWORD *)(dword_10695074 + 48) )
                {
                  v21 = (const char *)sub_100D6390(this);
                  DevMsg("%s firing output OnConditionsSatisfied\n", v21);
                }
                v24 = 0.0;
                v23 = this;
                v22 = v29;
                goto LABEL_50;
              }
            }
          }
          else
          {
            if ( *(_DWORD *)(this + 1008) == 1 )
            {
              DevMsg("Warning: Active AI script conditions associated with an non-existant or destroyed NPC\n");
              sub_1010DD80(this, this, 0.0);
            }
            v10 = *(_DWORD *)(this + 1008);
            ++v32;
            v11 = v10 - v5 - 1;
            if ( v11 > 0 )
              memcpy(
                (void *)(*(_DWORD *)(this + 996) + v31),
                (const void *)(*(_DWORD *)(this + 996) + v31 + 20),
                20 * v11);
            --*(_DWORD *)(this + 1008);
          }
        }
LABEL_51:
        v5 = v28;
      }
      while ( v28 < *(_DWORD *)(this + 1008) );
    }
    if ( v32 == *(_DWORD *)(this + 1008) )
    {
      sub_100EC3F0(0, 0.0, 0);
      *(_BYTE *)(this + 876) = 1;
      *(_DWORD *)(this + 1008) = 0;
      if ( *(int *)(this + 1004) >= 0 )
      {
        if ( *(_DWORD *)(this + 996) )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 996));
          *(_DWORD *)(this + 996) = 0;
        }
        *(_DWORD *)(this + 1000) = 0;
      }
      *(_DWORD *)(this + 1012) = *(_DWORD *)(this + 996);
    }
    v26 = *(float *)(dword_106B31C8 + 12) + 0.25;
    sub_100EC4A0(v26, 0);
  }
}
