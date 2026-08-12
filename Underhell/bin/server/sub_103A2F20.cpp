void __thiscall sub_103A2F20(int this)
{
  int *v2; // ecx
  int v3; // eax

  if ( (*(_BYTE *)(this + 250) & 1) == 0 && !*(_BYTE *)(this + 3800) )
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/roller_spikes.mdl");
    sub_1039FC20(this);
    sub_1023C380((_DWORD *)this, (int)"NPC_RollerMine.OpenSpikes", 0.0, 0);
    *(_DWORD *)(this + 196) = sub_103A1550;
    if ( *(_BYTE *)(this + 3800) != 1 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v2 = *(int **)(this + 24);
        if ( v2 )
          sub_100194B0(v2, 3800);
      }
      *(_BYTE *)(this + 3800) = 1;
    }
    if ( !*(_DWORD *)(this + 3832) )
    {
      if ( sub_1039E8B0((void *)this) )
      {
        sub_1039F290(this, 256.0);
      }
      else if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
             || (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this),
                 (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 220))(v3) != 6) )
      {
        sub_1039F290(this, 128.0);
      }
    }
  }
}
