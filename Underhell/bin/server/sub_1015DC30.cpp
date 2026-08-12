char *__thiscall sub_1015DC30(char *this)
{
  char *result; // eax

  sub_100E33C0(this, 0);
  *(_DWORD *)this = &CGameRulesProxy::`vftable';
  if ( dword_106B3CD8 )
    sub_1025FAC0(dword_106B3CD8);
  result = this;
  dword_106B3CD8 = (int)this;
  return result;
}
