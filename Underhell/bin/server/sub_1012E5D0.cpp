unsigned int __cdecl sub_1012E5D0(int a1, int a2)
{
  const char *v2; // eax
  int v3; // ebx
  unsigned int result; // eax
  int v5; // edx
  unsigned int v6; // eax
  int v7; // edi
  unsigned int v8; // esi
  float v10; // [esp+4h] [ebp-14h]

  v2 = *(const char **)(a2 + 4);
  if ( !v2 )
    v2 = String;
  v3 = sub_10154380(v2);
  result = *(_DWORD *)(a1 + 312);
  if ( result == -1 || (result >>= 12, off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 2] != result) )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 1];
  if ( v5 )
  {
    do
    {
      v6 = *(_DWORD *)(v5 + 316);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(v5 + 316) & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (*(_DWORD *)(v5 + 316) & 0xFFF) + 1];
      result = __RTDynamicCast(
                 v5,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                 (int)&CEntityParticleTrail `RTTI Type Descriptor',
                 0);
      v8 = result;
      if ( result && *(_DWORD *)(result + 800) == v3 && (*(_DWORD *)(result + 828))-- == 1 )
      {
        sub_100F5850((unsigned __int16 *)result, 0);
        ((void (__thiscall *)(int (__stdcall ***)(int, int), unsigned int))(*off_1061BE1C)[4])(off_1061BE1C, v8);
        v10 = *(float *)(v8 + 812) + *(float *)(dword_106B31C8 + 12);
        result = sub_100EC3F0((_DWORD *)v8, (int)sub_10246D70, v10, off_1061DFF0);
      }
      v5 = v7;
    }
    while ( v7 );
  }
  return result;
}
