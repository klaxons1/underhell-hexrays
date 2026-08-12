void __cdecl sub_101816D0(size_t NumOfElements, void *Base)
{
  int v2; // eax
  int v3; // eax
  int v4; // esi

  v2 = sub_10184390(4);
  if ( v2 )
    v3 = sub_10244D70(v2);
  else
    v3 = 0;
  dword_106B6618 = v3;
  sub_10244E30("func_wall", 10);
  sub_10244E30("scripted_sequence", 9);
  sub_10244E30("phys_hinge", 8);
  sub_10244E30("phys_ballsocket", 8);
  sub_10244E30("phys_slideconstraint", 8);
  sub_10244E30("phys_constraint", 8);
  sub_10244E30("phys_pulleyconstraint", 8);
  sub_10244E30("phys_lengthconstraint", 8);
  sub_10244E30("phys_ragdollconstraint", 8);
  sub_10244E30("info_mass_center", 8);
  sub_10244E30("trigger_vphysics_motion", 8);
  sub_10244E30("prop_physics", 7);
  sub_10244E30("prop_ragdoll", 7);
  qsort(Base, NumOfElements, 0x10u, (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
  v4 = dword_106B6618;
  if ( dword_106B6618 )
  {
    sub_10244E50(dword_106B6618);
    sub_10184660(v4);
  }
  dword_106B6618 = 0;
}
