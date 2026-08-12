int __cdecl sub_100C80B0(int a1)
{
  int result; // eax
  int v2; // esi
  bool v3; // bl
  int (__thiscall ***v4)(_DWORD, int); // [esp+4h] [ebp-10h]
  int v5; // [esp+10h] [ebp-4h]

  result = sub_100B4090(&dword_1042FB78, "CHudHDRDemo");
  v2 = result;
  if ( result )
  {
    result = sub_10229170(a1);
    v3 = *(_DWORD *)(v5 + 48) != 0;
    if ( *(_DWORD *)(v5 + 48) )
    {
      if ( !*(_BYTE *)(v2 + 251) )
      {
        sub_10229600("hidehud");
        result = (**v4)(v4, 15);
      }
    }
    else if ( *(_BYTE *)(v2 + 251) )
    {
      sub_10229600("hidehud");
      result = (**v4)(v4, 0);
    }
    *(_BYTE *)(v2 + 251) = v3;
  }
  return result;
}
