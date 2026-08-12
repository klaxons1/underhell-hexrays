int __thiscall sub_1026A6E0(void *this, char *Source, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // esi

  if ( sub_100DDA40(400) )
    v8 = sub_1026FB60((int)this, Source, a3, a6, 0);
  else
    v8 = 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 1028))(v8, a4);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 172))(v8, a5);
  sub_1026F3A0(a7);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 772))(this, v8);
}
