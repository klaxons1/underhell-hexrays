char __stdcall sub_10059BC0(int a1, int a2)
{
  int v2; // esi

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 12))(a1);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 6
    || (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 44))(v2) == 1 )
  {
    return sub_1012D420(a1, a2);
  }
  else
  {
    return 0;
  }
}
