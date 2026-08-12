const char *__thiscall sub_10427820(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // eax

  v2 = this[35];
  if ( a2 == 0xFFFF )
    return "Unknown";
  if ( a2 >= *(unsigned __int16 *)(v2 + 38) )
    return "Unknown";
  v3 = *(_DWORD *)(*(_DWORD *)v2 + 4 * (unsigned __int16)a2);
  if ( !v3 )
    return "Unknown";
  else
    return (const char *)sub_10430F10(v3 + 552);
}
