char *__cdecl __unDName(char *a1, char *a2, int a3, int (__cdecl *a4)(_DWORD), int a5, unsigned __int16 a6)
{
  _BYTE v7[88]; // [esp+10h] [ebp-74h] BYREF
  char *v8; // [esp+68h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+6Ch] [ebp-18h]

  if ( !a4 || !_mtinitlocknum(5) )
    return 0;
  _lock(5);
  ms_exc.registration.TryLevel = 0;
  dword_10482840 = a4;
  dword_10482844 = a5;
  dword_10482850 = 0;
  dword_10482848 = 0;
  dword_1048284C = 0;
  UnDecorator::UnDecorator((UnDecorator *)v7, a1, a2, a3, 0, a6);
  v8 = UnDecorator::operator char *();
  unknown_libname_11((int)&dword_10482840);
  ms_exc.registration.TryLevel = -2;
  _unlock(5);
  return v8;
}
