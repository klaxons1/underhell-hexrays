int __cdecl sub_101D94C0(char *a1, char *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx
  bool v4; // cf
  unsigned int v5; // edi

  v2 = *((_DWORD *)a1 + 2);
  v3 = *((_DWORD *)a2 + 2);
  if ( *(_QWORD *)(a1 + 4) > *(_QWORD *)(a2 + 4) )
    return 1;
  v4 = v2 < v3;
  if ( v2 == v3 )
  {
    if ( *((_DWORD *)a1 + 1) != *((_DWORD *)a2 + 1) || *(_DWORD *)a1 <= *(_DWORD *)a2 )
    {
      v4 = v2 < v3;
      goto LABEL_6;
    }
    return 1;
  }
LABEL_6:
  if ( v4 )
    return -1;
  if ( v2 == v3
    && ((v5 = *((_DWORD *)a1 + 1), v5 < *((_DWORD *)a2 + 1))
     || v2 == v3 && v5 == *((_DWORD *)a2 + 1) && *(_DWORD *)a1 < *(_DWORD *)a2) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
}
