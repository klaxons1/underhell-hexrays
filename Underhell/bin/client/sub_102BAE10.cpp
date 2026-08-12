_DWORD *sub_102BAE10()
{
  _DWORD *result; // eax
  int i; // ecx

  result = &unk_104361F0;
  for ( i = 10; i >= 0; --i )
  {
    *result = &CPhysObjSaveRestoreOps::`vftable';
    result += 2;
  }
  return result;
}
