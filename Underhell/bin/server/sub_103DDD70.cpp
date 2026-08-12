int __cdecl sub_103DDD70(float *a1, float *a2, int a3, float a4)
{
  int result; // eax
  int v5; // edi
  int *v6; // ecx
  int *v7; // ecx

  result = sub_101811E0("env_rotorwash_emitter", -1);
  v5 = result;
  if ( result )
  {
    sub_100E0D20(result, a1);
    sub_100E0EA0(v5, a2);
    sub_100EACE0((unsigned __int16 *)v5, a3, 1);
    if ( *(_DWORD *)(v5 + 804) != LODWORD(a4) )
    {
      if ( *(_BYTE *)(v5 + 84) )
      {
        *(_BYTE *)(v5 + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(v5 + 24);
        if ( v6 )
          sub_100194B0(v6, 804);
      }
      *(float *)(v5 + 804) = a4;
    }
    if ( *(_BYTE *)(v5 + 800) )
    {
      result = v5;
      if ( *(_BYTE *)(v5 + 84) )
      {
        *(_BYTE *)(v5 + 88) |= 1u;
        *(_BYTE *)(v5 + 800) = 0;
        return result;
      }
      v7 = *(int **)(v5 + 24);
      if ( v7 )
        sub_100194B0(v7, 800);
      *(_BYTE *)(v5 + 800) = 0;
    }
    return v5;
  }
  return result;
}
