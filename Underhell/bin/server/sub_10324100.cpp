int __userpurge sub_10324100@<eax>(int *a1@<ecx>, int a2@<edi>, int a3)
{
  int *v4; // eax
  int v5; // eax
  int v6; // ecx
  int v8[11]; // [esp+4h] [ebp-50h] BYREF
  unsigned int v9; // [esp+30h] [ebp-24h]
  float v10; // [esp+38h] [ebp-1Ch]
  char v11; // [esp+44h] [ebp-10h]

  sub_1001E4E0(v8, a3);
  if ( v11 < 0 )
    v10 = (float)a1[55];
  if ( a1[593] == 1 )
    (*(void (__thiscall **)(int *, int))(*a1 + 1416))(a1, 62);
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    if ( v9 != -1 )
    {
      v4 = &off_1061BE18[4 * (v9 & 0xFFF) + 1];
      if ( off_1061BE18[4 * (v9 & 0xFFF) + 2] == v9 >> 12 )
      {
        if ( *v4 )
        {
          v5 = off_1061BE18[4 * (v9 & 0xFFF) + 2] == v9 >> 12 ? *v4 : 0;
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 220))(v5) == 3 )
          {
            if ( v9 == -1 || off_1061BE18[4 * (v9 & 0xFFF) + 2] != v9 >> 12 )
              v6 = 0;
            else
              v6 = off_1061BE18[4 * (v9 & 0xFFF) + 1];
            if ( *(char **)(v6 + 92) == "npc_alyx" || sub_100D6240((_DWORD *)v6, "npc_alyx") )
              v10 = v10 + v10;
          }
        }
      }
    }
  }
  sub_10323E80((int)a1);
  return sub_10035940(a1, a2, (int)v8);
}
