int __thiscall sub_10148920(int this)
{
  const char *v2; // eax
  const char *v3; // edi
  const char *v4; // eax
  int v5; // eax
  char *v6; // esi
  unsigned int i; // esi
  int v8; // eax
  double v10; // [esp+0h] [ebp-20h]
  double v11; // [esp+8h] [ebp-18h]
  double v12; // [esp+10h] [ebp-10h]

  switch ( *(_DWORD *)(this + 812) )
  {
    case 0:
    case 7:
      v2 = "GlassChunks";
      break;
    case 1:
      goto LABEL_15;
    case 2:
      v2 = "MetalChunks";
      break;
    case 4:
    case 8:
      v2 = "ConcreteChunks";
      break;
    case 0xA:
      v2 = String;
      break;
    default:
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v3 = *(const char **)(this + 92);
      if ( !v3 )
        v3 = String;
      v12 = *(float *)(this + 588);
      v11 = *(float *)(this + 584);
      v10 = *(float *)(this + 580);
      v4 = sub_100D6390((_DWORD *)this);
      Warning("%s (%s) at (%.3f %.3f %.3f) using obsolete or unknown material type.\n", v3, v4, v10, v11, v12);
LABEL_15:
      v2 = "WoodChunks";
      break;
  }
  if ( *(_DWORD *)(this + 836) && (v2 = *(const char **)(this + 836)) == 0 || !v2 || !*v2 )
    v2 = 0;
  *(_DWORD *)(this + 864) = v2;
  v5 = CommandLine_Tier0();
  if ( (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v5 + 12))(v5, "-makereslists", 0) )
  {
    for ( i = 0; i < 27; ++i )
    {
      v8 = dword_10625430[i];
      if ( v8 && sub_104292D0(v8, "unused", 6) )
        sub_10260680((void *)dword_10625430[i], 0);
    }
  }
  else if ( *(_DWORD *)(this + 840) )
  {
    v6 = *(char **)(this + 840);
    if ( !v6 )
      v6 = (char *)String;
    sub_10260680(v6, 0);
  }
  sub_1023B8B0("Breakable.MatGlass");
  sub_1023B8B0("Breakable.MatWood");
  sub_1023B8B0("Breakable.MatMetal");
  sub_1023B8B0("Breakable.MatFlesh");
  sub_1023B8B0("Breakable.MatConcrete");
  sub_1023B8B0("Breakable.Computer");
  sub_1023B8B0("Breakable.Crate");
  sub_1023B8B0("Breakable.Glass");
  sub_1023B8B0("Breakable.Metal");
  sub_1023B8B0("Breakable.Flesh");
  sub_1023B8B0("Breakable.Concrete");
  return sub_1023B8B0("Breakable.Ceiling");
}
