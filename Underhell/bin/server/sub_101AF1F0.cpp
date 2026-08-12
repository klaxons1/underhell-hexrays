char *__cdecl sub_101AF1F0(float *a1, float *a2, int a3, float a4, char a5)
{
  char *result; // eax
  int v6; // ebx
  int v7; // esi
  int *v8; // ecx

  result = sub_100E3960((int)"phys_keepupright", a1, a2, a3);
  v6 = (int)result;
  if ( result )
  {
    if ( a3 )
      *((_DWORD *)result + 209) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
    else
      *((_DWORD *)result + 209) = -1;
    *(float *)(v6 + 840) = a4;
    if ( !a5 )
    {
      v7 = *(_DWORD *)(v6 + 248) | 1;
      if ( *(_DWORD *)(v6 + 248) != v7 )
      {
        if ( *(_BYTE *)(v6 + 84) )
        {
          *(_BYTE *)(v6 + 88) |= 1u;
        }
        else
        {
          v8 = *(int **)(v6 + 24);
          if ( v8 )
            sub_100194B0(v8, 248);
        }
        *(_DWORD *)(v6 + 248) = v7;
      }
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 96))(v6);
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 136))(v6);
    return (char *)v6;
  }
  return result;
}
