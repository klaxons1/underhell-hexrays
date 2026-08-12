int __usercall sub_10217CF0@<eax>(int a1@<eax>, int a2, int a3, int a4)
{
  int result; // eax
  int v6; // ecx
  int v7; // edi

  if ( *(_DWORD *)(a1 + 124) == *(_DWORD *)(a1 + 120) )
  {
    DevMsg(1, "Bogus constraint on ragdoll %s\n", (const char *)(**(_DWORD **)(a4 + 8) + 12));
    *(_DWORD *)(a1 + 124) = -1;
    *(_DWORD *)(a1 + 120) = -1;
  }
  result = *(_DWORD *)(a1 + 124);
  if ( result >= 0 )
  {
    v6 = *(_DWORD *)(a1 + 120);
    if ( v6 >= 0 )
    {
      v7 = a3 + 24 * result + 12;
      *(_DWORD *)(a3 + 24 * result + 32) = v6;
      if ( *(float *)(a4 + 48) > 0.0 )
      {
        *(float *)(a1 + 140) = *(float *)(a1 + 140) * *(float *)(a4 + 48);
        *(float *)(a1 + 156) = *(float *)(a1 + 156) * *(float *)(a4 + 48);
        *(float *)(a1 + 172) = *(float *)(a1 + 172) * *(float *)(a4 + 48);
      }
      sub_100FEC10(
        *(_DWORD *)(a4 + 8),
        *(_DWORD *)(a3 + 4 * *(_DWORD *)(a1 + 124) + 588),
        *(_DWORD *)(a3 + 4 * *(_DWORD *)(a1 + 120) + 588),
        a1 + 72);
      sub_10421CE0(a1 + 72, 3, v7);
      sub_10422700((void *)(a1 + 24));
      result = (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)a2 + 60))(
                 a2,
                 *(_DWORD *)(v7 + 12),
                 *(_DWORD *)(a3 + 8 * (3 * *(_DWORD *)(a1 + 120) + 3)),
                 *(_DWORD *)(a3 + 8),
                 a1);
      *(_DWORD *)(v7 + 16) = result;
    }
  }
  return result;
}
