void __thiscall sub_101854E0(_DWORD *this)
{
  int i; // esi
  char *v3; // eax

  for ( i = 0; i < this[4]; ++i )
  {
    v3 = (char *)(*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_106B3204 + 40))(*(unsigned __int16 *)(this[1] + 2 * i));
    sub_100D69F0(v3);
  }
}
