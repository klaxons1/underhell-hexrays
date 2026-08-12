double __usercall _CIasin@<st0>(double x@<st0>)
{
  int v1; // eax
  bool v2; // zf
  int v3; // [esp+0h] [ebp-Ch]
  char v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+4h] [ebp-8h]

  if ( !dword_1048ACE4 )
    goto __CIasin_default;
  v1 = _mm_getcsr() & 0x7F80;
  v2 = v1 == 8064;
  if ( v1 == 8064 )
    v2 = (v4 & 0x7F) == 127;
  if ( v2 )
  {
    _CIasin_pentium4();
  }
  else
  {
__CIasin_default:
    _checkTOS_withFB(LODWORD(x), HIDWORD(*(unsigned __int64 *)&x));
    start_2(v3, v5);
  }
  return x;
}
