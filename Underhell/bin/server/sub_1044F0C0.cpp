int __usercall sub_1044F0C0@<eax>(int a1@<esi>, _DWORD *a2)
{
  int i; // edi
  int v3; // eax
  char v4; // bl
  int v5; // ecx
  char v6; // al
  bool v7; // cl
  bool v8; // al
  int v10; // [esp+4h] [ebp-8h]
  bool v11; // [esp+9h] [ebp-3h]
  char v12; // [esp+Ah] [ebp-2h] BYREF
  char v13; // [esp+Bh] [ebp-1h] BYREF

  v10 = *(_DWORD *)(a1 + 12);
  sub_1042D6E0((_DWORD *)a1);
  *a2 = *(_DWORD *)(a1 + 12);
  for ( i = 0; !*(_BYTE *)(a1 + 20); ++i )
  {
    if ( (*(_BYTE *)(a1 + 21) & 1) != 0 )
    {
      v13 = 0;
      sub_1042E720(a1, "%c", &v13);
      v4 = v13;
    }
    else if ( sub_1042D170(a1, 1) )
    {
      v3 = *(_DWORD *)(a1 + 12) + 1;
      v4 = *(_BYTE *)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 32) + *(_DWORD *)a1);
      v13 = v4;
      *(_DWORD *)(a1 + 12) = v3;
    }
    else
    {
      v4 = 0;
      v13 = 0;
    }
    if ( (*(_BYTE *)(a1 + 21) & 1) != 0 )
    {
      v12 = 0;
      sub_1042E720(a1, "%c", &v12);
      v6 = v12;
    }
    else if ( sub_1042D170(a1, 1) )
    {
      v5 = *(_DWORD *)(a1 + 12) + 1;
      v6 = *(_BYTE *)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 32) + *(_DWORD *)a1);
      v12 = v6;
      *(_DWORD *)(a1 + 12) = v5;
    }
    else
    {
      v6 = 0;
      v12 = 0;
    }
    v11 = (unsigned __int8)(v6 - 48) <= 9u;
    v7 = v4 >= 65 && v4 <= 70 || (unsigned __int8)(v4 - 97) <= 5u;
    v8 = v6 >= 65 && v6 <= 70 || (unsigned __int8)(v6 - 97) <= 5u;
    if ( (unsigned __int8)(v4 - 48) > 9u && !v7 )
      break;
    if ( !v11 && !v8 )
      break;
    sub_1042D6E0((_DWORD *)a1);
    *a2 = *(_DWORD *)(a1 + 12);
  }
  sub_1042D280(a1, 0, v10);
  return i;
}
