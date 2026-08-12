void __usercall sub_10409420(_BYTE *a1@<ecx>, int a2@<ebp>)
{
  void (__stdcall *v3)(int, _DWORD); // edx

  if ( !a1[1394] )
  {
    v3 = *(void (__stdcall **)(int, _DWORD))(*(_DWORD *)a1 + 1132);
    a1[1393] = 1;
    v3(12, 0.0);
    sub_104091D0((int)a1, a2);
    sub_10408C80(a1);
  }
}
