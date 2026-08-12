int __userpurge sub_1027AA80@<eax>(int a1@<ecx>, int a2@<edi>, int a3)
{
  int result; // eax
  int v5; // esi
  int v6; // ebx
  int v7; // ecx
  int v8; // esi
  int v9; // esi
  int v11; // [esp+0h] [ebp-8h]

  result = sub_1023A780((_WORD *)a1, a3, a2, v11);
  v5 = 0;
  if ( *(int *)(a1 + 224) > 0 )
  {
    v6 = 0;
    do
    {
      v7 = *(_DWORD *)(v6 + *(_DWORD *)(a1 + 212) + 8);
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 516))(v7, a3);
      ++v5;
      v6 += 36;
    }
    while ( v5 < *(_DWORD *)(a1 + 224) );
  }
  v8 = *(_DWORD *)(a1 + 244);
  if ( v8 != -1 )
  {
    result = *(_DWORD *)(a1 + 232);
    do
    {
      v9 = 12 * v8;
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(result + v9) + 516))(*(_DWORD *)(result + v9), a3);
      result = *(_DWORD *)(a1 + 232);
      v8 = *(_DWORD *)(result + v9 + 8);
    }
    while ( v8 != -1 );
  }
  return result;
}
