void __cdecl sub_10265C30(int a1, int a2)
{
  if ( a2 != -1 && !(a2 ? *(_DWORD *)(dword_106CE75C + 48) == 0 : *(_DWORD *)(dword_106CE6CC + 48) == 0) )
  {
    if ( a2 )
    {
      if ( a2 == 3 )
      {
        if ( 1.0 != *(float *)(a1 + 44) )
          (*(void (__thiscall **)(_DWORD, int, const char *))(**(_DWORD **)(a1 + 76) + 304))(
            *(_DWORD *)(a1 + 76),
            a1,
            "AceBlood");
      }
      else if ( 1.0 != *(float *)(a1 + 44) )
      {
        (*(void (__thiscall **)(_DWORD, int, const char *))(**(_DWORD **)(a1 + 76) + 304))(
          *(_DWORD *)(a1 + 76),
          a1,
          "YellowBlood");
      }
    }
    else if ( 1.0 != *(float *)(a1 + 44) )
    {
      (*(void (__thiscall **)(_DWORD, int, const char *))(**(_DWORD **)(a1 + 76) + 304))(
        *(_DWORD *)(a1 + 76),
        a1,
        "Blood");
    }
  }
}
