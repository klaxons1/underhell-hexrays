unsigned int __thiscall sub_103C1F00(int this, int a2)
{
  int v3; // eax
  unsigned int result; // eax
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  int (__thiscall *v11)(int); // edx
  float *v12; // eax
  double v13; // st7
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  char *v17; // eax
  unsigned int v18; // esi
  int *v19; // eax
  float v20; // [esp+0h] [ebp-30h]
  float v21[3]; // [esp+Ch] [ebp-24h] BYREF
  float v22[3]; // [esp+18h] [ebp-18h] BYREF
  float v23; // [esp+24h] [ebp-Ch]
  float v24; // [esp+28h] [ebp-8h]
  float v25; // [esp+2Ch] [ebp-4h]

  *(float *)(this + 3740) = *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 3756) = *(float *)(dword_106B31C8 + 12);
  *(_BYTE *)(this + 3737) = 1;
  sub_100EC3F0((_DWORD *)this, (int)sub_102B2840, 0.0, 0);
  v20 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v20, 0);
  v3 = sub_101811E0("info_particle_system", -1);
  if ( v3 )
    *(_DWORD *)(this + 3820) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  else
    *(_DWORD *)(this + 3820) = -1;
  result = *(_DWORD *)(this + 3820);
  if ( result != -1 )
  {
    result >>= 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 3820) & 0xFFF) + 2] == result )
    {
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 3820) & 0xFFF) + 1] )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD, float *))(*(_DWORD *)this + 528))(this, 0, 0, v22);
        v5 = *(_DWORD *)(this + 3820);
        if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3820) & 0xFFF) + 2] != v5 >> 12 )
          v6 = 0;
        else
          v6 = off_1061BE18[4 * (*(_DWORD *)(this + 3820) & 0xFFF) + 1];
        (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v6 + 128))(v6, "start_active", "1");
        v7 = *(_DWORD *)(this + 3820);
        if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3820) & 0xFFF) + 2] != v7 >> 12 )
          v8 = 0;
        else
          v8 = off_1061BE18[4 * (*(_DWORD *)(this + 3820) & 0xFFF) + 1];
        (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v8 + 128))(
          v8,
          "effect_name",
          "explosion_turret_fizzle");
        v9 = *(_DWORD *)(this + 3820);
        if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3820) & 0xFFF) + 2] != v9 >> 12 )
          v10 = 0;
        else
          v10 = off_1061BE18[4 * (*(_DWORD *)(this + 3820) & 0xFFF) + 1];
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v10 + 140))(v10, this, -1);
        v11 = *(int (__thiscall **)(int))(*(_DWORD *)this + 576);
        v23 = v22[0] * 12.0;
        v24 = v22[1] * 12.0;
        v25 = 12.0 * v22[2];
        v12 = (float *)v11(this);
        v21[0] = *v12 + v23;
        v21[1] = v12[1] + v24;
        v13 = v12[2];
        v14 = *(_DWORD *)(this + 3820);
        v21[2] = v13 + v25;
        if ( v14 == -1 || off_1061BE18[4 * (v14 & 0xFFF) + 2] != v14 >> 12 )
          v15 = 0;
        else
          v15 = off_1061BE18[4 * (v14 & 0xFFF) + 1];
        sub_100E0D20(v15, v21);
        v16 = *(_DWORD *)(this + 3820);
        if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3820) & 0xFFF) + 2] != v16 >> 12 )
          v17 = 0;
        else
          v17 = (char *)off_1061BE18[4 * (*(_DWORD *)(this + 3820) & 0xFFF) + 1];
        sub_10260750(v17);
        v18 = *(_DWORD *)(this + 3820);
        if ( v18 == -1 || off_1061BE18[4 * (v18 & 0xFFF) + 2] != v18 >> 12 )
        {
          return (*(int (__thiscall **)(_DWORD))(MEMORY[0] + 136))(0);
        }
        else
        {
          v19 = &off_1061BE18[4 * (v18 & 0xFFF) + 1];
          return (*(int (__thiscall **)(int))(*(_DWORD *)*v19 + 136))(*v19);
        }
      }
    }
  }
  return result;
}
