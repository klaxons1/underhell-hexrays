int __cdecl sub_10260280(int a1, int a2, unsigned __int8 a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // [esp-4h] [ebp-4h]

  sub_10154B40(a1, "SayText2");
  if ( a2 )
  {
    v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a2 + 24));
    sub_10154BB0(v9);
  }
  else
  {
    sub_10154BB0(0);
  }
  sub_10154BB0(a3);
  sub_10154D00(a4);
  if ( a5 )
    sub_10154D00(a5);
  else
    sub_10154D00((int)String);
  if ( a6 )
    sub_10154D00(a6);
  else
    sub_10154D00((int)String);
  if ( a7 )
    sub_10154D00(a7);
  else
    sub_10154D00((int)String);
  if ( a8 )
    sub_10154D00(a8);
  else
    sub_10154D00((int)String);
  return sub_10154B90();
}
