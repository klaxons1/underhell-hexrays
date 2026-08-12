int sub_10110460()
{
  int result; // eax
  int *v1; // esi

  result = dword_1069ABE0;
  if ( *(_DWORD *)(*(_DWORD *)(dword_1069ABE0 + 28) + 48) )
  {
    result = sub_10153490();
    v1 = (int *)result;
    if ( result )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
      if ( (_BYTE)result )
      {
        if ( !*(_BYTE *)(dword_106B31C8 + 77) )
        {
          sub_100EAA50(v1, 0x8000);
          if ( (v1[64] & 0x8000) != 0 )
            return sub_102601C0(v1, 2, "notarget ON\n", 0, 0, 0, 0);
          else
            return sub_102601C0(v1, 2, "notarget OFF\n", 0, 0, 0, 0);
        }
      }
    }
  }
  return result;
}
