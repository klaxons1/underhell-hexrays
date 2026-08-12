int __thiscall sub_1026A460(void *this, char *Source, int a3, int a4, int a5, int a6)
{
  int v7; // esi

  if ( sub_100DDA40(400) )
    v7 = sub_1026FB60((int)this, Source, a3, 0, 1);
  else
    v7 = 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 1028))(v7, a4);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 172))(v7, a5);
  sub_1026F3A0(a6);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 772))(this, v7);
}
