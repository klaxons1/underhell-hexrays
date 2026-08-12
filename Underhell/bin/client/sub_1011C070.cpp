int sub_1011C070()
{
  int i; // esi
  int v1; // ecx
  int result; // eax

  for ( i = dword_10437688; i; i = *(_DWORD *)(i + 8) )
  {
    v1 = *(_DWORD *)(i + 4);
    if ( v1 )
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 4))(v1);
  }
  return result;
}
