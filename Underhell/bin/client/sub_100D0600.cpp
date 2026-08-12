void __usercall sub_100D0600(int a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // edx
  char v7; // al
  bool v8; // cl
  char v9; // bl
  int v10; // eax
  int v11; // ebx
  int v12; // ecx
  int v13; // edx
  int v14; // edx
  bool v15; // bl
  unsigned int v16; // edi
  int v17; // [esp-8h] [ebp-18h]
  int v18; // [esp+8h] [ebp-8h]
  int v19; // [esp+Ch] [ebp-4h]

  if ( *(_DWORD *)(a1 + 4) )
  {
    v17 = a2;
    v3 = sub_100422D0();
    v4 = *(_DWORD *)(a1 + 44);
    v5 = *(_DWORD *)(a1 + 52);
    v6 = v3;
    v7 = v3 != 0;
    v19 = v6;
    v8 = v7 != *(_BYTE *)(a1 + 172);
    *(_BYTE *)(a1 + 172) = v7;
    v18 = v5;
    if ( v4 <= 0 )
    {
      *(_DWORD *)(a1 + 52) = -1;
      *(_DWORD *)(a1 + 56) = 0;
    }
    else
    {
      v9 = 0;
      if ( v8 && v7 )
      {
        v9 = 1;
        *(_DWORD *)(a1 + 52) = 0;
        *(_DWORD *)(a1 + 56) = 0;
      }
      v10 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 4 * *(_DWORD *)(a1 + 52));
      if ( *(_BYTE *)(v10 + 57) && v6 || *(_BYTE *)(v10 + 58) && !v6 )
        v9 = 1;
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, int))(**(_DWORD **)(a1 + 4) + 40))(
             *(_DWORD *)(a1 + 4),
             0,
             v17)
        || v9 )
      {
        v11 = 0;
        *(_DWORD *)(a1 + 56) = 0;
        v12 = *(_DWORD *)(a1 + 32);
        do
        {
          v13 = (*(_DWORD *)(a1 + 52) + 1) % v4;
          *(_DWORD *)(a1 + 52) = v13;
          v14 = *(_DWORD *)(v12 + 4 * v13);
          if ( (!*(_BYTE *)(v14 + 57) || !v19) && (!*(_BYTE *)(v14 + 58) || v19) )
            break;
          ++v11;
        }
        while ( v11 < v4 );
      }
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 40))(*(_DWORD *)(a1 + 4), 1) )
        *(_DWORD *)(a1 + 56) = (*(_DWORD *)(a1 + 56) + 1)
                             % *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 32) + 4 * *(_DWORD *)(a1 + 52)) + 60);
    }
    v15 = v18 != *(_DWORD *)(a1 + 52);
    v16 = (__int64)(*(float *)off_103DC81C * 1000.0);
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 12))(*(_DWORD *)(a1 + 4), v17)
      && (v16 >= *(_DWORD *)(a1 + 232) || v15) )
    {
      *(_DWORD *)(a1 + 232) = v16 + *(_DWORD *)(dword_10430EF4 + 48);
      sub_100CFFC0((_DWORD *)a1, v16);
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 44))(*(_DWORD *)(a1 + 4));
  }
}
