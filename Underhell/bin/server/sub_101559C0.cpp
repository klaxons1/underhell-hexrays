void __stdcall sub_101559C0(int a1, int a2)
{
  int v2; // ecx
  int v3; // esi

  if ( !a1
    || (v2 = *(_DWORD *)(a1 + 12)) == 0
    || (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 20))(v2)) == 0
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
  {
    v3 = 0;
  }
  sub_10110560(v3, a2);
}
