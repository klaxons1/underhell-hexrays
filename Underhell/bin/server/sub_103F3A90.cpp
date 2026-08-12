_DWORD *__cdecl sub_103F3A90(int a1, int a2)
{
  int v2; // eax
  _DWORD *v3; // esi

  v2 = sub_100D6340(1724);
  v3 = (_DWORD *)v2;
  if ( v2 )
  {
    sub_10268640(v2);
    *v3 = &CPropVehicleViewController::`vftable';
    v3[280] = &CPropVehicleViewController::`vftable';
    v3[371] = &CPropVehicleViewController::`vftable';
    v3[372] = &CPropVehicleViewController::`vftable';
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
