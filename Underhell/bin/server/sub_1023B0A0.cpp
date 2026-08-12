void __userpurge sub_1023B0A0(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, void *Src)
{
  void *v5; // edi

  if ( *(_BYTE *)(a1 + 4) )
  {
    v5 = Src;
    if ( *(_WORD *)sub_1042F670((char *)&Src + 2, Src) == 0xFFFF )
    {
      if ( !*(_DWORD *)(a1 + 8) )
        sub_1023A9E0(a1);
      sub_1042F910((int)&Src + 2, v5);
      if ( *(_DWORD *)(a1 + 8) )
      {
        (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
          dword_106B31D8 + 4,
          "\"",
          1,
          *(_DWORD *)(a1 + 8),
          a3,
          a2);
        strlen((const char *)v5);
        (*(void (__thiscall **)(int, void *))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(dword_106B31D8 + 4, v5);
        (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
          dword_106B31D8 + 4,
          "\"\n",
          2,
          *(_DWORD *)(a1 + 8));
      }
      else
      {
        Warning("Disabling precache logging due to file i/o problem!!!\n");
        *(_BYTE *)(a1 + 4) = 0;
      }
    }
  }
}
