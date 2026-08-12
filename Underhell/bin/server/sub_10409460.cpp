void __usercall sub_10409460(int a1@<ecx>, int a2@<ebp>)
{
  void (__stdcall *v3)(int, _DWORD); // edx

  if ( *(_BYTE *)(a1 + 1393) )
  {
    sub_10408BA0((_DWORD *)a1);
  }
  else if ( !*(_BYTE *)(a1 + 1394) )
  {
    v3 = *(void (__stdcall **)(int, _DWORD))(*(_DWORD *)a1 + 1132);
    *(_BYTE *)(a1 + 1393) = 1;
    v3(12, 0.0);
    sub_104091D0(a1, a2);
    sub_10408C80((_DWORD *)a1);
  }
}
