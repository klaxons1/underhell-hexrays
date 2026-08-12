void __thiscall sub_101099A0(int this, int a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int v6; // eax
  int v7; // eax
  char Destination[512]; // [esp+4h] [ebp-200h] BYREF

  if ( *(_BYTE *)(this + 20) )
  {
    if ( !a2 )
      sub_10109720(this, "int differs (net %i pred %i) diff(%i)\n", *a4, *a3, *a3 - *a4);
    if ( (*(_WORD *)(*(_DWORD *)(this + 24) + 18) & 0x800) != 0
      && (v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, *a3)) != 0 )
    {
      Destination[0] = 0;
      v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 12))(dword_10413178, v6);
      sub_102286F0(v7, Destination, 0x200u);
      sub_101097C0(this, a2, "integer (%i->%s)\n", *a3, Destination);
    }
    else
    {
      sub_101097C0(this, a2, "integer (%i)\n", *a3);
    }
  }
}
