int __thiscall sub_1012CD80(unsigned __int8 (__cdecl **this)(int, int), const char *a2, int a3)
{
  const char *v3; // esi
  char *v5; // eax
  const char *v7; // [esp+Ch] [ebp-8h] BYREF

  v3 = a2;
  if ( a2 )
  {
    v7 = a2;
    if ( sub_1012C120(this, (int)&v7) != -1 )
      Error("CUserMessages::Register '%' already registered\n", v3);
  }
  v5 = (char *)sub_100DDA40(28);
  if ( v5 )
  {
    *((_DWORD *)v5 + 2) = 0;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 4) = 0;
    *((_DWORD *)v5 + 5) = 0;
    *((_DWORD *)v5 + 6) = 0;
  }
  else
  {
    v5 = 0;
  }
  *(_DWORD *)v5 = a3;
  a2 = v5;
  *((_DWORD *)v5 + 1) = v3;
  return sub_1012CCD0((int)this, v3, (char **)&a2);
}
