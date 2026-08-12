int __cdecl sub_100D7970(void *a1, const void *a2, const void *a3)
{
  char String1[512]; // [esp+8h] [ebp-400h] BYREF
  char String2[512]; // [esp+208h] [ebp-200h] BYREF

  (*(void (__thiscall **)(int, const void *, char *, int))(*(_DWORD *)dword_10700A38 + 144))(
    dword_10700A38,
    a2,
    String1,
    512);
  (*(void (__thiscall **)(int, const void *, char *, int))(*(_DWORD *)dword_10700A38 + 144))(
    dword_10700A38,
    a3,
    String2,
    512);
  if ( _stricmp(String1, String2) < 0 )
    return -1;
  (*(void (__thiscall **)(int, const void *, char *, int))(*(_DWORD *)dword_10700A38 + 144))(
    dword_10700A38,
    a3,
    String2,
    512);
  (*(void (__thiscall **)(int, const void *, char *, int))(*(_DWORD *)dword_10700A38 + 144))(
    dword_10700A38,
    a2,
    String1,
    512);
  return _stricmp(String2, String1) < 0;
}
