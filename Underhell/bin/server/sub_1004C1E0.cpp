char *__thiscall sub_1004C1E0(char **this, int a2)
{
  int v2; // esi

  v2 = a2;
  if ( (unsigned int)(a2 - 100000) <= 0x270F )
  {
    (*((void (__thiscall **)(char **))*this + 13))(this);
    v2 = sub_1007DB30(a2);
  }
  return sub_10023CB0(this[1], v2);
}
