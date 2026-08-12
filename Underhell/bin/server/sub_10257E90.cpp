int __thiscall sub_10257E90(_DWORD *this, unsigned int a2)
{
  int result; // eax

  sub_102576F0(this, a2);
  result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)a2 + 320))(a2);
  if ( !(_BYTE)result )
  {
    result = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)a2 + 288))(a2);
    if ( result )
      *(_BYTE *)(result + 1669) = 0;
  }
  return result;
}
