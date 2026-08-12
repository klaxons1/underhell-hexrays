int __usercall sub_10283690@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<esi>)
{
  int v4; // ebp
  int v5; // ebx
  int v6; // ecx
  int v7; // esi
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // esi
  int v13; // [esp-14h] [ebp-1Ch]
  int v14; // [esp-8h] [ebp-10h]
  int v15; // [esp-4h] [ebp-Ch]

  v4 = 0;
  if ( (int)a1[3] > 0 )
  {
    v15 = a2;
    v5 = 0;
    do
    {
      v6 = *(_DWORD *)(*a1 + v5);
      v7 = v5 + *a1;
      if ( v6 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 120))(v6, 1);
      v8 = *(_DWORD *)(v7 + 4);
      if ( v8 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 120))(v8, 1);
      v9 = *(_DWORD *)(v7 + 12);
      if ( v9 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 120))(v9, 1);
      ++v4;
      v5 += 84;
    }
    while ( v4 < a1[3] );
    a3 = v13;
  }
  v10 = a1[6];
  a1[3] = 0;
  v14 = a3;
  v11 = v10;
  sub_10287290(v10 + 208);
  *(_DWORD *)(v11 + 256) = 0;
  (*(void (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(v11 + 264) + 768))(
    *(_DWORD *)(v11 + 264),
    0,
    v14,
    v15);
  return (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v11 + 244))(v11, 0, 0);
}
