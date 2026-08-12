bool __stdcall sub_100268B0(int a1, int a2)
{
  int v2; // eax
  int v3; // esi
  bool result; // al

  result = 0;
  if ( (unsigned __int8)sub_1012D420(a1, a2) )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 28))(a1);
    v3 = v2;
    if ( !v2
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 520))(v2)
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 504))(v3) )
    {
      return 1;
    }
  }
  return result;
}
