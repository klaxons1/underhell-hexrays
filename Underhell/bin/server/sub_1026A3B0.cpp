void __thiscall sub_1026A3B0(void *this)
{
  int v2; // eax
  int v3; // edi
  char *v4; // eax
  char *v5; // ecx
  char *String2; // [esp+4h] [ebp-4h] BYREF

  if ( *((_DWORD *)this + 12) )
  {
    (*(void (__thiscall **)(_DWORD, char **))(**((_DWORD **)this + 12) + 56))(*((_DWORD *)this + 12), &String2);
    v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 104))(this);
    v3 = v2;
    if ( v2 )
      v4 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 16))(v2);
    else
      v4 = 0;
    v5 = String2;
    if ( !String2 )
      v5 = (char *)String;
    sub_101BC610(v5, v4, (int *)this + 36);
    if ( v3 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 64))(v3);
  }
}
