_DWORD *__userpurge sub_10171AE0@<eax>(int a1@<ecx>, int a2@<edi>, int a3@<esi>, float *a4, int a5, float a6)
{
  _DWORD *result; // eax
  int v7; // eax
  int v8; // esi
  int v9; // edi
  _DWORD *v10; // esi
  double v11; // st7

  if ( 0.0 == *((float *)off_103DC81C + 4) )
    return 0;
  v7 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a5, a2, a3);
  v8 = v7;
  if ( a5 && v7 && (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 36))(dword_10413178, v7) == 2 )
  {
    v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 32))(dword_10413178, v8);
    result = sub_1016FF80(a1, a4, v8);
    v10 = result;
    if ( result )
    {
      result[495] |= 0x100u;
      *((float *)result + 497) = (float)(v9 - 1);
      *((float *)result + 515) = 1.0;
      v11 = a6;
      if ( 0.0 == a6 )
        v11 = 10.0;
      *((float *)result + 517) = v11;
      *((float *)result + 496) = (double)v9 / v11 + *((float *)off_103DC81C + 3);
      *((float *)result + 518) = 0.0;
      sub_10034A30((float *)result, a4);
      return v10;
    }
  }
  else
  {
    DevWarning(1, "No Sprite %d!\n", a5);
    return 0;
  }
  return result;
}
