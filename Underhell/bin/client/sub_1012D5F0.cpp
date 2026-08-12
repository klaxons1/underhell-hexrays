void __cdecl sub_1012D5F0(int a1, int a2)
{
  if ( a2 != -1 && !(a2 ? *(_DWORD *)(dword_10439254 + 48) == 0 : *(_DWORD *)(dword_104391C4 + 48) == 0) )
  {
    if ( a2 )
    {
      if ( a2 == 3 )
      {
        if ( 1.0 != *(float *)(a1 + 44) )
          (*(void (__thiscall **)(_DWORD, int, const char *))(**(_DWORD **)(a1 + 76) + 452))(
            *(_DWORD *)(a1 + 76),
            a1,
            "AceBlood");
      }
      else if ( 1.0 != *(float *)(a1 + 44) )
      {
        (*(void (__thiscall **)(_DWORD, int, const char *))(**(_DWORD **)(a1 + 76) + 452))(
          *(_DWORD *)(a1 + 76),
          a1,
          "YellowBlood");
      }
    }
    else if ( 1.0 != *(float *)(a1 + 44) )
    {
      (*(void (__thiscall **)(_DWORD, int, const char *))(**(_DWORD **)(a1 + 76) + 452))(
        *(_DWORD *)(a1 + 76),
        a1,
        "Blood");
    }
  }
}
