void __usercall sub_1027C2C0(int a1@<ecx>, int a2@<ebp>)
{
  int v3; // eax

  if ( !*(_BYTE *)(a1 + 1410) )
  {
    *(_BYTE *)(a1 + 1409) = 1;
    sub_1027C0C0((_DWORD *)a1, a2);
    v3 = sub_100D1940((_DWORD *)a1);
    if ( v3 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3);
  }
}
