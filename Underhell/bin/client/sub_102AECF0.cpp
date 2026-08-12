char __thiscall sub_102AECF0(int *this, int a2, const char *Src, _DWORD *a4)
{
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  bool v10; // sf
  int v11; // eax
  int *v12; // esi
  void *v13; // esp
  int *v14; // esi
  void *v15; // esp
  int v16; // esi
  char v17; // al
  char v18[12]; // [esp+0h] [ebp-44h] BYREF
  int v19[2]; // [esp+Ch] [ebp-38h] BYREF
  int v20; // [esp+14h] [ebp-30h]
  char *String2; // [esp+3Ch] [ebp-8h] BYREF
  int v22; // [esp+40h] [ebp-4h]
  void *Srca; // [esp+50h] [ebp+Ch]

  *a4 = -1;
  Srca = (void *)sub_102AE750(this, Src);
  sub_102ADEC0((int *)&String2, Src);
  sub_1022EDF0((int)v19, 0, 0, 0);
  v6 = a2;
  if ( sub_102ADF20(a2, v19) )
  {
    sub_102ADD10((int)word_10482A60, "Expecting '{', didn't find it!");
    if ( v20 < 0 )
      goto LABEL_6;
    v7 = v19[0];
    if ( !v19[0] )
      goto LABEL_6;
    v8 = g_pMemAlloc;
LABEL_5:
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 20))(v8, v7);
LABEL_6:
    --dword_10482AE8;
    return 0;
  }
  if ( !*(_BYTE *)(a2 + 20) )
  {
    while ( 1 )
    {
      v11 = sub_102ADF20(v6, v19);
      if ( v11 == -1 || v11 == 7 )
        break;
      if ( v11 == 1 )
        goto LABEL_8;
      if ( v11 != 5 )
      {
        sub_102ADD10((int)word_10482A60, "Expecting attribute name, didn't find it!");
        goto LABEL_34;
      }
      v12 = sub_1022E1D0();
      v22 = sub_1022EAF0((int)v19, (int)v12, 1);
      v13 = alloca(v22);
      sub_1022F190((int)v19, (int)v12, v18, v22);
      if ( sub_102ADF20(a2, v19) != 5 )
      {
        sub_102ADD10((int)word_10482A60, "Expecting attribute type for attribute %s, didn't find it!", v18);
        sub_10008580(v19);
        goto LABEL_6;
      }
      v14 = sub_1022E1D0();
      v22 = sub_1022EAF0((int)v19, (int)v14, 1);
      v15 = alloca(v22);
      String2 = v18;
      sub_1022F190((int)v19, (int)v14, v18, v22);
      v16 = 0;
      while ( _stricmp((&off_103FF048)[v16], String2) )
      {
        if ( ++v16 >= 29 )
          goto LABEL_21;
      }
      if ( !v16 )
      {
LABEL_21:
        v17 = sub_102AE160(this, a2, (int)Srca, v18, (int)String2);
        goto LABEL_22;
      }
      if ( v16 == 15 )
      {
        v17 = sub_102AE7B0(this, a2, (int)Srca, v18);
      }
      else if ( v16 < 15 )
      {
        v17 = sub_102AEA80(this, a2, (int)Srca, v18, v16);
      }
      else
      {
        v17 = sub_102AE300(this, a2, (int)Srca, v18, v16);
      }
LABEL_22:
      if ( !v17 )
        goto LABEL_34;
      if ( *(_BYTE *)(a2 + 20) )
        goto LABEL_8;
      v6 = a2;
    }
    sub_102ADD10((int)word_10482A60, "Expecting '}', didn't find it!");
LABEL_34:
    if ( v20 < 0 )
      goto LABEL_6;
    v7 = v19[0];
    if ( !v19[0] )
      goto LABEL_6;
    v8 = g_pMemAlloc;
    goto LABEL_5;
  }
LABEL_8:
  v10 = v20 < 0;
  *a4 = Srca;
  if ( !v10 && v19[0] )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v19[0]);
  --dword_10482AE8;
  return 1;
}
