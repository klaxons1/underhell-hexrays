void __thiscall sub_101640F0(int this, int a2, float a3, int a4, int a5)
{
  if ( *(int *)(this + 16) <= 0 && !*(_BYTE *)(this + 8) )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 12))(a2) )
      sub_10166180(a2, LODWORD(a3), a4);
  }
}
