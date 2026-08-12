char __fastcall sub_1033DC30(_DWORD *a1, int a2, unsigned int a3, int a4, int *a5)
{
  int v6; // eax

  if ( (a1[62] & 0x10000) != 0 && (v6 = (*(int (__thiscall **)(_DWORD *))(*a1 + 1868))(a1), sub_10077840(v6, a3)) )
    return 0;
  else
    return sub_100CEF80((unsigned int)a1, a2, a3, a4, a5);
}
