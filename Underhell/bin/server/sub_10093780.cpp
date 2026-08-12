int __stdcall sub_10093780(char *a1)
{
  int result; // eax
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  result = 0;
  if ( a1 )
  {
    result = sub_10184390(a1);
    if ( !result )
    {
      a1 = 0;
      std::exception::exception((std::exception *)pExceptionObject, (const char *const *)&a1);
      pExceptionObject[0] = &std::bad_alloc::`vftable';
      _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
  }
  return result;
}
