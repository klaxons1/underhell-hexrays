void sub_102EE550()
{
  unsigned int i; // esi
  unsigned int j; // esi

  for ( i = 0; i < 8; i += 4 )
    sub_10260680(off_10668E28[i], 0);
  for ( j = 0; j < 40; j += 4 )
    sub_10260680(off_10668E48[j], 0);
  sub_10260680("item_battery_pack", 0);
  sub_10260680("item_glowstick", 0);
  sub_10260680("item_flarepack", 0);
  sub_10260680("item_box_pistol_ammo", 0);
  sub_10260680("item_ammo_buckshot", 0);
  sub_10260680("item_box_smg1_ammo", 0);
}
