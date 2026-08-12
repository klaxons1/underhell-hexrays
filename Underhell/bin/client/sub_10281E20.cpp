char *__thiscall sub_10281E20(void *this)
{
  void *v2; // ecx
  int v3; // eax
  int v4; // ecx
  char *v5; // eax

  v2 = (void *)*((_DWORD *)this + 128);
  if ( v2 )
  {
    sub_1022AF00(v2);
    *((_DWORD *)this + 128) = 0;
  }
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1036))(this);
  v4 = *((_DWORD *)this + 113);
  *((_DWORD *)this + 128) = v3;
  v5 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 76))(v4);
  return sub_102282F0((char *)this + 516, v5, 255);
}
