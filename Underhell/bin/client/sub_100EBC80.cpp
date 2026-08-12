char __stdcall sub_100EBC80(int a1, int NumOfElements, char *Base, float a4, float a5)
{
  bool v5; // zf
  _BYTE *v6; // eax
  signed int v8; // edi
  double v9; // st7
  float *v10; // esi
  int v11; // eax
  char v12; // [esp+13h] [ebp-1h]
  int v13; // [esp+1Ch] [ebp+8h]

  v5 = a1 == -324;
  v6 = (_BYTE *)(a1 + 324);
  v12 = 0;
  v13 = a1 + 324;
  if ( (v5 || !*v6) && NumOfElements <= 1 )
    return 0;
  qsort(Base, NumOfElements, 0xCu, (_CoreCrtNonSecureSearchSortCompareFunction)sub_100EB280);
  v8 = 0;
  if ( NumOfElements > 0 )
  {
    v9 = a4;
    v10 = (float *)(Base + 4);
    do
    {
      if ( a5 >= v9 )
        break;
      if ( *((_BYTE *)v10 + 4) )
      {
        v11 = sub_100F2730(v13);
        if ( v11 )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 4))(v11, LODWORD(flt_10435858));
        v12 = 1;
        v9 = a4 - *v10;
        a4 = v9;
      }
      ++v8;
      v10 += 3;
    }
    while ( v8 < NumOfElements );
  }
  return v12;
}
