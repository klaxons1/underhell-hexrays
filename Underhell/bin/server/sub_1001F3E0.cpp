char __thiscall sub_1001F3E0(_DWORD *this, const char *a2)
{
  const char *v2; // eax

  v2 = a2;
  if ( (const char *)this[23] == a2 )
    return 1;
  if ( !a2 )
    v2 = String;
  return sub_100D6240(v2);
}
