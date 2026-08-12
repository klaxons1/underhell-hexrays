double __usercall sub_10224790@<st0>(int a1@<ecx>, int a2@<edi>, int a3@<esi>)
{
  int v4; // ecx
  const char *v5; // eax
  unsigned int v6; // esi
  _DWORD v9[4]; // [esp+0h] [ebp-10h] BYREF

  v4 = *(_DWORD *)(a1 + 976);
  if ( v4 )
    return sub_1041CD00(v4);
  v5 = *(const char **)(a1 + 804);
  if ( !v5 )
    v5 = String;
  v6 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, const char *, _DWORD *, int, int))(*(_DWORD *)dword_106B3210 + 28))(
         dword_106B3210,
         v5,
         v9,
         a2,
         a3) )
  {
    v6 = v9[0];
  }
  v9[3] = v6;
  return (double)v6 * 0.001;
}
