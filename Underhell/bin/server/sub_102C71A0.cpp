int __fastcall sub_102C71A0(unsigned __int16 *a1, int a2)
{
  sub_10184DD0((int)a1, a2);
  sub_101129A0(a1 + 160, a1[178] | 1);
  sub_101129A0(a1 + 160, a1[178] | 2);
  return (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)a1 + 592))(a1);
}
