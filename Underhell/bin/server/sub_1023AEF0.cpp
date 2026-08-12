int __cdecl sub_1023AEF0(int a1, int a2)
{
  int result; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  result = (*(unsigned __int16 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3204 + 28))(dword_106B3204, a2);
  v3 = result;
  if ( (_WORD)result != 0xFFFF )
    return sub_1023AC80(&off_1064C3E8, a1, a2, (__int16 *)&v3);
  return result;
}
