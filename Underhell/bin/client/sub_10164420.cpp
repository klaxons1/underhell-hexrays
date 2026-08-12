void __thiscall sub_10164420(
        int this,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        int a8,
        float a9,
        float a10,
        float a11)
{
  if ( *(int *)(this + 16) <= 0 && !*(_BYTE *)(this + 8) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2) )
      sub_10168680(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, 0x10000000);
  }
}
