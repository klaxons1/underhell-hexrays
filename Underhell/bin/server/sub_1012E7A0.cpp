_DWORD *__cdecl sub_1012E7A0(int a1, _DWORD *a2, int a3)
{
  const char *v3; // eax
  int v4; // ebx
  int v5; // edx
  unsigned int v6; // eax
  int v7; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  _DWORD *result; // eax
  _DWORD *v11; // esi
  int *v12; // ecx
  int v13; // edx
  int v14; // [esp+8h] [ebp-10h]

  v3 = (const char *)a2[1];
  if ( !v3 )
    v3 = String;
  v4 = sub_10154380(v3);
  if ( *(_DWORD *)(a1 + 312) == -1
    || off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 2] != *(_DWORD *)(a1 + 312) >> 12 )
  {
    v5 = 0;
  }
  else
  {
    v5 = off_1061BE18[4 * (*(_DWORD *)(a1 + 312) & 0xFFF) + 1];
  }
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v5 + 316);
      if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(v5 + 316) & 0xFFF) + 2] != v6 >> 12 )
        v7 = 0;
      else
        v7 = off_1061BE18[4 * (*(_DWORD *)(v5 + 316) & 0xFFF) + 1];
      v8 = (_DWORD *)__RTDynamicCast(
                       v5,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                       (int)&CEntityParticleTrail `RTTI Type Descriptor',
                       0);
      v9 = v8;
      if ( v8 )
      {
        if ( v8[200] == v4 )
          break;
      }
      v5 = v7;
      if ( !v7 )
        goto LABEL_15;
    }
    if ( !v8[207] )
      sub_100EC3F0(v8, 0, *(float *)(dword_106B31C8 + 12), off_1061DFF0);
    ++v9[207];
    return v9;
  }
  else
  {
LABEL_15:
    result = (_DWORD *)sub_101811E0("env_particle_trail", -1);
    v11 = result;
    if ( result )
    {
      sub_1012E6E0(result + 206, a3);
      if ( v11[200] != v4 )
      {
        if ( *((_BYTE *)v11 + 84) )
        {
          *((_BYTE *)v11 + 88) |= 1u;
        }
        else
        {
          v12 = (int *)v11[6];
          if ( v12 )
            sub_100194B0(v12, 800);
        }
        v11[200] = v4;
      }
      v11[202] = a2[1];
      v11[203] = a2[2];
      v11[204] = a2[3];
      v13 = v11[201];
      v11[205] = a2[4];
      (*(void (__stdcall **)(int))(v13 + 4))(v14);
      v11[207] = 1;
      sub_100F5850((unsigned __int16 *)v11, a1);
      ((void (__thiscall *)(int (__stdcall ***)(int, int), _DWORD *, int))**off_1061BE1C)(off_1061BE1C, v11, a1);
      (*(void (__thiscall **)(_DWORD *))(*v11 + 96))(v11);
      return v11;
    }
  }
  return result;
}
