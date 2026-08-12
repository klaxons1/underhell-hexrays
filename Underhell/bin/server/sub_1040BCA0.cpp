int __usercall sub_1040BCA0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // eax
  char *v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // ebx
  float v20; // [esp+20h] [ebp-18h]
  int v21; // [esp+34h] [ebp-4h] BYREF

  *(_DWORD *)(a1 + 460) = *sub_10162BE0(&v21, "models/magnusson_device.mdl");
  sub_100D8500((_DWORD *)a1);
  sub_10211600(a1, a2);
  if ( *(_BYTE *)(a1 + 225) != 1 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
    *(_BYTE *)(a1 + 225) = 1;
  }
  *(_DWORD *)(a1 + 196) = 0;
  sub_100EA940((int *)a1, 33619968);
  v3 = sub_101811E0("info_particle_system", -1);
  if ( v3 )
    *(_DWORD *)(a1 + 1724) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  else
    *(_DWORD *)(a1 + 1724) = -1;
  v4 = *(_DWORD *)(a1 + 1724);
  if ( v4 != -1 )
  {
    v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 1724) & 0xFFF) + 1];
    v6 = v4 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 1724) & 0xFFF) + 2] == v6 )
    {
      if ( *v5 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 1724) & 0xFFF) + 2] == v6 )
          v7 = *v5;
        else
          v7 = 0;
        (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v7 + 128))(v7, "start_active", "1");
        v8 = *(_DWORD *)(a1 + 1724);
        if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1724) & 0xFFF) + 2] != v8 >> 12 )
          v9 = 0;
        else
          v9 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1724) & 0xFFF) + 1];
        (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v9 + 128))(
          v9,
          "effect_name",
          "striderbuster_smoke");
        v10 = *(_DWORD *)(a1 + 1724);
        if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1724) & 0xFFF) + 2] != v10 >> 12 )
          v11 = 0;
        else
          v11 = (char *)off_1061BE18[4 * (*(_DWORD *)(a1 + 1724) & 0xFFF) + 1];
        sub_10260750(v11);
        if ( *(float *)(dword_106B31C8 + 12) > 0.2 )
        {
          v12 = *(_DWORD *)(a1 + 1724);
          if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1724) & 0xFFF) + 2] != v12 >> 12 )
            v13 = 0;
          else
            v13 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1724) & 0xFFF) + 1];
          (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 136))(v13);
        }
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        v14 = *(_DWORD *)(a1 + 1724);
        if ( v14 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1724) & 0xFFF) + 2] != v14 >> 12 )
          v15 = 0;
        else
          v15 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1724) & 0xFFF) + 1];
        sub_100E0D20(v15, (float *)(a1 + 580));
        v16 = *(_DWORD *)(a1 + 1724);
        if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1724) & 0xFFF) + 2] != v16 >> 12 )
          v17 = 0;
        else
          v17 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1724) & 0xFFF) + 1];
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v17 + 140))(v17, a1, -1);
      }
    }
  }
  v18 = (int)*(float *)(dword_106F095C + 44);
  if ( *(_DWORD *)(a1 + 220) != v18 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 464))(a1, a1 + 220);
    *(_DWORD *)(a1 + 220) = v18;
  }
  v20 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
  return sub_100EC4A0((int *)a1, v20, 0);
}
