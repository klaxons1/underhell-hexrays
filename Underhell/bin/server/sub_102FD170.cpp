void __thiscall sub_102FD170(float *this, float a2, float a3, float *a4, float *a5)
{
  int v6; // eax
  int v7; // eax
  float *v8; // edi
  double v9; // st6
  double v10; // st7
  int v11; // eax
  int v12; // edi
  int *v13; // eax
  float v14; // edi
  int v15; // edi
  float *v16; // ebx
  float *v17; // eax
  double v18; // st6
  double v19; // st7
  float *v20; // ebx
  float *v21; // eax
  double v22; // st7
  double v23; // st1
  float v24; // [esp+1Ch] [ebp-C8h]
  int v25[20]; // [esp+34h] [ebp-B0h] BYREF
  _BYTE v26[12]; // [esp+84h] [ebp-60h] BYREF
  float v27[3]; // [esp+90h] [ebp-54h] BYREF
  float v28[3]; // [esp+9Ch] [ebp-48h] BYREF
  float v29[3]; // [esp+A8h] [ebp-3Ch] BYREF
  float v30[3]; // [esp+B4h] [ebp-30h] BYREF
  float v31[3]; // [esp+C0h] [ebp-24h] BYREF
  float v32[3]; // [esp+CCh] [ebp-18h] BYREF
  int v33; // [esp+D8h] [ebp-Ch] BYREF
  float v34; // [esp+DCh] [ebp-8h]
  float v35; // [esp+E0h] [ebp-4h]

  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this)
    && (v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this),
        (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 220))(v6) == 6) )
  {
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    v7 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    v8 = (float *)v7;
    if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
      sub_100DAE60(v7);
    v9 = v8[146] - this[146];
    v10 = v8[147] - this[147];
    *(float *)&v33 = v8[145] - this[145];
    v34 = v9;
    v35 = v10;
    sub_10248110((int)v25, (int)this, (int)this, a3, 4, 0);
    v11 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    v12 = v11;
    if ( (*(_DWORD *)(v11 + 252) & 0x800) != 0 )
      sub_100DAE60(v11);
    sub_10248690((float *)v25, (float *)&v33, (float *)(v12 + 580), 1.0);
    v13 = (int *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
    sub_100D9E70(v13, (int)this, v25);
  }
  else
  {
    v14 = *this;
    v28[0] = 16.0;
    v28[1] = 16.0;
    v28[2] = 32.0;
    v27[0] = -16.0;
    v27[1] = -16.0;
    v27[2] = -32.0;
    v15 = (*(int (__thiscall **)(float *, _DWORD, float *, float *, int, int, _DWORD, _DWORD))(LODWORD(v14) + 1072))(
            this,
            LODWORD(a2),
            v27,
            v28,
            (int)a3,
            4,
            5.0,
            0);
    if ( v15 )
    {
      v16 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
      v17 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v15 + 576))(v15);
      v18 = v17[1] - v16[1];
      v19 = v17[2] - v16[2];
      *(float *)&v33 = *v17 - *v16;
      v34 = v18;
      v35 = v19;
      if ( *(char **)(v15 + 92) == "npc_combine_s" || sub_100D6240((_DWORD *)v15, "npc_combine_s") )
      {
        v24 = (float)(*(_DWORD *)(v15 + 220) + 25);
        sub_10248110((int)v25, (int)this, (int)this, v24, 4, 0);
        if ( (*(_DWORD *)(v15 + 252) & 0x800) != 0 )
          sub_100DAE60(v15);
        sub_10248690((float *)v25, (float *)&v33, (float *)(v15 + 580), 1.0);
        sub_100D9E70((int *)v15, (int)this, v25);
      }
      else
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 320))(v15)
          && (*(_DWORD *)(v15 + 256) & 0x4000) == 0
          && *(_BYTE *)(v15 + 306) != 8 )
        {
          sub_100F7A60((float *)v15, a4);
          v20 = (float *)sub_10019640(this);
          v21 = (float *)sub_10019640((_DWORD *)v15);
          v32[0] = *v21 - *v20;
          v32[1] = v21[1] - v20[1];
          v32[2] = v21[2] - v20[2];
          off_10689714();
          sub_10422540(v32, v26);
          sub_104222B0(v26, v31, v30, 0);
          v22 = *a5;
          v23 = a5[1];
          v29[0] = -v30[0] * v23 - v31[0] * v22;
          v29[1] = -v30[1] * v23 - v31[1] * v22;
          v29[2] = -v30[2] * v23 - v22 * v31[2];
          sub_100EA150(v15, v29);
        }
        sub_1023C380(this, (int)"NPC_Antlion.MeleeAttack", 0.0, 0);
      }
    }
  }
}
