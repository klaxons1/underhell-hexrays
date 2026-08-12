int __cdecl sub_10120990(int a1, int a2)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  result = (*(unsigned __int16 (__thiscall **)(int, int))(*(_DWORD *)dword_104131AC + 28))(dword_104131AC, a2);
  v3 = result;
  if ( (_WORD)result != 0xFFFF )
    return sub_10120830(&off_103E56F0, a1, a2, (__int16 *)&v3);
  return result;
}
