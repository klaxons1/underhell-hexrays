bool __thiscall sub_10059170(int this)
{
  int v2; // eax
  bool v3; // cl
  int v4; // eax
  bool v5; // al

  if ( *(int *)(dword_106B31C8 + 20) > 1 || !sub_10261B20() )
    return 0;
  v2 = *(int *)(dword_106B31C8 + 20) <= 1 ? sub_10261B20() : 0;
  if ( (unsigned __int8)sub_102B4350(v2) )
    return 0;
  v3 = sub_10023D10(*(_DWORD **)(this + 4), 17) || sub_10023D10(*(_DWORD **)(this + 4), 18);
  v4 = *(_DWORD *)(*(_DWORD *)(this + 4) + 2324);
  v5 = v4 == 1 || v4 == 2;
  return !v3 && (v5 || *(_BYTE *)(this + 62)) && sub_10058500((float *)this);
}
