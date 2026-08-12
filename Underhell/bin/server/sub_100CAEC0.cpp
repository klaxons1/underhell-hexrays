int __thiscall sub_100CAEC0(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // edi
  _DWORD *v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  int v12; // [esp+8h] [ebp-4h]

  sub_100BD350();
  sub_1023B8B0("BaseCombatCharacter.CorpseGib");
  sub_1023B8B0("BaseCombatCharacter.StopWeaponSounds");
  result = sub_1023B8B0("BaseCombatCharacter.AmmoPickup");
  v3 = this[443] - 1;
  v12 = v3;
  if ( v3 >= 0 )
  {
    v4 = 16 * v3;
    do
    {
      v5 = (_DWORD *)(v4 + this[440]);
      if ( (*v5 == -1 || off_1061BE18[4 * (*v5 & 0xFFF) + 2] != *v5 >> 12 || !off_1061BE18[4 * (*v5 & 0xFFF) + 1])
        && !v5[1] )
      {
        DevMsg(2, "Removing relationship for lost entity\n");
        v6 = this[443];
        if ( v6 > 0 )
        {
          v7 = this[440];
          v8 = 2 * v6;
          v9 = *(_DWORD *)(v7 + 8 * v8 - 16);
          v10 = (_DWORD *)(v7 + 8 * v8 - 16);
          v11 = (_DWORD *)(v4 + v7);
          *v11 = v9;
          v11[1] = v10[1];
          v11[2] = v10[2];
          v11[3] = v10[3];
          --this[443];
        }
      }
      result = v12 - 1;
      v4 -= 16;
      v12 = result;
    }
    while ( result >= 0 );
  }
  return result;
}
