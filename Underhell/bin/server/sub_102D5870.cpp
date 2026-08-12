void __thiscall sub_102D5870(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int *v7; // ecx
  int v8; // ecx
  int *v9; // ecx
  int *v10; // ecx
  float v11[3]; // [esp+20h] [ebp-1Ch] BYREF
  float v12[3]; // [esp+2Ch] [ebp-10h] BYREF
  float v13; // [esp+38h] [ebp-4h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/Weapons/w_grenade.mdl");
  v2 = *(_DWORD *)(this + 412);
  if ( v2 != -1
    && (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 1],
        v4 = v2 >> 12,
        off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 2] == v4)
    && *v3
    && (off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 2] != v4 ? (v5 = 0) : (v5 = *v3),
        (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5)) )
  {
    v13 = *(float *)(dword_106DE894 + 44);
    sub_100F33E0((float *)(this + 2128), &v13);
    v13 = *(float *)(dword_106DE924 + 44);
    sub_100F3430((float *)(this + 2112), &v13);
  }
  else
  {
    v6 = *(_DWORD *)(this + 2128);
    v13 = *(float *)(dword_106DE8DC + 44);
    if ( v6 != LODWORD(v13) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(this + 24);
        if ( v7 )
          sub_100194B0(v7, 2128);
      }
      *(float *)(this + 2128) = v13;
    }
    v8 = *(_DWORD *)(this + 2112);
    v13 = *(float *)(dword_106DE924 + 44);
    if ( v8 != LODWORD(v13) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v9 = *(int **)(this + 24);
        if ( v9 )
          sub_100194B0(v9, 2112);
      }
      *(float *)(this + 2112) = v13;
    }
  }
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 2;
  }
  if ( *(_DWORD *)(this + 220) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 1;
  }
  v12[0] = 4.0;
  v12[1] = 4.0;
  v12[2] = 4.0;
  v11[0] = -4.0;
  v11[1] = -4.0;
  v11[2] = -4.0;
  sub_100D69D0((void *)this, (int)v11, (int)v12);
  sub_100EBE30(this, 11);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
  sub_1023C380((_DWORD *)this, (int)"Grenade.Blip", 0.0, 0);
  *(float *)(this + 2144) = *(float *)(dword_106B31C8 + 12) + 1.0;
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  v13 = 9.4450201e21;
  *(_WORD *)(this + 2149) = 0;
  if ( *(_DWORD *)(this + 771) != 1677721855 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v10 = *(int **)(this + 24);
      if ( v10 )
        sub_100194B0(v10, 771);
    }
    *(_DWORD *)(this + 771) = 1677721855;
  }
  *(_DWORD *)(this + 1708) = -1;
  *(_DWORD *)(this + 1740) = 0;
  *(_BYTE *)(this + 1713) = 0;
  j_nullsub_4((void *)this);
  sub_100E88A0((_DWORD *)this, 0);
}
