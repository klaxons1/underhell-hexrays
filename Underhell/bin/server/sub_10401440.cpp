void __usercall sub_10401440(int a1@<ecx>, float a2@<ebx>)
{
  void *v3; // edi
  void (__thiscall *v4)(int, int); // eax

  if ( !*(_BYTE *)(a1 + 1392) )
  {
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)a1 + 1132))(13, 0.0);
    v3 = (void *)sub_100D1940((_DWORD *)a1);
    if ( v3 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)v3 + 320))(v3) )
      {
        if ( *(_BYTE *)(dword_106B3CDC + 12) != 1 )
          sub_101E3110(v3, 0x14u, 0, 4u);
        if ( *(float *)(a1 + 1424) < 0.0 )
          *(float *)(a1 + 1424) = 0.0;
        v4 = *(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 944);
        *(float *)(a1 + 1428) = 1.0;
        v4(a1, 174);
        *(_BYTE *)(a1 + 1392) = 1;
        sub_103FF610((_DWORD *)a1, a2);
        *(_DWORD *)(a1 + 9828) = 2;
        if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
          sub_103FE6A0((_DWORD *)a1);
        else
          sub_103FDD20((_DWORD *)a1);
      }
    }
  }
}
