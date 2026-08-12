int __thiscall sub_1007A420(_DWORD *this)
{
  int i; // esi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int result; // eax
  int v5; // [esp+4h] [ebp-4h]
  int v6; // [esp+4h] [ebp-4h]
  int v7; // [esp+4h] [ebp-4h]
  int v8; // [esp+4h] [ebp-4h]
  int v9; // [esp+4h] [ebp-4h]
  int v10; // [esp+4h] [ebp-4h]
  int v11; // [esp+4h] [ebp-4h]
  int v12; // [esp+4h] [ebp-4h]
  int v13; // [esp+4h] [ebp-4h]
  int v14; // [esp+4h] [ebp-4h]
  int v15; // [esp+4h] [ebp-4h]
  int v16; // [esp+4h] [ebp-4h]
  int v17; // [esp+4h] [ebp-4h]
  int v18; // [esp+4h] [ebp-4h]
  int v19; // [esp+4h] [ebp-4h]
  int v20; // [esp+4h] [ebp-4h]
  int v21; // [esp+4h] [ebp-4h]
  int v22; // [esp+4h] [ebp-4h]
  int v23; // [esp+4h] [ebp-4h]
  int v24; // [esp+4h] [ebp-4h]
  int v25; // [esp+4h] [ebp-4h]

  for ( i = 0; i < this[4]; ++i )
  {
    v3 = *(void (__thiscall ****)(_DWORD, int))(this[1] + 4 * i);
    (**v3)(v3, 1);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 264))(dword_1047C96C);
  sub_100F0920("effects/fleck_wood1");
  dword_1043DEF8 = sub_100F0950(v5);
  sub_100F0920("effects/fleck_wood2");
  dword_1043DEFC = sub_100F0950(v6);
  sub_100F0920("effects/fleck_cement1");
  dword_1043DF00[0] = sub_100F0950(v7);
  sub_100F0920("effects/fleck_cement2");
  dword_1043DF04 = sub_100F0950(v8);
  sub_100F0920("effects/fleck_antlion1");
  dword_1043DF08 = sub_100F0950(v9);
  sub_100F0920("effects/fleck_antlion2");
  dword_1043DF0C = sub_100F0950(v10);
  sub_100F0920("effects/fleck_glass1");
  dword_1043DF10 = sub_100F0950(v11);
  sub_100F0920("effects/fleck_glass2");
  dword_1043DF14 = sub_100F0950(v12);
  sub_100F0920("effects/fleck_tile1");
  dword_1043DF18 = sub_100F0950(v13);
  sub_100F0920("effects/fleck_tile2");
  dword_1043DF1C = sub_100F0950(v14);
  sub_100F0920("particle/particle_smokegrenade");
  dword_1043DF20[0] = sub_100F0950(v15);
  sub_100F0920("particle/particle_noisesphere");
  dword_1043DF24 = sub_100F0950(v16);
  sub_100F0920("effects/blood");
  dword_1043DF28 = sub_100F0950(v17);
  sub_100F0920("effects/blood2");
  dword_1043DF2C = sub_100F0950(v18);
  sub_100F0920("effects/muzzleflash1");
  dword_1043DF30 = sub_100F0950(v19);
  sub_100F0920("effects/muzzleflash2");
  dword_1043DF34 = sub_100F0950(v20);
  sub_100F0920("effects/muzzleflash3");
  dword_1043DF38 = sub_100F0950(v21);
  sub_100F0920("effects/muzzleflash4");
  dword_1043DF3C = sub_100F0950(v22);
  sub_100F0920("effects/combinemuzzle1");
  dword_1043DF40 = sub_100F0950(v23);
  sub_100F0920("effects/combinemuzzle2");
  dword_1043DF44 = sub_100F0950(v24);
  sub_100F0920("effects/strider_muzzle");
  result = sub_100F0950(v25);
  dword_1043DF48 = result;
  return result;
}
