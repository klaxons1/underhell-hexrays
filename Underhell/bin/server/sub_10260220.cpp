int __cdecl sub_10260220(int a1, int a2, int a3, unsigned __int8 a4)
{
  int v5; // [esp-4h] [ebp-4h]

  sub_10154B40(a1, "SayText");
  if ( a3 )
  {
    v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a3 + 24));
    sub_10154BB0(v5);
  }
  else
  {
    sub_10154BB0(0);
  }
  sub_10154D00(a2);
  sub_10154BB0(a4);
  return sub_10154B90();
}
