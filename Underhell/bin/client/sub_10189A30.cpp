_DWORD *__thiscall sub_10189A30(_DWORD *this, char a2)
{
  *this = &CSpectatorGUI::`vftable';
  dword_10445708 = 0;
  this[63] = &IViewPortPanel::`vftable';
  sub_1024C2A0(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
