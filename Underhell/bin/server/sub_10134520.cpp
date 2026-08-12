int __stdcall sub_10134520(float *a1)
{
  if ( *(int *)(dword_106B31C8 + 20) > 1
    && *(_DWORD *)a1
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)a1 + 320))(*(_DWORD *)a1)
    && *(_DWORD *)a1
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)a1 + 320))(*(_DWORD *)a1) )
  {
    return sub_101EB660(a1);
  }
  if ( *((_DWORD *)a1 + 6) == 1 )
    return sub_1042C7F0(a1[2]);
  return sub_1042C7F0(0.0);
}
