char *__thiscall sub_101CB0F0(_DWORD *this, int a2)
{
  char *result; // eax
  char *v4; // esi

  result = (char *)sub_100BCD70(a2);
  if ( this[1264] )
  {
    sub_10067EB0(a2, (void *)"classname");
    v4 = (char *)this[1264];
    if ( !v4 )
      v4 = (char *)String;
    sub_10067DE0(a2, (void *)"classname", v4, 1.0);
    return sub_10067DE0(a2, (void *)"ragdoll", "1", 1.0);
  }
  return result;
}
