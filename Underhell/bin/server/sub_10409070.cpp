char *__cdecl sub_10409070(float *a1, int a2, char a3)
{
  char *result; // eax
  int v4; // edx
  int v5; // esi
  int *v6; // ecx
  float v7; // [esp+4h] [ebp-24h]
  float v8[3]; // [esp+18h] [ebp-10h] BYREF
  int v9; // [esp+24h] [ebp-4h] BYREF

  v8[0] = 0.0;
  v8[1] = 0.0;
  v8[2] = 0.0;
  result = sub_100E3960((int)"env_laserdot", a1, v8, 0);
  v5 = (int)result;
  if ( result )
  {
    result[896] = a3;
    sub_100E0970((int)result, v4, 0, 0);
    sub_101129A0((unsigned __int16 *)(v5 + 320), *(_WORD *)(v5 + 356) | 4);
    sub_100EAB80((_DWORD *)v5, 16);
    sub_1025F360((_DWORD *)v5, (int)&flt_106F1CA8, (int)&flt_106F1CA8);
    sub_10242210((_DWORD *)v5, "sprites/laserpointer.vmt", a1);
    *(_DWORD *)(v5 + 260) = *sub_10162BE0(&v9, "TEST");
    sub_10128950(v5, 3, 255, 255, 255, 255, 14);
    sub_102428B0(v5, 0.5, 0.0);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 76))(v5, a2);
    v7 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC3F0((_DWORD *)v5, (int)sub_10405F40, v7, off_106866E8);
    if ( *(_BYTE *)(v5 + 605) != 1 )
    {
      if ( *(_BYTE *)(v5 + 84) )
      {
        *(_BYTE *)(v5 + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(v5 + 24);
        if ( v6 )
          sub_100194B0(v6, 605);
      }
      *(_BYTE *)(v5 + 605) = 1;
    }
    if ( !a3 )
      sub_10242060((int *)v5);
    return (char *)v5;
  }
  return result;
}
