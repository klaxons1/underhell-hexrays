int __thiscall sub_1024F980(_DWORD *this)
{
  float *v2; // esi
  char *v3; // eax
  float *v4; // eax
  const char *v6; // eax

  v2 = 0;
  while ( 1 )
  {
    v3 = (char *)this[53];
    if ( !v3 )
      v3 = (char *)String;
    v4 = (float *)sub_1012BF20(&dword_1069E3E0, (int)v2, v3, 0, 0, 0, 0);
    v2 = v4;
    if ( !v4 )
      break;
    if ( *((char **)v4 + 23) == "func_tracktrain" || sub_100D6240(v4, "func_tracktrain") )
    {
      sub_1024F7D0(v2, (int)this);
      return sub_100EC3F0(this, 0, 0.0, 0);
    }
  }
  v6 = (const char *)this[53];
  if ( !v6 )
    v6 = String;
  return Msg("No train %s\n", v6);
}
