int __usercall sub_103933E0@<eax>(_BYTE *a1@<ecx>, double a2@<st0>)
{
  void (__thiscall *v4)(_BYTE *, const char *, _DWORD, _DWORD, _DWORD, _DWORD); // edx

  if ( sub_10023D10(a1, 50) )
  {
    (*(void (__thiscall **)(_BYTE *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 2344))(
      a1,
      "TLK_DANGER",
      0,
      0,
      0,
      0);
    return 28;
  }
  else
  {
    if ( sub_10023D10(a1, 74) && !a1[4689] && sub_10093C40(a1) )
    {
      v4 = *(void (__thiscall **)(_BYTE *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 2244);
      a1[4689] = 1;
      v4(a1, "TLK_IDLE", 0, 0, 0, 0);
    }
    if ( sub_1032ECA0(a1) || !sub_10023D10(a1, 4) )
      return sub_10097980((int *)a1, a2);
    else
      return 50;
  }
}
