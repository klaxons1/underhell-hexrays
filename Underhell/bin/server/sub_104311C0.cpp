int __thiscall sub_104311C0(int this, char *Src)
{
  *(_DWORD *)this = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  if ( Src )
    sub_10430FA0((char **)this, Src, strlen(Src) + 1);
  else
    sub_10430FA0((char **)this, 0, 0);
  return this;
}
