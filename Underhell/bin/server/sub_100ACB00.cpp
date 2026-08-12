int __cdecl sub_100ACB00(int a1, int a2, int a3)
{
  int result; // eax
  _DWORD *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char v7; // [esp-Ch] [ebp-10Ch]
  char *v8; // [esp-8h] [ebp-108h]
  char Buffer[256]; // [esp+0h] [ebp-100h] BYREF

  result = dword_106951B4;
  if ( *(_DWORD *)(dword_106951B4 + 48) )
  {
    if ( sub_100D7680(a2) )
    {
      v8 = sub_10022AD0(Buffer, (char **)&a3);
      v4 = (_DWORD *)sub_100D7680(a2);
      sub_10029660(v4, (int)v8);
    }
    else
    {
      v5 = sub_10022AD0(Buffer, (char **)&a3);
      DevMsg(v5);
    }
    v6 = sub_10022AD0(Buffer, (char **)&a3);
    return sub_1025F5A0(v6, v7);
  }
  return result;
}
