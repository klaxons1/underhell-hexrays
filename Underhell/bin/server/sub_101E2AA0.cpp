_DWORD *__thiscall sub_101E2AA0(_DWORD *this)
{
  void (*v1)(void); // edx
  _DWORD *result; // eax
  int i; // esi
  const char *v4; // eax

  v1 = *(void (**)(void))(*this + 1248);
  this[852] |= 0xC0u;
  this[992] = -1;
  *((_BYTE *)this + 3962) = 0;
  *((_BYTE *)this + 3960) = 1;
  v1();
  result = sub_1012BC90(&dword_1069E3E0, 0, "ambient_generic");
  for ( i = (int)result; result; i = (int)result )
  {
    if ( *(_BYTE *)(i + 912) )
    {
      v4 = *(const char **)(i + 920);
      if ( !v4 )
        v4 = String;
      if ( strstr(v4, "mp3") )
        sub_102386F0(1);
      sub_102386F0(1);
    }
    result = sub_1012BC90(&dword_1069E3E0, i, "ambient_generic");
  }
  return result;
}
