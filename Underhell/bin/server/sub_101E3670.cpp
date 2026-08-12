int __thiscall sub_101E3670(void *this, int a2)
{
  int v2; // eax
  float v4; // [esp+0h] [ebp-Ch]

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v2 = *(_DWORD *)(a2 + 8);
  else
    v2 = 0;
  v4 = (float)(int)abs32(v2);
  return (*(int (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)this + 260))(LODWORD(v4), 0);
}
