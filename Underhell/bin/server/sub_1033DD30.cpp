int __thiscall sub_1033DD30(int this, int a2)
{
  int v3; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // ecx

  if ( sub_10023D10((_DWORD *)this, 78) )
  {
    v3 = *(_DWORD *)(this + 3624);
    if ( v3 )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 136))(v3, dword_106E6524);
    else
      return sub_1002CC40((_DWORD *)this, dword_106E6524);
  }
  else
  {
    v5 = a2;
    if ( a2 == 18 )
    {
      if ( sub_100CF660((_DWORD *)this, (int)"weapon_grenadelauncher", 0) )
        return dword_106E6528;
      else
        return dword_106E652C;
    }
    else
    {
      if ( a2 == 1 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 2168))(this) )
      {
        v6 = *(_DWORD *)(this + 2324);
        if ( v6 == 3 || v6 == 2 )
          v5 = 76;
      }
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4276) + 1364))(*(_DWORD *)(this + 4276)) == this + 4272 )
      {
        switch ( v5 )
        {
          case 1:
            v5 = 76;
            break;
          case 6:
            v5 = 7;
            break;
          case 11:
            v5 = 12;
            break;
        }
      }
      v7 = *(_DWORD *)(this + 3624);
      if ( v7 )
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 136))(v7, v5);
      else
        return sub_1002CC40((_DWORD *)this, v5);
    }
  }
}
