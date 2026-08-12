char __thiscall sub_10098480(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  char result; // al
  int v5; // eax
  int v6; // edx
  const char *v7; // eax

  result = sub_10096D90(this, (int)"TLK_QUESTION", 3);
  if ( result )
  {
    if ( a2 )
      this[1096] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
    else
      this[1096] = -1;
    v5 = RandomInt(0, 100);
    v6 = *this;
    this[1098] = v5;
    (*(void (__thiscall **)(_DWORD *))(v6 + 1656))(this);
    if ( !(unsigned __int8)sub_100AFBB0("TLK_HELLO_NPC") )
    {
      v7 = (const char *)a2[23];
      if ( !v7 )
        v7 = String;
      if ( (const char *)this[23] != v7 && !(unsigned __int8)sub_100D6240(v7) )
      {
        if ( sub_10098230(this, "TLK_HELLO_NPC", 0, (int)a2, a3) )
          return 1;
        (*(void (__thiscall **)(_DWORD *))(*this + 1656))(this);
        sub_100B0060("TLK_HELLO_NPC", 0, 1);
      }
    }
    return sub_10098230(this, "TLK_QUESTION", 0, (int)a2, a3);
  }
  return result;
}
