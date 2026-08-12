__int16 __usercall sub_1024C030@<ax>(int a1@<ecx>, int a2@<edi>)
{
  const char *v3; // eax
  char *v4; // eax

  v3 = *(const char **)(a1 + 852);
  if ( !v3 )
    v3 = String;
  sub_100E8220(a2, v3);
  v4 = *(char **)(a1 + 804);
  if ( !v4 )
    v4 = (char *)String;
  return sub_1023B8B0(v4);
}
