void __thiscall sub_10370E30(_DWORD *this)
{
  float v2; // [esp+0h] [ebp-Ch]

  v2 = 0.0;
  if ( sub_10023D10(this, 11) )
    sub_1023C380(this, (int)"NPC_Hunter.Scan", v2, 0);
  else
    sub_1023C380(this, (int)"NPC_Hunter.Idle", v2, 0);
}
