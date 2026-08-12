void __userpurge sub_101EC700(float *a1@<ecx>, int a2@<esi>, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  const char **v8; // esi
  const char *v9; // eax
  const char *v10; // eax
  const char *v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // esi
  const char *v15; // eax
  int v16; // eax
  int (__thiscall *v17)(float *, _BYTE *, int); // edx
  float *v18; // eax
  int (__thiscall *v19)(float *); // edx
  float *v20; // eax
  int *v21; // eax
  int v22; // eax
  float v23; // [esp+A4h] [ebp-120h]
  float v24; // [esp+E0h] [ebp-E4h]
  _BYTE v25[60]; // [esp+108h] [ebp-BCh] BYREF
  const char *v26; // [esp+144h] [ebp-80h]
  float v27[3]; // [esp+15Ch] [ebp-68h] BYREF
  _BYTE v28[12]; // [esp+168h] [ebp-5Ch] BYREF
  int v29[8]; // [esp+174h] [ebp-50h] BYREF
  float v30[3]; // [esp+194h] [ebp-30h] BYREF
  float v31; // [esp+1A0h] [ebp-24h] BYREF
  float v32; // [esp+1A4h] [ebp-20h]
  float v33; // [esp+1A8h] [ebp-1Ch]
  float v34; // [esp+1ACh] [ebp-18h] BYREF
  float v35; // [esp+1B0h] [ebp-14h]
  float v36; // [esp+1B4h] [ebp-10h]
  int v37; // [esp+1B8h] [ebp-Ch] BYREF
  float v38; // [esp+1BCh] [ebp-8h]
  float v39; // [esp+1C0h] [ebp-4h]
  int savedregs; // [esp+1C4h] [ebp+0h] BYREF

  if ( *(_DWORD *)(*(_DWORD *)(dword_1069ABE0 + 28) + 48) )
  {
    switch ( a3 )
    {
      case 76:
        if ( dword_106BB4D4 )
        {
          v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 508))(a1);
          sub_102650F0((int)&v37, *(float *)(v4 + 4));
          v30[0] = *(float *)&v37 * 128.0 + a1[179];
          v30[1] = v38 * 128.0 + a1[180];
          v30[2] = 128.0 * v39 + a1[181];
          sub_100E3960((int)"NPC_human_grunt", v30, a1 + 182, 0);
        }
        else
        {
          dword_106BB4D4 = 1;
          Msg("You must now restart to use Grunt-o-matic.\n");
        }
        break;
      case 81:
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_cubemap", 0);
        break;
      case 82:
        sub_101E2C60((int)a1);
        break;
      case 83:
        sub_101E2DE0((int)a1);
        break;
      case 101:
        dword_106BB4D0 = 1;
        (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 1596))(a1, 1);
        sub_100C7A30(a1, 255, "Pistol", 0);
        sub_100C7A30(a1, 255, "AR2", 0);
        sub_100C7A30(a1, 5, "AR2AltFire", 0);
        sub_100C7A30(a1, 255, "SMG1", 0);
        sub_100C7A30(a1, 255, "Buckshot", 0);
        sub_100C7A30(a1, 3, "smg1_grenade", 0);
        sub_100C7A30(a1, 3, "rpg_round", 0);
        sub_100C7A30(a1, 5, "grenade", 0);
        sub_100C7A30(a1, 32, "357", 0);
        sub_100C7A30(a1, 16, "XBowBolt", 0);
        sub_100C7A30(a1, 5, "Hopwire", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_frag", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_melee_pipe", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_melee_axe", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_melee_wrench", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_melee_baton", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_crossbow", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_pistol_glock", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_pistol_socom", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_pistol_beretta", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_pistol_python", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(
          a1,
          "weapon_pistol_dualberetta",
          0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_smg_mp5", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_smg_mp7", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_smg_mp5_eod", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_shotgun_spas12", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_shotgun_m3", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_shotgun_m5", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_shotgun_xm1014", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_rifle_g36k", 0);
        (*(void (__thiscall **)(float *, const char *, _DWORD))(*(_DWORD *)a1 + 1440))(a1, "weapon_rifle_sniper", 0);
        if ( *((int *)a1 + 55) < 100 )
          (*(void (__thiscall **)(float *, _DWORD, _DWORD))(*(_DWORD *)a1 + 260))(a1, 25.0, 0);
        dword_106BB4D0 = 0;
        break;
      case 102:
        sub_101675C0((const char *)a1, a1, 1, 0);
        break;
      case 103:
        v5 = sub_101E93D0(a2, a1, 1);
        if ( v5 )
        {
          v6 = sub_100D7680(v5);
          if ( v6 )
            (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 2196))(v6);
        }
        break;
      case 106:
        v7 = sub_101E93D0(a2, a1, 1);
        v8 = (const char **)v7;
        if ( v7 )
        {
          v9 = *(const char **)(v7 + 92);
          if ( !v9 )
            v9 = String;
          Msg("Classname: %s", v9);
          if ( v8[65] )
            Msg(" - Name: %s\n", v8[65]);
          else
            Msg(" - Name: No Targetname\n");
          if ( v8[25] )
            Msg("Parent: %s\n", v8[25]);
          v10 = *(const char **)(*((int (__thiscall **)(const char **, int *))*v8 + 7))(v8, &a3);
          if ( !v10 )
            v10 = String;
          Msg("Model: %s\n", v10);
          v11 = v8[24];
          if ( v11 )
            Msg("Globalname: %s\n", v11);
        }
        break;
      case 107:
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
        (*(void (__thiscall **)(float *, int *))(*(_DWORD *)a1 + 504))(a1, &v37);
        sub_100F5A30(a1, (int)&v34, 0, 0);
        v31 = v34 * 1024.0 + *(float *)&v37;
        v32 = v35 * 1024.0 + v38;
        v33 = 1024.0 * v36 + v39;
        sub_1002A5F0((int)&savedregs, a2, (float *)&v37, &v31, 16395, (int)a1, 0, (int)v25);
        if ( v26 )
          Msg("Texture: %s\n", v26);
        break;
      case 108:
        v12 = sub_101E93D0(a2, a1, 1);
        if ( v12 )
        {
          v13 = sub_100D7680(v12);
          v14 = v13;
          if ( v13 )
          {
            v15 = *(const char **)(v13 + 92);
            if ( !v15 )
              v15 = String;
            Msg("Debugging %s (0x%x)\n", v15, v14);
            dword_10690430 = v14;
          }
        }
        break;
      case 110:
        if ( !*((_BYTE *)a1 + 2120) )
        {
          if ( *(_DWORD *)(dword_106984AC + 48) )
          {
            sub_1023C380((int)"Player.bullettimeend", 0.0, 0);
            v23 = *(float *)(dword_106B31C8 + 12) + 1.0;
            sub_100EC4A0((int *)a1, v23, (int)"BulletTimeEndContext");
          }
          else
          {
            sub_10110F90(&dword_106960A0);
            sub_10110F90(&dword_106984A8);
            sub_1023C380((int)"Player.bullettimestart", 0.0, 0);
            sub_10165630(v29, (int)a1, (int)"Player.bullettimeloop");
            sub_10219A50(v29);
            v16 = sub_1001F3C0(a1);
            sub_1023C580((int)v29, v16, (int)"Player.bullettimeloop", 0, 0.0, 0);
            std::_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>::~_Func_impl<std::_Callable_obj<_lambda_8b695f9820225e821433c25f6ed27cb8_,0>,std::allocator<std::_Func_class<Concurrency::task<bool>,bool>>,Concurrency::task<bool>,bool>(v29);
          }
        }
        break;
      case 195:
        sub_100E3960((int)"node_viewer_fly", a1 + 179, a1 + 182, 0);
        break;
      case 196:
        sub_100E3960((int)"node_viewer_large", a1 + 179, a1 + 182, 0);
        break;
      case 197:
        sub_100E3960((int)"node_viewer_human", a1 + 179, a1 + 182, 0);
        break;
      case 202:
        sub_100F5A30(a1, (int)&v31, 0, 0);
        v17 = *(int (__thiscall **)(float *, _BYTE *, int))(*(_DWORD *)a1 + 504);
        *(float *)&v37 = v31 * 128.0;
        v38 = v32 * 128.0;
        v39 = 128.0 * v33;
        v18 = (float *)v17(a1, v28, a2);
        v19 = *(int (__thiscall **)(float *))(*(_DWORD *)a1 + 504);
        v34 = *v18 + *(float *)&v37;
        v35 = v18[1] + v38;
        v36 = v18[2] + v39;
        v20 = (float *)v19(a1);
        sub_1002A5F0((int)&savedregs, a2, v20, v27, (int)&v34, 16395, (int)a1, 0);
        if ( 1.0 != v24 )
        {
          v21 = (int *)sub_101E9F50(0, (int)"bloodsplat");
          sub_101E5FE0(v21, a1);
        }
        break;
      case 203:
        v22 = sub_101E93D0(a2, a1, 1);
        if ( v22 )
          sub_1025FAC0(v22);
        break;
      default:
        return;
    }
  }
}
