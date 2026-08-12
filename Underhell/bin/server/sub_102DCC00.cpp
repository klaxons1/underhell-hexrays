char __thiscall sub_102DCC00(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v7; // [esp+18h] [ebp-10h]
  int v8; // [esp+1Ch] [ebp-Ch]

  if ( sub_101B4DB0() )
  {
    LOBYTE(v3) = sub_1010C6E0(
                   (float *)dword_10614CA8,
                   (int)this,
                   "ForceDropPhysObjects",
                   0,
                   v7,
                   v8,
                   -1,
                   0,
                   0.0099999998,
                   a2,
                   (int)this,
                   0);
  }
  else if ( !*(_DWORD *)(dword_10698344 + 48)
         || (v4 = sub_100CF460(this), (v3 = sub_103FA8C0(v4)) == 0)
         || *(char **)(v3 + 92) != "grenade_helicopter"
         && (LOBYTE(v3) = sub_100D6240((_DWORD *)v3, "grenade_helicopter"), !(_BYTE)v3) )
  {
    sub_101E99A0(this);
    v5 = sub_100CF460(this);
    LOBYTE(v3) = sub_10403410(v5, 0);
  }
  return v3;
}
