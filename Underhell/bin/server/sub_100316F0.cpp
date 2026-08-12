void __thiscall sub_100316F0(int *this, _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  int *v2; // edi
  signed int v3; // eax
  void *v4; // ecx
  int v5; // ebx
  int v6; // esi
  int v7; // ecx
  int v8; // ebx
  int v9; // edx
  int v10; // edi
  _DWORD *v11; // eax
  int v12; // ecx
  int v13; // [esp+10h] [ebp-14h]
  int v14; // [esp+14h] [ebp-10h]
  int i; // [esp+1Ch] [ebp-8h]
  int v17; // [esp+20h] [ebp-4h]

  v2 = this;
  v3 = this[3];
  if ( v3 > 1 )
  {
    v4 = (void *)*this;
    if ( *v2 )
    {
      qsort(v4, v3, 0x14u, CompareFunction);
    }
    else
    {
      v5 = v3 - 1;
      for ( i = v3 - 1; v5 >= 0; i = v5 )
      {
        if ( v5 >= 1 )
        {
          v6 = 20;
          v17 = v5;
          do
          {
            if ( CompareFunction((const void *)(v6 + *v2 - 20), (const void *)(v6 + *v2)) < 0 )
            {
              v7 = *v2;
              v8 = *(_DWORD *)(v6 + *v2 - 8);
              v9 = *(_DWORD *)(v6 + *v2 - 16);
              v10 = *(_DWORD *)(v6 + *v2 - 12);
              v11 = (_DWORD *)(v6 + v7);
              v12 = *(_DWORD *)(v6 + v7 - 20);
              v13 = v8;
              v14 = *(v11 - 1);
              *(v11 - 5) = *v11;
              *(v11 - 4) = v11[1];
              *(v11 - 3) = v11[2];
              *(v11 - 2) = v11[3];
              *(v11 - 1) = v11[4];
              v5 = i;
              *v11 = v12;
              v11[1] = v9;
              v11[2] = v10;
              v2 = this;
              v11[3] = v13;
              v11[4] = v14;
            }
            v6 += 20;
            --v17;
          }
          while ( v17 );
        }
        --v5;
      }
    }
  }
}
