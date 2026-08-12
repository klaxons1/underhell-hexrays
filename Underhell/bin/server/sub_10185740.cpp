int __cdecl sub_10185740(int a1, _DWORD *a2)
{
  int result; // eax
  int v3; // esi
  const char *v4; // ebx
  int v5; // eax
  int v6; // ecx
  char *v7; // eax
  _BYTE *v8; // eax
  int v9; // esi
  const char *v10; // esi
  char Buffer[256]; // [esp+4h] [ebp-10Ch] BYREF
  int v12; // [esp+104h] [ebp-Ch]
  int v13; // [esp+108h] [ebp-8h]
  int v14; // [esp+10Ch] [ebp-4h]

  sub_100BADE0(a1);
  v14 = 0;
  result = sub_10245270(a1);
  if ( result > 0 )
  {
    while ( 1 )
    {
      v3 = 0;
      v4 = (const char *)sub_10245550(v14);
      v12 = 0;
      if ( *((int *)v4 + 6) > 0 )
        break;
LABEL_13:
      v9 = ++v14;
      result = sub_10245270(a1);
      if ( v9 >= result )
        return result;
    }
    v13 = 0;
    while ( 1 )
    {
      v5 = v13 + *((_DWORD *)v4 + 7);
      v6 = *(_DWORD *)&v4[v5 + 4];
      v7 = (char *)&v4[v5];
      if ( v6 > 1008 )
        break;
      if ( v6 == 1008 )
        goto LABEL_10;
      if ( v6 != 15 )
      {
        if ( v6 != 1004 )
        {
LABEL_8:
          if ( (*((_DWORD *)v7 + 2) & 0x400) == 0 || v6 != 16 )
            goto LABEL_12;
        }
        goto LABEL_10;
      }
      if ( (v7[8] & 0x10) == 0 )
        goto LABEL_12;
      v8 = v7 + 12;
      if ( !*v8 )
      {
        Warning(
          "-- Error --:  empty soundname, .qc error on AE_CL_PLAYSOUND in model %s, sequence %s, animevent # %i\n",
          (const char *)(*(_DWORD *)a1 + 12),
          &v4[*((_DWORD *)v4 + 1)],
          v3 + 1);
        goto LABEL_12;
      }
LABEL_11:
      sub_101856A0(a2, (int)v8);
LABEL_12:
      v13 += 80;
      v12 = ++v3;
      if ( v3 >= *((_DWORD *)v4 + 6) )
        goto LABEL_13;
    }
    if ( v6 != 5004 )
    {
      if ( (unsigned int)(v6 - 6004) <= 1 )
      {
        v10 = v7 + 12;
        if ( v7 == (char *)-12 || !*v10 )
          v10 = "NPC_CombineS";
        sub_10429A00(Buffer, 0x100u, "%s.RunFootstepLeft", (char)v10);
        sub_101856A0(a2, (int)Buffer);
        sub_10429A00(Buffer, 0x100u, "%s.RunFootstepRight", (char)v10);
        sub_101856A0(a2, (int)Buffer);
        sub_10429A00(Buffer, 0x100u, "%s.FootstepLeft", (char)v10);
        sub_101856A0(a2, (int)Buffer);
        sub_10429A00(Buffer, 0x100u, "%s.FootstepRight", (char)v10);
        sub_101856A0(a2, (int)Buffer);
        v3 = v12;
        goto LABEL_12;
      }
      goto LABEL_8;
    }
LABEL_10:
    v8 = v7 + 12;
    goto LABEL_11;
  }
  return result;
}
