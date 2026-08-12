char __thiscall sub_100C7C00(void *this, int a2)
{
  sub_1023C380((int)"BaseCombatCharacter.CorpseGib", 0.0, 0);
  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 1032))(this) )
  {
    sub_101671F0(this);
    sub_101675C0(this, 4, 0);
    return 1;
  }
  else if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 1036))(this) )
  {
    sub_101675C0(this, 4, 1);
    return 1;
  }
  else
  {
    return 0;
  }
}
