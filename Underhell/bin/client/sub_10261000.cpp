int __usercall sub_10261000@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>)
{
  _DWORD *v3; // esi

  sub_1011A810(a1 + 68);
  v3 = a1 + 52;
  sub_10287290(a1 + 52);
  if ( (int)a1[54] >= 0 )
  {
    if ( *v3 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v3);
      *v3 = 0;
    }
    a1[53] = 0;
  }
  return sub_10240430((int)a1, a2, (int)a1);
}
