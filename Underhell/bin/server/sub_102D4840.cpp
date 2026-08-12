float *__cdecl sub_102D4840(float *a1, float *a2, float *a3, float *a4, int a5)
{
  float *result; // eax
  unsigned int *v6; // esi
  int v7; // eax

  result = (float *)sub_100E3960((int)"npc_grenade_bugbait", a1, a2, a5);
  v6 = (unsigned int *)result;
  if ( result )
  {
    sub_100D7260(result, a4);
    sub_100DD660((int)v6, a3);
    if ( a5 )
    {
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 288))(a5);
      sub_100F4E50(v6, v7);
    }
    else
    {
      sub_100F4E50(v6, 0);
    }
    return (float *)v6;
  }
  return result;
}
