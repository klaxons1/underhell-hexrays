int __thiscall sub_1007D7F0(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // edx
  int v6; // edi
  int (__thiscall ***v7)(_DWORD, int); // eax
  int result; // eax

  v5 = this[3];
  v6 = 4 * (a3 + 4 * a2) + 12;
  if ( *(_DWORD *)(v6 + v5) )
  {
    v7 = *(int (__thiscall ****)(_DWORD, int))(v6 + v5);
    if ( v7 )
    {
      result = (**v7)(v7, 1);
      *(_DWORD *)(v6 + this[3]) = a4;
    }
    else
    {
      result = this[3];
      *(_DWORD *)(v6 + v5) = a4;
    }
  }
  else
  {
    result = a4;
    *(_DWORD *)(v6 + v5) = a4;
  }
  return result;
}
