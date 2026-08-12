char __cdecl sub_10086580(char ArgList)
{
  char Buffer[260]; // [esp+0h] [ebp-20Ch] BYREF
  char v3[260]; // [esp+104h] [ebp-108h] BYREF
  int v4; // [esp+208h] [ebp-4h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 452))(dword_106B3CDC) )
  {
    sub_10429A00(Buffer, 0x104u, "maps/%s%s.bsp", ArgList);
    sub_10429A00(v3, 0x104u, "maps/graphs/%s%s.ain", ArgList);
    if ( (*(int (__thiscall **)(int, char *, char *, int *))(*(_DWORD *)dword_106B31D0 + 208))(
           dword_106B31D0,
           Buffer,
           v3,
           &v4) )
    {
      if ( v4 <= 0 )
        return 1;
      if ( *(_DWORD *)(dword_1069367C + 48) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_106B31D8 + 4) + 40))(
               dword_106B31D8 + 4,
               v3,
               0) )
        {
          DevMsg(2, ".AIN File will *NOT* be updated. User Override.\n\n");
          DevMsg("\n*****Node Graph Rebuild OVERRIDDEN by user*****\n\n");
        }
        return 1;
      }
      DevMsg(2, ".AIN File will be updated\n\n");
    }
  }
  return 0;
}
