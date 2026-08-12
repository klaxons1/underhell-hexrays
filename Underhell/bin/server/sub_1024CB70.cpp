int __cdecl sub_1024CB70(int *a1)
{
  const char *v1; // eax
  int result; // eax
  int v3; // esi
  int v4; // edi
  int *v5; // ecx

  if ( *a1 >= 2 )
  {
    if ( !dword_106C6C0C )
      Error("Test_ProxyToggle_SetValue: no entity present.");
  }
  else
  {
    Error("Test_ProxyToggle_SetValue: requires value parameter.");
  }
  v1 = String;
  if ( *a1 > 1 )
    v1 = (const char *)a1[259];
  result = atoi(v1);
  v3 = dword_106C6C0C;
  v4 = result;
  if ( *(_DWORD *)(dword_106C6C0C + 800) != result )
  {
    result = dword_106C6C0C;
    if ( *(_BYTE *)(dword_106C6C0C + 84) )
    {
      *(_BYTE *)(dword_106C6C0C + 88) |= 1u;
      *(_DWORD *)(v3 + 800) = v4;
    }
    else
    {
      v5 = *(int **)(dword_106C6C0C + 24);
      if ( v5 )
        result = sub_100194B0(v5, 800);
      *(_DWORD *)(v3 + 800) = v4;
    }
  }
  return result;
}
