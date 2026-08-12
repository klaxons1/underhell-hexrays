int __cdecl sub_103F9F90(int a1, float *a2)
{
  _DWORD *v2; // esi
  int v3; // edi
  int result; // eax
  int v5; // ebx
  double v6; // st4
  double v7; // st7
  double v8; // st4
  double v9; // st5
  double v10; // st7
  int v11; // ecx
  _DWORD v12[1024]; // [esp+8h] [ebp-1014h] BYREF
  float v13[3]; // [esp+1008h] [ebp-14h] BYREF
  float v14; // [esp+1014h] [ebp-8h]
  int v15; // [esp+1018h] [ebp-4h]

  v2 = (_DWORD *)a1;
  v3 = 0;
  result = __RTDynamicCast(
             a1,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CRagdollProp `RTTI Type Descriptor',
             0);
  if ( result )
  {
    v5 = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 624))(a1, v12, 1024);
    v14 = 100000000.0;
    v15 = 0;
    if ( v5 > 0 )
    {
      do
      {
        (*(void (__thiscall **)(_DWORD, float *, _DWORD))(*(_DWORD *)v12[v3] + 188))(v12[v3], v13, 0);
        v6 = *a2 - v13[0];
        v7 = v6 * v6;
        v8 = a2[1] - v13[1];
        v9 = a2[2] - v13[2];
        v10 = v9 * v9 + v8 * v8 + v7;
        if ( v14 > v10 )
        {
          v11 = v12[v3];
          v14 = v10;
          v15 = v11;
        }
        ++v3;
      }
      while ( v3 < v5 );
      v2 = (_DWORD *)a1;
    }
    sub_100D6020(v2, v15);
    return v2[106];
  }
  return result;
}
