int __stdcall sub_10074D30(int a1, int a2)
{
  int v2; // eax

  if ( !sub_101A6B50() )
    return 1;
  v2 = sub_101A6B50();
  return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v2 + 132))(v2, a1, a2);
}
