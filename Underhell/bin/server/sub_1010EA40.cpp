int __cdecl sub_1010EA40(_DWORD *a1)
{
  int result; // eax
  int v2; // esi
  int v3; // eax
  int v4; // [esp-8h] [ebp-8h]

  result = dword_106B31C8;
  if ( !*(_BYTE *)(dword_106B31C8 + 77) )
  {
    result = sub_10153490();
    v2 = result;
    if ( result )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
      if ( (_BYTE)result )
      {
        result = (int)a1;
        if ( *a1 == 2 )
        {
          sub_10429A00(byte_1069AFB8, 0x100u, "models/%s.mdl", a1[259]);
          (*(void (__thiscall **)(int, char *))(*(_DWORD *)v2 + 104))(v2, byte_1069AFB8);
          v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 24;
          v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
          return sub_1025F360(v2, v3 + 12, v4);
        }
      }
    }
  }
  return result;
}
