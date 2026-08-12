int __thiscall sub_1026DAF0(void *this, char *Source, int a3)
{
  int v4; // esi

  if ( sub_100DDA40(396) )
    v4 = sub_1026EA30((int)this, Source, (int)Source);
  else
    v4 = 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 1064))(v4, a3);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 768))(this, v4);
}
