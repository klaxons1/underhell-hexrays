int __thiscall sub_10109ED0(_DWORD *this, int a2, _DWORD *a3, int a4, int a5)
{
  int result; // eax
  int v7; // eax
  int v8; // eax
  char Destination[512]; // [esp+4h] [ebp-200h] BYREF

  result = this[6];
  if ( this[13] == result )
  {
    if ( (*(_WORD *)(result + 18) & 0x800) != 0
      && (v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, *a3)) != 0 )
    {
      Destination[0] = 0;
      v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 12))(dword_10413178, v7);
      sub_102286F0(v8, Destination, 0x200u);
      return sub_10109E10((int)this, "integer (%i->%s)", *a3, Destination);
    }
    else
    {
      return sub_10109E10((int)this, "integer (%i)", *a3);
    }
  }
  return result;
}
