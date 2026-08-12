_DWORD *sub_1045C460()
{
  _DWORD *result; // eax
  int i; // ecx

  result = &unk_106BAF90;
  for ( i = 10; i >= 0; --i )
  {
    *result = &CPhysObjSaveRestoreOps::`vftable';
    result += 2;
  }
  return result;
}
