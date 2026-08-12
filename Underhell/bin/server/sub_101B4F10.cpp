void __cdecl sub_101B4F10(int a1, char a2)
{
  unsigned __int16 v2; // ax

  if ( a1 )
  {
    v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 92))(a1);
    if ( a2 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 88))(a1, v2 | 0x1000);
    else
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 88))(a1, v2 & 0xEFFF);
  }
}
