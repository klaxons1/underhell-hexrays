int __thiscall sub_101A8A30(_DWORD *this)
{
  unsigned int v2; // eax
  int result; // eax
  const char *v4; // eax
  char *v5; // eax
  _DWORD *v6; // eax
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  const char *v10; // ecx
  const char *v11; // eax
  int v12; // eax
  int v13; // eax
  char v14; // al
  _DWORD *v15; // ecx
  const char *v16; // ecx
  const char *v17; // eax
  int v18; // eax
  float *v19; // eax

  sub_100422B0(this);
  v2 = this[908];
  if ( v2 == -1
    || (result = v2 >> 12, off_1061BE18[4 * (this[908] & 0xFFF) + 2] != result)
    || !off_1061BE18[4 * (this[908] & 0xFFF) + 1] )
  {
    if ( this[906] )
    {
      v5 = (char *)this[906];
      if ( !v5 )
        v5 = (char *)String;
      v6 = sub_1012BF20(&dword_1069E3E0, 0, v5, 0, 0, 0, 0);
      if ( v6 )
        this[908] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v6 + 8))(v6);
      else
        this[908] = -1;
      v7 = this[908];
      if ( v7 != -1
        && (v8 = &off_1061BE18[4 * (this[908] & 0xFFF) + 1],
            v9 = v7 >> 12,
            off_1061BE18[4 * (this[908] & 0xFFF) + 2] == v9)
        && *v8 )
      {
        if ( off_1061BE18[4 * (this[908] & 0xFFF) + 2] == v9 )
          v12 = *v8;
        else
          v12 = 0;
        v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 340))(v12);
        this[907] = v13;
        v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 148))(v13);
        v15 = this + 908;
        if ( v14 )
        {
          v18 = sub_1026A890(v15);
          v19 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 576))(v18);
          sub_100E0D20((int)this, v19);
          (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)this[907] + 152))(this[907], this);
          return sub_101A8420((int)this);
        }
        else
        {
          v16 = *(const char **)(sub_1026A890(v15) + 260);
          if ( !v16 )
            v16 = String;
          v17 = (const char *)this[65];
          if ( !v17 )
            v17 = String;
          Warning("npc_vehicledriver %s doesn't know how to drive vehicle %s.\n", v17, v16);
          return sub_1025FAC0(this);
        }
      }
      else
      {
        v10 = (const char *)this[906];
        if ( !v10 )
          v10 = String;
        v11 = (const char *)this[65];
        if ( !v11 )
          v11 = String;
        Warning("npc_vehicledriver %s couldn't find his vehicle named %s.\n", v11, v10);
        return sub_1025FAC0(this);
      }
    }
    else
    {
      v4 = (const char *)this[65];
      if ( !v4 )
        v4 = String;
      Warning("npc_vehicledriver %s has no vehicle to drive.\n", v4);
      return sub_1025FAC0(this);
    }
  }
  return result;
}
