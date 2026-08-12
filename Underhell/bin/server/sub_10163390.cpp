int __cdecl sub_10163390(int a1)
{
  int result; // eax
  int v2; // eax
  int v3; // esi
  int *v4; // ecx
  int v5; // [esp+0h] [ebp-8h]
  int i; // [esp+4h] [ebp-4h]

  result = 0;
  for ( i = 0; result < dword_106B4D4C; i = result )
  {
    v2 = *(_DWORD *)(dword_106B4D40 + 4 * result);
    if ( *(_DWORD *)(v2 + 800) == *(_DWORD *)(a1 + 92) )
    {
      v5 = (int)((double)*(int *)(a1 + 1200) * *(float *)(v2 + 808));
      v3 = v5 + RandomInt(-2, 2);
      if ( v3 <= (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1216))(a1) )
      {
        if ( v3 <= 0 )
          v3 = 1;
      }
      else
      {
        v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1216))(a1);
      }
      if ( *(_DWORD *)(a1 + 1200) != v3 )
      {
        if ( *(_BYTE *)(a1 + 84) )
        {
          *(_BYTE *)(a1 + 88) |= 1u;
        }
        else
        {
          v4 = *(int **)(a1 + 24);
          if ( v4 )
            sub_100194B0(v4, 1200);
        }
        *(_DWORD *)(a1 + 1200) = v3;
      }
    }
    result = i + 1;
  }
  return result;
}
