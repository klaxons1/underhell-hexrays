int __cdecl __RTtypeid(_DWORD *a1)
{
  int result; // eax
  _BYTE pExceptionObject[12]; // [esp+10h] [ebp-24h] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  if ( !a1 )
  {
    sub_1028EDCF("Attempted a typeid of NULL pointer!");
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_typeid_std__);
  }
  ms_exc.registration.TryLevel = 0;
  result = *(_DWORD *)(*(_DWORD *)(*a1 - 4) + 12);
  if ( !result )
  {
    sub_1028EDED("Bad read pointer - no RTTI data!");
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AV__non_rtti_object_std__);
  }
  ms_exc.registration.TryLevel = -2;
  return result;
}
