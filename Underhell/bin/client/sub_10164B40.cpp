void __thiscall sub_10164B40(int this, int a2, float a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  if ( *(int *)(this + 16) <= 0 && !*(_BYTE *)(this + 8) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2) )
      sub_10172BF0(a2, LODWORD(a3), a4, a5, a6, a7, a8, a9 != 0, a10);
  }
}
