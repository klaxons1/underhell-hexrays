void __thiscall sub_1033CFF0(_BYTE *this, int a2)
{
  const char *v3; // edi

  if ( a2 )
  {
    v3 = "COMBINEPRISONGUARD_KILL_MONST";
    if ( !this[4976] )
      v3 = "COMBINE_KILL_MONST";
    if ( (*(int (**)(void))(*(_DWORD *)a2 + 220))() == 1 )
    {
      v3 = "COMBINEPRISONGUARD_PLAYER_DEAD";
      if ( !this[4976] )
        v3 = "COMBINE_PLAYER_DEAD";
    }
    sub_100AC410((int)(this + 4244), v3, 2, 2);
  }
}
