void __thiscall sub_102F7100(int this, __int64 a2, int a3, float a4)
{
  unsigned int v5; // eax
  int v6; // eax
  void (__thiscall *v7)(int, const char *, _DWORD, _DWORD, _DWORD, _DWORD); // edx

  if ( *(_DWORD *)(this + 5328) == 2
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 320))(a2)
    && (v5 = *(_DWORD *)(this + 300), v5 != -1)
    && off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v5 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1] )
  {
    v6 = sub_10019AD0((_DWORD *)this);
    (*(void (__thiscall **)(int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)v6 + 372))(
      v6,
      a2,
      HIDWORD(a2),
      a3,
      LODWORD(a4));
  }
  else
  {
    v7 = *(void (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2344);
    *(_BYTE *)(this + 4164) = 1;
    v7(this, "TLK_USE", 0, 0, 0, 0);
    *(_BYTE *)(this + 4164) = 0;
    sub_1010DD80((_DWORD *)(this + 5900), a2, 0.0);
  }
}
