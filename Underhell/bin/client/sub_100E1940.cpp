_DWORD *__thiscall sub_100E1940(_DWORD *this, char a2)
{
  *this = &CMoveHelperClient::`vftable';
  dword_10434620 = 0;
  sub_1011A810(this + 1);
  *this = &IMoveHelper::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
