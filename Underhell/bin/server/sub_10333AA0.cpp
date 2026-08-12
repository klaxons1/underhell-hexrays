const char **__thiscall sub_10333AA0(_DWORD *this, const char **a2)
{
  const char *v2; // esi
  const char *v3; // eax
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  const char **result; // eax

  v2 = (const char *)this[115];
  v3 = v2;
  if ( !v2 )
    v3 = String;
  if ( !sub_104292D0(v3, "models/c17_", 11) )
    goto LABEL_14;
  v4 = v2;
  if ( !v2 )
    v4 = String;
  if ( !sub_104292D0(v4, "models/male", 11) )
    goto LABEL_14;
  v5 = v2;
  if ( !v2 )
    v5 = String;
  if ( !sub_104292D0(v5, "models/female", 13) )
    goto LABEL_14;
  v6 = v2;
  if ( !v2 )
    v6 = String;
  if ( sub_104292D0(v6, "models/citizen", 14) )
  {
    result = a2;
    *a2 = v2;
  }
  else
  {
LABEL_14:
    result = a2;
    *a2 = 0;
  }
  return result;
}
