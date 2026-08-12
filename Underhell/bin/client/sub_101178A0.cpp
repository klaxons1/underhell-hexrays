int __userpurge sub_101178A0@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, int a5, int a6)
{
  int v6; // eax
  float *v7; // eax
  int result; // eax
  int v9; // edx
  double v10; // st7
  double v11; // st6
  double v12; // st5
  unsigned int v13; // esi
  float *v14; // ecx
  float *v15; // ecx
  float v16; // [esp+0h] [ebp-Ch]
  float v17; // [esp+4h] [ebp-8h]
  float v18; // [esp+8h] [ebp-4h]

  v6 = a1[7];
  if ( *(_DWORD *)(v6 + 1284) )
    v7 = (float *)(v6 + 1308);
  else
    v7 = &flt_10459240;
  v16 = *v7;
  v18 = v7[2];
  v17 = v7[1];
  result = (*(int (__thiscall **)(_DWORD *, int, int, int, int, int))(*a1 + 84))(a1, a4, a5, a6, a3, a2);
  v9 = result - 1;
  if ( result - 1 >= 0 )
  {
    v10 = v18;
    v11 = v17;
    v12 = v16;
    if ( result >= 4 )
    {
      v13 = (unsigned int)result >> 2;
      v14 = (float *)(a4 + 12 * v9 - 4);
      v9 -= 4 * ((unsigned int)result >> 2);
      do
      {
        if ( v14[1] != flt_103EE008 || v14[2] != flt_103EE00C || v14[3] != flt_103EE010 )
        {
          v14[1] = v14[1] + v12;
          v14[2] = v14[2] + v11;
          v14[3] = v10 + v14[3];
        }
        if ( *(v14 - 2) != flt_103EE008 || *(v14 - 1) != flt_103EE00C || *v14 != flt_103EE010 )
        {
          *(v14 - 2) = *(v14 - 2) + v12;
          *(v14 - 1) = *(v14 - 1) + v11;
          *v14 = v10 + *v14;
        }
        if ( *(v14 - 5) != flt_103EE008 || *(v14 - 4) != flt_103EE00C || *(v14 - 3) != flt_103EE010 )
        {
          *(v14 - 5) = *(v14 - 5) + v12;
          *(v14 - 4) = *(v14 - 4) + v11;
          *(v14 - 3) = v10 + *(v14 - 3);
        }
        if ( *(v14 - 8) != flt_103EE008 || *(v14 - 7) != flt_103EE00C || *(v14 - 6) != flt_103EE010 )
        {
          *(v14 - 8) = *(v14 - 8) + v12;
          *(v14 - 7) = *(v14 - 7) + v11;
          *(v14 - 6) = *(v14 - 6) + v10;
        }
        v14 -= 12;
        --v13;
      }
      while ( v13 );
    }
    if ( v9 >= 0 )
    {
      v15 = (float *)(a4 + 12 * v9 + 8);
      do
      {
        if ( *(v15 - 2) != flt_103EE008 || *(v15 - 1) != flt_103EE00C || *v15 != flt_103EE010 )
        {
          *(v15 - 2) = *(v15 - 2) + v12;
          *(v15 - 1) = *(v15 - 1) + v11;
          *v15 = *v15 + v10;
        }
        v15 -= 3;
        --v9;
      }
      while ( v9 >= 0 );
    }
  }
  return result;
}
