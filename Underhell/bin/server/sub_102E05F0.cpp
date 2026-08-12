int __thiscall sub_102E05F0(float *this, int a2, int a3)
{
  int v4; // ebx
  int v5; // eax
  const char *v6; // eax
  _DWORD *v7; // esi
  char v8; // bl
  _DWORD *v9; // esi
  _DWORD *v10; // esi
  _DWORD *v11; // esi
  int v12; // esi
  int *v13; // eax
  int *v14; // esi
  float *v15; // eax
  float v17; // [esp+18h] [ebp-38h]
  _BYTE v18[12]; // [esp+28h] [ebp-28h] BYREF
  float v19[3]; // [esp+34h] [ebp-1Ch] BYREF
  float v20[3]; // [esp+40h] [ebp-10h] BYREF
  int v21; // [esp+4Ch] [ebp-4h]

  v4 = LODWORD(this[a2 + 1232]);
  v21 = v4;
  if ( v4 )
  {
    v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 508))(this);
    sub_10422220(v5, v18);
    v6 = (const char *)LODWORD(this[v4 + 1309]);
    if ( !v6 )
      v6 = String;
    v7 = (_DWORD *)sub_101811E0(v6, -1);
    if ( !v7 )
    {
      if ( (unsigned int)(v4 - 19) > 4 )
      {
        Warning("Unable to create entity?!\n");
      }
      else
      {
        a3 = 0;
        sub_10174030((_DWORD *)this + 1232, a2, &a3);
        v13 = (int *)sub_10174000(this);
        v14 = v13;
        if ( v13 )
        {
          sub_10035360(v13, 32);
          sub_10035360(v14, 16);
          sub_10023400((unsigned __int16 *)v14, 4);
          sub_1016AF10((int)v14);
          (*(void (__thiscall **)(int *, _DWORD, int))(*v14 + 140))(v14, 0, -1);
          sub_100E9550(v14, 6, 0, 0, 0);
          v15 = (float *)sub_10019640(this);
          sub_100E0D20((int)v14, v15);
          this[541] = NAN;
        }
        else
        {
          Warning("Attempted to remove Lit glowstick, but did not find one on player! \n");
        }
      }
      return (*(int (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
               dword_106B31D0,
               *((_DWORD *)this + 6),
               "UpdateInventory");
    }
    (*(void (__thiscall **)(float *, float *))(*(_DWORD *)this + 504))(this, v19);
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    v20[0] = 0.0;
    v20[1] = this[177] - 90.0;
    v20[2] = 0.0;
    sub_100E0D20((int)v7, v19);
    sub_100E0EA0((int)v7, v20);
    (*(void (__thiscall **)(_DWORD *))(*v7 + 96))(v7);
    if ( (_BYTE)a3 )
    {
      v17 = (float)v21;
      v8 = (*(int (__thiscall **)(_DWORD *, float *, float *, int, _DWORD))(*v7 + 64))(v7, this, this, 1, LODWORD(v17));
      if ( !v8 )
      {
        sub_1023C380(this, (int)"HL2Player.UseDeny", 0.0, 0);
        sub_100D6A00(v7);
      }
      if ( (unsigned int)(v21 - 14) <= 4 )
      {
        a3 = v21 + 5;
        sub_10174030((_DWORD *)this + 1232, a2, &a3);
        return (*(int (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
                 dword_106B31D0,
                 *((_DWORD *)this + 6),
                 "UpdateInventory");
      }
      if ( !v8 )
      {
LABEL_26:
        if ( (_BYTE)a3 )
          return (*(int (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
                   dword_106B31D0,
                   *((_DWORD *)this + 6),
                   "UpdateInventory");
      }
    }
    else
    {
      switch ( v4 )
      {
        case 1:
        case 7:
          goto LABEL_13;
        case 2:
        case 8:
          a3 = 1;
          sub_10031670(v7 + 212, &a3);
          break;
        case 3:
        case 4:
        case 5:
        case 6:
          goto LABEL_26;
        case 9:
          goto LABEL_19;
        case 10:
          a3 = 3;
          sub_10031670(v7 + 212, &a3);
          break;
        case 11:
          a3 = 4;
          sub_10031670(v7 + 212, &a3);
          break;
        case 12:
          a3 = 5;
          sub_10031670(v7 + 212, &a3);
          break;
        case 13:
          sub_100D6A00(v7);
          v12 = sub_101811E0("prop_physics", -1);
          (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v12 + 104))(v12, "models/PG_props/pg_obj/pg_flare.mdl");
          sub_100E0D20(v12, v19);
          sub_100E0EA0(v12, v20);
          (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 96))(v12);
          break;
        case 14:
          sub_100D6A00(v7);
          v7 = (_DWORD *)sub_101811E0("prop_physics", -1);
          (*(void (__thiscall **)(_DWORD *, const char *))(*v7 + 104))(v7, "models/PG_props/pg_obj/pg_glow_stick.mdl");
          sub_100E0D20((int)v7, v19);
          sub_100E0EA0((int)v7, v20);
          (*(void (__thiscall **)(_DWORD *))(*v7 + 96))(v7);
LABEL_13:
          a3 = 0;
          sub_10031670(v7 + 212, &a3);
          break;
        case 15:
          sub_100D6A00(v7);
          v7 = (_DWORD *)sub_101811E0("prop_physics", -1);
          (*(void (__thiscall **)(_DWORD *, const char *))(*v7 + 104))(v7, "models/PG_props/pg_obj/pg_glow_stick.mdl");
          sub_100E0D20((int)v7, v19);
          sub_100E0EA0((int)v7, v20);
          (*(void (__thiscall **)(_DWORD *))(*v7 + 96))(v7);
LABEL_19:
          a3 = 2;
          sub_10031670(v7 + 212, &a3);
          break;
        case 16:
          sub_100D6A00(v7);
          v9 = (_DWORD *)sub_101811E0("prop_physics", -1);
          (*(void (__thiscall **)(_DWORD *, const char *))(*v9 + 104))(v9, "models/PG_props/pg_obj/pg_glow_stick.mdl");
          sub_100E0D20((int)v9, v19);
          sub_100E0EA0((int)v9, v20);
          (*(void (__thiscall **)(_DWORD *))(*v9 + 96))(v9);
          a3 = 4;
          sub_10031670(v9 + 212, &a3);
          break;
        case 17:
          sub_100D6A00(v7);
          v10 = (_DWORD *)sub_101811E0("prop_physics", -1);
          (*(void (__thiscall **)(_DWORD *, const char *))(*v10 + 104))(v10, "models/PG_props/pg_obj/pg_glow_stick.mdl");
          sub_100E0D20((int)v10, v19);
          sub_100E0EA0((int)v10, v20);
          (*(void (__thiscall **)(_DWORD *))(*v10 + 96))(v10);
          a3 = 6;
          sub_10031670(v10 + 212, &a3);
          break;
        case 18:
          sub_100D6A00(v7);
          v11 = (_DWORD *)sub_101811E0("prop_physics", -1);
          (*(void (__thiscall **)(_DWORD *, const char *))(*v11 + 104))(v11, "models/PG_props/pg_obj/pg_glow_stick.mdl");
          sub_100E0D20((int)v11, v19);
          sub_100E0EA0((int)v11, v20);
          (*(void (__thiscall **)(_DWORD *))(*v11 + 96))(v11);
          a3 = 8;
          sub_10031670(v11 + 212, &a3);
          break;
        default:
          break;
      }
    }
    a3 = 0;
    sub_10174030((_DWORD *)this + 1232, a2, &a3);
    return (*(int (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
             dword_106B31D0,
             *((_DWORD *)this + 6),
             "UpdateInventory");
  }
  return Warning("No Entity\n");
}
