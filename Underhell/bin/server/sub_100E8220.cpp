int __usercall sub_100E8220@<eax>(int a1@<edi>, const char *a2)
{
  int v2; // eax
  int v3; // esi

  if ( a2 && *a2 )
  {
    if ( !(unsigned __int8)sub_100E8650()
      && !(*(unsigned __int8 (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 32))(dword_106B31D0, a2) )
    {
      Warning("Late precache of %s\n", a2);
    }
    v2 = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)dword_106B31D0 + 16))(dword_106B31D0, a2, 1);
    v3 = v2;
    if ( v2 != -1 )
      sub_100E7F90(a1, v2);
    return v3;
  }
  else
  {
    Msg("Attempting to precache model, but model name is NULL\n");
    return -1;
  }
}
