_DWORD *__thiscall sub_102DE310(char *this, int a2)
{
  char *v3; // ebx
  int v4; // esi
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // ebx
  const char *v8; // eax
  _DWORD *result; // eax
  _DWORD *v10; // esi
  int v11; // ecx
  int v12; // edx
  double v13; // st6
  double v14; // st7
  __int16 v15; // ax
  int *v16; // ecx
  _DWORD *v17; // esi
  _DWORD *v18; // esi
  _DWORD *v19; // esi
  _DWORD *v20; // esi
  _DWORD *v21; // esi
  int v22; // esi
  float v23[3]; // [esp+Ch] [ebp-30h] BYREF
  float v24; // [esp+18h] [ebp-24h]
  float v25; // [esp+1Ch] [ebp-20h]
  float v26; // [esp+20h] [ebp-1Ch]
  float v27[3]; // [esp+24h] [ebp-18h] BYREF
  float v28[3]; // [esp+30h] [ebp-Ch] BYREF

  v3 = this + 4928;
  v4 = 0;
  v5 = this + 4928;
  while ( *v5 )
  {
    ++v4;
    ++v5;
    if ( v4 >= 28 )
    {
      v6 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 508))(this);
      sub_10422220(v6, v23);
      v7 = a2;
      v8 = *(const char **)&this[4 * a2 + 5236];
      if ( !v8 )
        v8 = String;
      result = (_DWORD *)sub_101811E0(v8, -1);
      v10 = result;
      if ( result )
      {
        v11 = *((_DWORD *)this + 63) >> 11;
        v24 = v23[0] * 56.0;
        v25 = v23[1] * 56.0;
        v26 = 56.0 * v23[2];
        if ( (v11 & 1) != 0 )
          sub_100DAE60((int)this);
        v12 = *((_DWORD *)this + 63) >> 11;
        v13 = *((float *)this + 146) + v25;
        v14 = *((float *)this + 147) + v26;
        v28[0] = *((float *)this + 145) + v24;
        v28[1] = v13;
        v28[2] = v14 + 64.0;
        if ( (v12 & 1) != 0 )
          sub_100DAE60((int)this);
        v27[0] = 0.0;
        v27[1] = *((float *)this + 177) - 90.0;
        v27[2] = 0.0;
        sub_100E0D20((int)v10, v28);
        sub_100E0EA0((int)v10, v27);
        (*(void (__thiscall **)(_DWORD *))(*v10 + 96))(v10);
        result = (_DWORD *)(v7 - 12);
        switch ( v7 )
        {
          case 12:
            a2 = 5;
            result = sub_10031670(v10 + 212, &a2);
            break;
          case 13:
            sub_100D6A00(v10);
            v22 = sub_101811E0("prop_physics", -1);
            (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v22 + 104))(
              v22,
              "models/PG_props/pg_obj/pg_flare.mdl");
            sub_100E0D20(v22, v28);
            sub_100E0EA0(v22, v27);
            result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v22 + 96))(v22);
            break;
          case 14:
            sub_100D6A00(v10);
            v17 = (_DWORD *)sub_101811E0("prop_physics", -1);
            (*(void (__thiscall **)(_DWORD *, const char *))(*v17 + 104))(
              v17,
              "models/PG_props/pg_obj/pg_glow_stick.mdl");
            sub_100E0D20((int)v17, v28);
            sub_100E0EA0((int)v17, v27);
            (*(void (__thiscall **)(_DWORD *))(*v17 + 96))(v17);
            a2 = 0;
            result = sub_10031670(v17 + 212, &a2);
            break;
          case 15:
            sub_100D6A00(v10);
            v18 = (_DWORD *)sub_101811E0("prop_physics", -1);
            (*(void (__thiscall **)(_DWORD *, const char *))(*v18 + 104))(
              v18,
              "models/PG_props/pg_obj/pg_glow_stick.mdl");
            sub_100E0D20((int)v18, v28);
            sub_100E0EA0((int)v18, v27);
            (*(void (__thiscall **)(_DWORD *))(*v18 + 96))(v18);
            a2 = 2;
            result = sub_10031670(v18 + 212, &a2);
            break;
          case 16:
            sub_100D6A00(v10);
            v19 = (_DWORD *)sub_101811E0("prop_physics", -1);
            (*(void (__thiscall **)(_DWORD *, const char *))(*v19 + 104))(
              v19,
              "models/PG_props/pg_obj/pg_glow_stick.mdl");
            sub_100E0D20((int)v19, v28);
            sub_100E0EA0((int)v19, v27);
            (*(void (__thiscall **)(_DWORD *))(*v19 + 96))(v19);
            a2 = 4;
            result = sub_10031670(v19 + 212, &a2);
            break;
          case 17:
            sub_100D6A00(v10);
            v20 = (_DWORD *)sub_101811E0("prop_physics", -1);
            (*(void (__thiscall **)(_DWORD *, const char *))(*v20 + 104))(
              v20,
              "models/PG_props/pg_obj/pg_glow_stick.mdl");
            sub_100E0D20((int)v20, v28);
            sub_100E0EA0((int)v20, v27);
            (*(void (__thiscall **)(_DWORD *))(*v20 + 96))(v20);
            a2 = 6;
            result = sub_10031670(v20 + 212, &a2);
            break;
          case 18:
            sub_100D6A00(v10);
            v21 = (_DWORD *)sub_101811E0("prop_physics", -1);
            (*(void (__thiscall **)(_DWORD *, const char *))(*v21 + 104))(
              v21,
              "models/PG_props/pg_obj/pg_glow_stick.mdl");
            sub_100E0D20((int)v21, v28);
            sub_100E0EA0((int)v21, v27);
            (*(void (__thiscall **)(_DWORD *))(*v21 + 96))(v21);
            a2 = 8;
            result = sub_10031670(v21 + 212, &a2);
            break;
          default:
            return result;
        }
      }
      return result;
    }
  }
  if ( *(_DWORD *)&v3[4 * v4] != a2 )
  {
    v15 = (__int16)this;
    if ( this[84] )
    {
      this[88] |= 1u;
    }
    else
    {
      v16 = (int *)*((_DWORD *)this + 6);
      if ( v16 )
        sub_100194B0(v16, (_WORD)v3 + 4 * v4 - v15);
    }
    *(_DWORD *)&v3[4 * v4] = a2;
  }
  return (_DWORD *)(*(int (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
                     dword_106B31D0,
                     *((_DWORD *)this + 6),
                     "UpdateInventory");
}
