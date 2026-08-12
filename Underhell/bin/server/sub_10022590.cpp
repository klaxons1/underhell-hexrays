void __usercall sub_10022590(_DWORD *a1@<edi>, const char *a2)
{
  unsigned int v2; // eax
  char v3; // cl
  const char *v4; // ebx
  const char *v5; // esi
  int v6; // eax
  const char *v7; // ecx

  v2 = strlen(a2);
  if ( v2 && a2[v2 - 1] == 10 )
  {
    a2[v2 - 1] = v3;
    v4 = "%s (%s: %d/%s) [%d]\n";
  }
  else
  {
    v4 = "%s (%s: %d/%s) [%d]";
  }
  v5 = "<unnamed>";
  if ( a1[65] )
    v5 = (const char *)a1[65];
  v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a1[6]);
  v7 = (const char *)a1[23];
  if ( !v7 )
    v7 = String;
  DevMsg(v4, a2, v7, v6, v5, *(_DWORD *)(dword_106B31C8 + 24));
}
