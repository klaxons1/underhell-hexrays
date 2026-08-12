void __usercall sub_1017F840(_DWORD *a1@<ecx>, int a2@<esi>)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  unsigned int v5; // eax
  int v6; // eax

  if ( a1[70] )
  {
    (*(void (__thiscall **)(_DWORD *))(*a1 + 864))(a1);
    v3 = sub_10034900(0x4F8u);
    if ( v3 )
    {
      v4 = sub_10067050(v3);
      if ( v4 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, const char *, int))(*v4 + 324))(v4, Locale, 13) )
        {
          a1[77] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*v4 + 8))(v4, a2);
          v5 = a1[71];
          if ( v5 == -1 || *((_DWORD *)off_103DCD74 + 4 * (a1[71] & 0xFFF) + 2) != v5 >> 12 )
            v6 = 0;
          else
            v6 = *((_DWORD *)off_103DCD74 + 4 * (a1[71] & 0xFFF) + 1);
          (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*v4 + 596))(v4, *(_DWORD *)(a1[70] + 12), v6);
        }
        else
        {
          sub_10038340(v4);
        }
      }
    }
  }
}
