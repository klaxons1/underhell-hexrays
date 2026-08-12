int __usercall sub_1013C440@<eax>(int a1@<edi>, int a2@<esi>, int *a3)
{
  int v3; // edi
  const char *v4; // esi
  int v5; // eax
  float v6; // edx
  float v7; // ecx
  float v9[3]; // [esp+Ch] [ebp-10h] BYREF
  float v10; // [esp+18h] [ebp-4h]

  if ( !dword_1043A260 )
    return Msg("No view anim created, use viewanim_create");
  (*(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v9, a1, a2);
  v10 = 0.2;
  if ( *a3 > 1 )
    v10 = atof((const char *)a3[259]);
  v3 = 0;
  if ( *a3 > 1 )
  {
    if ( *a3 > 2 )
      v4 = (const char *)a3[260];
    else
      v4 = Locale;
    v3 = (int)atof(v4);
  }
  v5 = sub_100DDA40(20);
  if ( !v5 )
    return sub_1013C3B0(dword_1043A260, 0);
  v6 = v9[1];
  v7 = v9[2];
  *(float *)v5 = v9[0];
  *(float *)(v5 + 4) = v6;
  *(_DWORD *)(v5 + 16) = v3;
  *(float *)(v5 + 8) = v7;
  *(float *)(v5 + 12) = v10;
  return sub_1013C3B0(dword_1043A260, (float *)v5);
}
