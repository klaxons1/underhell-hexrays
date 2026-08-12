void __thiscall sub_10327AA0(_BYTE *this, __int64 a2, int a3, int a4)
{
  void (__stdcall *v5)(const char *, _DWORD, _DWORD, _DWORD, _DWORD); // edx

  v5 = *(void (__stdcall **)(const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2344);
  this[4164] = 1;
  v5("TLK_USE", 0, 0, 0, 0);
  this[4164] = 0;
  sub_1010DD80((_DWORD *)this + 1430, a2, 0.0);
}
