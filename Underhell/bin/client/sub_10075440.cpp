// bad sp value at call has been detected, the output may be wrong!
void __thiscall sub_10075440(void *this)
{
  int i; // eax
  void *v2; // [esp+0h] [ebp-4h] BYREF

  v2 = this;
  CVProfile::EnterScope(g_VProfCurrentProfile, "Client SimulateEntities", 0, "Client Simulation", 0, 4);
  sub_1007A160(&off_103DCCF8);
  sub_1007AA40(&v2);
  for ( i = sub_1007AE80(&v2); i; i = sub_1007AE80(&v2) )
    (*(void (__thiscall **)(int))(*(_DWORD *)i + 328))(i);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
