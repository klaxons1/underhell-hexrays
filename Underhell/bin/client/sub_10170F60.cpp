_DWORD *__thiscall sub_10170F60(
        void *this,
        float *a2,
        float *a3,
        float *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char *String2)
{
  int v9; // esi
  int v11; // eax
  _DWORD *v13; // esi
  int v14; // edi
  double v15; // st7
  __int16 v16; // ax
  char *v17; // edi
  float v18[3]; // [esp+Ch] [ebp-Ch] BYREF

  v9 = a5;
  if ( !a5 )
    return 0;
  v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a5);
  if ( !v11 )
  {
    Warning("ClientProjectile: No model %d!\n", v9);
    return 0;
  }
  v13 = sub_1016FF80((int)this, a2, v11);
  if ( !v13 )
    return 0;
  *((float *)v13 + 527) = *a3;
  *((float *)v13 + 528) = a3[1];
  *((float *)v13 + 529) = a3[2];
  *((float *)v13 + 533) = *a4;
  *((float *)v13 + 534) = a4[1];
  *((float *)v13 + 535) = a4[2];
  sub_101EE190(a3, v18);
  sub_10037CA0((int)v13, v18);
  sub_10037BA0((int)v13, a2);
  v14 = a7;
  v15 = (double)a6 + *((float *)off_103DC81C + 3);
  v13[495] = 67375104;
  *((float *)v13 + 496) = v15;
  if ( v14 )
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)(v14 + 8) + 36))(v14 + 8);
  else
    v16 = 0;
  *((_WORD *)v13 + 1008) = v16;
  sub_10038390(v13, v14);
  v17 = String2;
  v13[520] = a8;
  if ( v17 )
  {
    sub_1009C060(off_103DCD78, &a5, (int)v13);
    sub_100EA350(v13 + 111, v17, 1, -1, SLODWORD(flt_10459240), qword_10459244, SHIDWORD(qword_10459244));
    v13[495] |= 0x8000000u;
    v13[521] = v17;
  }
  return v13;
}
