void __cdecl sub_100E15F0(int *a1)
{
  int *v1; // edi
  float *v2; // esi
  bool v3; // zf
  float v4; // [esp+4h] [ebp-18h] BYREF
  float v5; // [esp+8h] [ebp-14h]
  float v6; // [esp+Ch] [ebp-10h]
  float v7; // [esp+10h] [ebp-Ch] BYREF
  float v8; // [esp+14h] [ebp-8h]
  float v9; // [esp+18h] [ebp-4h]

  v1 = a1;
  if ( *a1 >= 2 )
  {
    if ( sub_100DB2C0(a1, (int *)&a1, 0, &v4) )
    {
      v2 = (float *)a1;
      if ( (a1[63] & 0x800) != 0 )
        sub_100DAE60((int)a1);
      v3 = *v1 == 3;
      v7 = v2[176];
      v8 = v2[177];
      v9 = v2[178];
      if ( !v3 || sub_104291C0(v1[260], "allangles", 9) )
      {
        v8 = v5;
        sub_100E0EA0((int)v2, &v7);
      }
      else
      {
        v7 = v4;
        v8 = v5;
        v9 = v6;
        sub_100E0EA0((int)v2, &v7);
      }
    }
  }
  else
  {
    Msg("Format: ent_orient <entity name> <optional: allangles>\n");
  }
}
