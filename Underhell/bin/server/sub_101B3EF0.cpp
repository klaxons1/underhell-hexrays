int __stdcall sub_101B3EF0(int a1)
{
  int v1; // eax
  int v2; // esi

  v1 = sub_100D6340(896);
  v2 = v1;
  if ( v1 )
  {
    sub_101B2680(v1);
    *(_DWORD *)v2 = &CRagdollConstraint::`vftable';
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
