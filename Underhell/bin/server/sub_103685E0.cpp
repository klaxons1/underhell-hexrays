int __thiscall sub_103685E0(int this, int a2)
{
  const char **v3; // ecx
  const char *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int result; // eax
  unsigned int v9; // edi
  int *v10; // ecx

  sub_10023CB0((char *)this, 25);
  v3 = (const char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = String;
  }
  else
  {
    v4 = sub_1010D460((int)v3);
  }
  v5 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)this + 2000))(this, v4, 0);
  v6 = __RTDynamicCast(
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CPropJeepEpisodic `RTTI Type Descriptor',
         0);
  v7 = v6;
  if ( v6 && (**(unsigned __int8 (__thiscall ***)(int, int, _DWORD))(v6 + 1488))(v6 + 1488, this, 0) )
  {
    sub_102A12B0(this + 3832, v7, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)(this + 3832) + 332))(this + 3832);
  }
  result = *(_DWORD *)(this + 248);
  v9 = result & 0xFFFFFFFD;
  if ( result != (result & 0xFFFFFFFD) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 248) = v9;
    }
    else
    {
      v10 = *(int **)(this + 24);
      if ( v10 )
        result = sub_100194B0(v10, 248);
      *(_DWORD *)(this + 248) = v9;
    }
  }
  return result;
}
