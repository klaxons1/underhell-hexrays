const char *__stdcall sub_1024ABA0(_DWORD *a1)
{
  int v1; // edi

  v1 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a1[6]);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 324))(a1) )
    return (const char *)(*(int (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 220))(
                           dword_106B31D0,
                           v1,
                           "cl_team");
  else
    return "default";
}
