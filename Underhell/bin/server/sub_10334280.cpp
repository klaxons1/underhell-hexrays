int __cdecl sub_10334280(float *a1, float *a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  int v5; // esi
  int v6; // eax

  v2 = *(_DWORD **)a1;
  v3 = *(_DWORD **)a2;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)a1 + 1532))(*(_DWORD *)a1)
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v3 + 1532))(v3) )
  {
    return -1;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 1532))(v2)
    && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v3 + 1532))(v3) )
  {
    return 1;
  }
  v5 = sub_100CF460(v2);
  v6 = sub_100CF460(v3);
  if ( v5 )
  {
    if ( !v6 )
      return -1;
  }
  else if ( v6 )
  {
    return 1;
  }
  if ( !*((_BYTE *)a1 + 4) )
  {
    if ( !*((_BYTE *)a2 + 4) )
      return (int)(a2[2] - a1[2]);
    return 1;
  }
  if ( !*((_BYTE *)a2 + 4) )
    return -1;
  if ( *((_BYTE *)a2 + 4) )
    return *((_DWORD *)a2 + 3) - *((_DWORD *)a1 + 3);
  return (int)(a2[2] - a1[2]);
}
