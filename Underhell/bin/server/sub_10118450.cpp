void __userpurge sub_10118450(int a1@<ecx>, int a2@<esi>, int a3, int a4)
{
  if ( *(_BYTE *)(a1 + 4) )
  {
    (*(void (__thiscall **)(int, char *, int, _DWORD, int))(*(_DWORD *)a3 + 64))(a3, &byte_1069BF89, 1, 0, a2);
    if ( byte_1069BF89 )
    {
      (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)a3 + 8))(a3, &dword_1069C008, &dword_10615824);
      dword_1069042C = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 56))(a3);
    }
    sub_10110F90(&dword_1069C0A8);
  }
}
