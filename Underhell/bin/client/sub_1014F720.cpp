int sub_1014F720()
{
  int result; // eax
  int v1; // esi
  int v2; // eax

  result = sub_100422D0();
  if ( result )
  {
    v1 = *off_103ED0D8;
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)result + 940))(result);
    return (*(int (__thiscall **)(int *, int))(v1 + 60))(off_103ED0D8, v2);
  }
  return result;
}
