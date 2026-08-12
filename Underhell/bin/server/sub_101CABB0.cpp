int __cdecl sub_101CABB0(int a1, int a2, char a3, float a4)
{
  int v5; // esi

  if ( a3 )
  {
    if ( (unsigned __int8)sub_101DAB40(a1, a2) )
      return 0;
  }
  else if ( *(float *)(a2 + 448) >= (double)*(float *)(dword_106B31C8 + 12) )
  {
    return 0;
  }
  v5 = sub_100E2680((int)"physics_npc_solver", &flt_106F1CA8, &flt_106F1CB4, 0);
  sub_101CAAD0(v5, a1, a2, a3, a4);
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 96))(v5);
  return v5;
}
