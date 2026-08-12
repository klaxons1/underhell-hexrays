int *__thiscall sub_1014FC40(char *this, float *a2, float a3, int *a4)
{
  int *result; // eax
  int *v5; // ebx
  int *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int **v11; // edi

  result = sub_1012C480(0, "info_ladder_dismount", a2, a3, 0);
  v5 = result;
  if ( result )
  {
    v6 = a4;
    while ( 1 )
    {
      if ( !v5[53] || sub_100D8070(v5) == this )
      {
        a4 = *(int **)(*(int (__thiscall **)(int *))(*v5 + 8))(v5);
        if ( sub_10319100(&a4) == -1 )
        {
          v7 = v6[3];
          v8 = v6[1];
          if ( v7 + 1 > v8 )
            sub_102ABFC0(v7 - v8 + 1);
          ++v6[3];
          v9 = *v6;
          v10 = v6[3] - v7 - 1;
          v6[4] = *v6;
          if ( v10 > 0 )
            memcpy((void *)(v9 + 4 * v7 + 4), (const void *)(v9 + 4 * v7), 4 * v10);
          v11 = (int **)(*v6 + 4 * v7);
          if ( v11 )
            *v11 = a4;
        }
      }
      result = sub_1012C480((int)v5, "info_ladder_dismount", a2, a3, 0);
      a4 = result;
      if ( !result )
        break;
      v5 = a4;
    }
  }
  return result;
}
