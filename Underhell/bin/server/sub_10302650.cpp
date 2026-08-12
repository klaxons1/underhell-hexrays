int __usercall sub_10302650@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int result; // eax
  int v4; // ebx
  int v5; // edi

  *(_BYTE *)(a1 + 3648) = 0;
  result = sub_10045830((_DWORD *)a1, a2);
  v4 = result;
  if ( !*(_BYTE *)(a1 + 3648) )
  {
    v5 = *(_DWORD *)(a1 + 3624);
    if ( v5 )
    {
      *(_DWORD *)(a1 + 3624) = 0;
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 32))(v5);
      sub_1004AF00((_DWORD *)a1);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a1 + 2224))(a1, v5, 0);
      return v4;
    }
  }
  return result;
}
