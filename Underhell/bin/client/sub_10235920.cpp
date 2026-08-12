int __thiscall sub_10235920(_WORD *this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // esi
  _DWORD *v6; // edx

  if ( dword_1047CA88 && *this != 0xFFFF )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_1047CA88 + 32))((unsigned __int16)*this);
    *this = -1;
  }
  result = a2;
  *this = a2;
  if ( (_WORD)a2 != 0xFFFF )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA88 + 28))(dword_1047CA88, a2);
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_1047CA88 + 40))((unsigned __int16)*this);
    if ( result )
    {
      v4 = 0;
      if ( *(int *)(result + 268) > 0 )
      {
        v5 = 0;
        do
        {
          v6 = (_DWORD *)(v5 + result + *(_DWORD *)(result + 272) + 8);
          if ( *v6 == -1 )
            *v6 = v4;
          ++v4;
          v5 += 20;
        }
        while ( v4 < *(_DWORD *)(result + 268) );
      }
    }
  }
  return result;
}
