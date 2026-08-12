int __thiscall sub_1011BFF0(void *this)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  int i; // edi
  int v6; // esi
  char v7; // [esp+8h] [ebp-4h]

  v2 = CommandLine_Tier0(this);
  result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 40))(v2, "-filmgrain");
  if ( result )
  {
    v4 = (*(int (__thiscall **)(void *, const char *))(*(_DWORD *)this + 8))(this, "filmgrain");
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 16))(v4, 1);
  }
  for ( i = dword_10437688; i; i = *(_DWORD *)(i + 8) )
  {
    v6 = *(_DWORD *)(i + 4);
    if ( v6 )
    {
      v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 20))(*(_DWORD *)(i + 4));
      (**(void (__thiscall ***)(int))v6)(v6);
      result = (*(int (__thiscall **)(int, char))(*(_DWORD *)v6 + 16))(v6, v7);
    }
  }
  return result;
}
