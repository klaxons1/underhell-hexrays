unsigned int __usercall sub_101CA000@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<esi>)
{
  unsigned int result; // eax
  int *v5; // ecx
  int v6; // esi
  int v7; // ebx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // esi
  _DWORD v12[1024]; // [esp+4h] [ebp-1000h] BYREF

  result = *(_DWORD *)(a1 + 812);
  if ( result != -1 )
  {
    v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 812) & 0xFFF) + 1];
    result >>= 12;
    if ( v5[1] == result )
    {
      v6 = *v5;
      if ( *v5 )
      {
        *(_BYTE *)(a1 + 828) = 1;
        v7 = (*(int (__thiscall **)(int, _DWORD *, int, int, int))(*(_DWORD *)v6 + 624))(v6, v12, 1024, a2, a3);
        v8 = *(_DWORD *)(a1 + 808);
        if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 808) & 0xFFF) + 2] != v8 >> 12 )
          v9 = 0;
        else
          v9 = off_1061BE18[4 * (*(_DWORD *)(a1 + 808) & 0xFFF) + 1];
        sub_101DAAC0(v9, v6);
        v10 = 0;
        for ( *(_DWORD *)(a1 + 816) = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 116))(
                                        dword_106BAFF4,
                                        a1 + 800); v10 < v7; ++v10 )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 816) + 8))(
            *(_DWORD *)(a1 + 816),
            v12[v10],
            0);
          (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v12[v10] + 96))(v12[v10]);
        }
        return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 816) + 32))(*(_DWORD *)(a1 + 816), 2);
      }
    }
  }
  return result;
}
