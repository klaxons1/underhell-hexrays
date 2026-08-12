char __thiscall sub_1042BFB0(_DWORD *this, char *a2, const char *a3, int a4, int a5)
{
  char v7; // bl
  int v8[12]; // [esp+4h] [ebp-30h] BYREF

  if ( !a3 )
    return 1;
  sub_1042DEC0(a3, strlen(a3), 9);
  v7 = sub_1042BC60(this, a2, (int)v8, a4, a5);
  if ( v8[2] >= 0 )
  {
    if ( v8[0] )
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v8[0]);
  }
  return v7;
}
