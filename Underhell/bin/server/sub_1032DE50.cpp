bool __thiscall sub_1032DE50(int this, int a2, float a3)
{
  int v3; // ebx
  bool result; // al
  int v5; // esi
  int *v6; // eax

  v3 = *(_DWORD *)(a2 + 64);
  result = 0;
  if ( (v3 & 0x400000) == 0 && !*(_BYTE *)(this + 3776) && !sub_1002A570((_DWORD *)this) )
  {
    if ( (v3 & 0x40) != 0 && a3 >= 0.5 )
      return 1;
    if ( *(_DWORD *)(dword_10698344 + 48) )
    {
      v5 = *(_DWORD *)(a2 + 76);
      v6 = sub_102D9B20();
      if ( v5 == sub_100B9D10(v6, "CombineHeavyCannon") )
        return 1;
    }
  }
  return result;
}
