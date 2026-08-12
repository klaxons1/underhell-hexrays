int __stdcall sub_10107E90(int a1)
{
  int result; // eax
  int v2; // esi

  result = sub_100422D0();
  v2 = result;
  if ( result )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)result + 1068))(result, a1);
    return (*(int (__thiscall **)(int))(*(_DWORD *)(v2 + 616) + 20))(v2 + 616);
  }
  return result;
}
