char __cdecl sub_1011A6A0(int a1)
{
  char result; // al
  int v2; // [esp+4h] [ebp-4h]

  sub_1042C820(a1);
  result = *(_DWORD *)(v2 + 48) != 0;
  if ( result != byte_1069BF89 )
  {
    byte_1069BF89 = *(_DWORD *)(v2 + 48) != 0;
    sub_10117940();
    if ( byte_1069BF89 )
    {
      byte_1069C024 = 1;
      return sub_101198C0(dword_1069C008);
    }
    else
    {
      return sub_1011A3D0((int)dword_1069C008);
    }
  }
  return result;
}
