void __thiscall sub_100B1A50(int this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // esi
  float v13; // [esp+4h] [ebp-8h]
  int v14; // [esp+8h] [ebp-4h]

  v14 = *(_DWORD *)(this + 276) + 1;
  *(_BYTE *)(this + 314) = 1;
  v13 = (double)v14 * *(float *)(this + 316);
  if ( (double)sub_102374F0(this + 44) < v13 )
    *(_DWORD *)(this + 276) = 0;
  if ( !*(_DWORD *)(this + 276) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    sub_10248C80("HintMessageLower");
  }
  v7 = *(_DWORD *)(this + 276) + 1;
  if ( *(_DWORD *)(this + 264) < v7 )
    sub_100B1500((int *)(this + 252), *(_DWORD *)(this + 264), v7 - *(_DWORD *)(this + 264), 0);
  v8 = *(_DWORD *)(this + 276);
  v9 = v8 + 1;
  v10 = 3 * v8;
  v11 = *(_DWORD *)(this + 252);
  *(_DWORD *)(this + 276) = v9;
  v12 = v11 + 8 * v10;
  if ( a2 != 4 || 0.0 == *(float *)(v12 + 4) )
  {
    *(_DWORD *)(v12 + 12) = a3;
    *(_DWORD *)(v12 + 20) = a6;
    *(_DWORD *)v12 = a2;
    if ( a4 )
      *(_DWORD *)(v12 + 16) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 8))(a4);
    else
      *(_DWORD *)(v12 + 16) = -1;
    *(_DWORD *)(v12 + 8) = a5;
    if ( a2 == 4 )
      *(float *)(v12 + 4) = *(float *)(dword_1043C9D4 + 44) * 0.5 + *((float *)off_103DC81C + 3);
    else
      *(float *)(v12 + 4) = *(float *)(dword_1043C9D4 + 44) + *((float *)off_103DC81C + 3);
  }
}
