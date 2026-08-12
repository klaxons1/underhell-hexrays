void __thiscall sub_102FCBD0(float *this)
{
  int v2; // edx
  float *v3; // eax
  int v4; // edx
  int (__thiscall *v5)(float *); // eax
  float *v6; // eax
  double v7; // st7
  float v8; // [esp+14h] [ebp-64h] BYREF
  float v9; // [esp+18h] [ebp-60h]
  float v10; // [esp+1Ch] [ebp-5Ch]
  float v11; // [esp+20h] [ebp-58h]
  int v12[8]; // [esp+24h] [ebp-54h] BYREF
  int v13; // [esp+44h] [ebp-34h]
  int v14; // [esp+48h] [ebp-30h]
  float v15; // [esp+4Ch] [ebp-2Ch]
  float v16; // [esp+50h] [ebp-28h]
  float v17; // [esp+54h] [ebp-24h]
  int v18; // [esp+58h] [ebp-20h]
  __int16 v19; // [esp+5Ch] [ebp-1Ch]
  int v20; // [esp+60h] [ebp-18h]
  int v21; // [esp+64h] [ebp-14h]
  int v22; // [esp+68h] [ebp-10h]
  char v23; // [esp+6Ch] [ebp-Ch]
  float v24; // [esp+74h] [ebp-4h]

  if ( *((_BYTE *)this + 447) >= 2u )
  {
    v4 = *(_DWORD *)this;
    v8 = 0.0;
    v5 = *(int (__thiscall **)(float *))(v4 + 576);
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0.0;
    *(float *)v12 = 0.0;
    v19 = 0;
    *(float *)&v12[1] = 0.0;
    *(float *)&v12[2] = 0.0;
    v13 = 0;
    *(float *)&v12[3] = 0.0;
    v14 = 0;
    *(float *)&v12[4] = 0.0;
    v18 = 0;
    *(float *)&v12[5] = 0.0;
    v20 = 0;
    *(float *)&v12[6] = 0.0;
    v21 = 0;
    *(float *)&v12[7] = 0.0;
    v22 = 0;
    v23 = 0;
    v15 = 1.0;
    v16 = 0.0;
    v17 = 0.0;
    v6 = (float *)v5(this);
    v8 = *v6;
    v9 = v6[1];
    v7 = v6[2];
    v13 = 1065;
    v10 = v7;
    v16 = 100.0;
    v15 = 128.0;
    sub_1028E890((int)"WaterSurfaceExplosion", (int)&v8);
  }
  else
  {
    sub_10248110((int)v12, (int)this, (int)this, *(float *)(dword_106E2B6C + 44), 134348800, 0);
    v2 = *((_DWORD *)this + 63) >> 11;
    v24 = *(float *)(dword_106E2C44 + 44);
    if ( (v2 & 1) != 0 )
      sub_100DAE60((int)this);
    sub_100C9F20((int)v12, (int)(this + 145), v24, 0, (int)this);
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    v3 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
    sub_101AB000("antlion_gib_02", *v3, v3[1], v3[2], this[176], this[177], this[178], 0);
  }
  sub_1023C380(this, (int)"NPC_Antlion.PoisonBurstExplode", 0.0, 0);
}
