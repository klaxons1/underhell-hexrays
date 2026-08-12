void __usercall sub_101B5940(int a1@<ecx>, int a2@<esi>, char a3)
{
  int v3; // ebx
  int i; // edi
  int v5; // esi
  __int16 v6; // ax
  unsigned __int16 v7; // ax
  _DWORD v9[1024]; // [esp+0h] [ebp-1000h] BYREF

  if ( a1 )
  {
    v3 = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 624))(a1, v9, 1024);
    for ( i = 0; i < v3; ++i )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v9[i] + 4))(v9[i]) )
      {
        v5 = v9[i];
        v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 76))(v5, a2);
        if ( a3 )
          v7 = v6 | 0x40;
        else
          v7 = v6 & 0xFFBF;
        a2 = v7;
        (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 72))(v5);
      }
    }
  }
}
