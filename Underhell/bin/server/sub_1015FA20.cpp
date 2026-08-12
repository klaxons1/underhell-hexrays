void __thiscall sub_1015FA20(int this, int a2)
{
  int v3; // edi
  int v4; // edi
  double v5; // st7
  float v6; // [esp+30h] [ebp+8h]

  if ( !*(_BYTE *)(this + 804) )
  {
    v3 = *(_DWORD *)(this + 800);
    if ( v3 )
    {
      if ( *(_DWORD *)(a2 + 24) == 1 )
        v5 = *(float *)(a2 + 8);
      else
        v5 = 0.0;
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v6 = v5;
      (*(void (__stdcall **)(int, int, _DWORD))(*(_DWORD *)off_10627F88 + 144))(this + 580, v3, LODWORD(v6));
    }
    else
    {
      v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      DevMsg(
        1,
        "CPointGamestatsCounter::InputIncrement:  No stat name specified for point_gamestats_counter @%f, %f, %f [ent index %d]\n",
        *(float *)(this + 580),
        *(float *)(this + 584),
        *(float *)(this + 588),
        v4);
    }
  }
}
