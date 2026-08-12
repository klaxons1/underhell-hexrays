char __thiscall sub_1004BA00(int *this, int a2)
{
  char v3; // bl
  char result; // al
  int v5; // edx
  int v6; // ecx
  int v7; // edi
  bool v8; // zf
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // [esp-Ch] [ebp-14h]
  int v15; // [esp-Ch] [ebp-14h]
  int v16; // [esp-8h] [ebp-10h]
  int v17; // [esp-8h] [ebp-10h]

  v3 = (*(int (__thiscall **)(int, int *, int))(*(_DWORD *)this[1] + 1376))(this[1], this, a2);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this[1] + 1268))(this[1]);
  if ( result )
  {
    if ( v3 )
    {
      v5 = this[1];
      if ( *(_DWORD *)(v5 + 2688) != -1
        && off_1061BE18[4 * (*(_DWORD *)(v5 + 2688) & 0xFFF) + 2] == *(_DWORD *)(v5 + 2688) >> 12
        && off_1061BE18[4 * (*(_DWORD *)(v5 + 2688) & 0xFFF) + 1] )
      {
        if ( *(_DWORD *)(v5 + 2688) == -1
          || off_1061BE18[4 * (*(_DWORD *)(v5 + 2688) & 0xFFF) + 2] != *(_DWORD *)(v5 + 2688) >> 12 )
        {
          v6 = 0;
        }
        else
        {
          v6 = off_1061BE18[4 * (*(_DWORD *)(v5 + 2688) & 0xFFF) + 1];
        }
        v7 = this[1];
        v8 = *(_BYTE *)(v6 + 877) == 0;
        v9 = v7 + 2688;
        if ( v8 )
        {
          v11 = sub_1026A890(v9);
          v17 = sub_100D6390(v11);
          v15 = sub_100D6390(v7);
          DevWarning("NPC: %s canceled script %s without playing, due to behavior change\n", v15, v17);
        }
        else
        {
          v10 = sub_1026A890(v9);
          v16 = sub_100D6390(v10);
          v14 = sub_100D6390(v7);
          DevWarning("NPC: %s canceled running script %s due to behavior change\n", v14, v16);
        }
        v12 = *(_DWORD *)(this[1] + 2688);
        if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(this[1] + 2688) & 0xFFF) + 2] != v12 >> 12 )
          v13 = 0;
        else
          v13 = off_1061BE18[4 * (*(_DWORD *)(this[1] + 2688) & 0xFFF) + 1];
        sub_102320D0(v13);
      }
      sub_10044510(this[1], (int)"Changed behavior status");
    }
    return v3;
  }
  return result;
}
