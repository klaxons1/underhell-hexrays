char __thiscall sub_103983D0(int this, int a2)
{
  int v3; // eax
  char *v4; // eax
  int v5; // eax

  sub_10093C70((_DWORD *)this, a2);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    if ( sub_103960A0(v3) )
    {
      sub_10067EB0(a2, "enemy");
      v4 = dword_106EA244;
      if ( !dword_106EA244 )
        v4 = (char *)String;
      sub_10067DE0(a2, "enemy", v4, 1.0);
    }
  }
  LOBYTE(v5) = sub_10023D10((_DWORD *)this, 76);
  if ( (_BYTE)v5 )
    LOBYTE(v5) = (unsigned __int8)sub_10067DE0(a2, "hurt_by_fire", "1", 1.0);
  if ( *(_BYTE *)(this + 5600) )
  {
    v5 = sub_103942C0(this) + 2;
    switch ( v5 )
    {
      case 0:
        LOBYTE(v5) = (unsigned __int8)sub_10067DE0(a2, (void *)"readiness", "panic", 1.0);
        break;
      case 1:
        LOBYTE(v5) = (unsigned __int8)sub_10067DE0(a2, (void *)"readiness", "stealth", 1.0);
        break;
      case 2:
        LOBYTE(v5) = (unsigned __int8)sub_10067DE0(a2, (void *)"readiness", "relaxed", 1.0);
        break;
      case 3:
        LOBYTE(v5) = (unsigned __int8)sub_10067DE0(a2, (void *)"readiness", "stimulated", 1.0);
        break;
      case 4:
        LOBYTE(v5) = (unsigned __int8)sub_10067DE0(a2, (void *)"readiness", "agitated", 1.0);
        break;
      default:
        return v5;
    }
  }
  return v5;
}
