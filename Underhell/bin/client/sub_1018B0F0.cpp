int __thiscall sub_1018B0F0(int this, char *String1)
{
  if ( !strcmp(String1, "okay") )
  {
    if ( *(_BYTE *)(this + 2743) )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C, this + 2743);
    (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 436) + 4))(
      *(_DWORD *)(this + 436),
      this + 428,
      0);
  }
  return sub_1024EC70(String1);
}
