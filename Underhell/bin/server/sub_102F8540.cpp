void __usercall sub_102F8540(int a1@<ecx>, int a2@<edi>)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // eax
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // eax
  int v11; // edi
  unsigned int v12; // ecx
  int v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  int *v22; // edx
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  _DWORD *v26; // ecx
  unsigned int v27; // eax
  int *v28; // ecx
  float v29; // [esp+4h] [ebp-10h] BYREF
  float v30; // [esp+8h] [ebp-Ch]
  float v31; // [esp+Ch] [ebp-8h]
  int v32; // [esp+10h] [ebp-4h] BYREF

  if ( *(_BYTE *)(a1 + 5836) )
  {
    v3 = *(_DWORD *)(a1 + 5688);
    if ( v3 == -1
      || (v4 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 2] != v3 >> 12)
      || !*v4 )
    {
      v5 = sub_101811E0("prop_dynamic", -1);
      *(_DWORD *)(a1 + 5688) = v5 ? *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5) : -1;
      v6 = *(_DWORD *)(a1 + 5688);
      if ( v6 != -1 )
      {
        v7 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 1];
        v8 = v6 >> 12;
        if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 2] == v8 )
        {
          if ( *v7 )
          {
            if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 2] == v8 )
              v9 = *v7;
            else
              v9 = 0;
            (*(void (__thiscall **)(int, const char *, int))(*(_DWORD *)v9 + 104))(
              v9,
              "models/alyx_emptool_prop.mdl",
              a2);
            v10 = *(_DWORD *)(a1 + 5688);
            if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 2] != v10 >> 12 )
              v11 = 0;
            else
              v11 = off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 1];
            *(_DWORD *)(v11 + 260) = *sub_10162BE0(&v32, "Alyx_Emptool");
            sub_100BEF30(a1, "Emp_Holster");
            v12 = *(_DWORD *)(a1 + 5688);
            if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 2] != v12 >> 12 )
              v13 = 0;
            else
              v13 = off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 1];
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 140))(v13, a1);
            v14 = *(_DWORD *)(a1 + 5688);
            if ( v14 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 2] != v14 >> 12 )
              v15 = 0;
            else
              v15 = off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 1];
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v15 + 76))(v15, a1);
            v16 = *(_DWORD *)(a1 + 5688);
            if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 2] != v16 >> 12 )
              v17 = 0;
            else
              v17 = off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 1];
            sub_10112C00(v17 + 320, 0);
            v18 = *(_DWORD *)(a1 + 5688);
            v29 = 0.0;
            v30 = 0.0;
            v31 = 0.0;
            if ( v18 == -1 || off_1061BE18[4 * (v18 & 0xFFF) + 2] != v18 >> 12 )
              v19 = 0;
            else
              v19 = off_1061BE18[4 * (v18 & 0xFFF) + 1];
            sub_100E10C0(v19, &v29);
            v20 = *(_DWORD *)(a1 + 5688);
            v29 = 0.0;
            v30 = 0.0;
            v31 = 0.0;
            if ( v20 == -1 || off_1061BE18[4 * (v20 & 0xFFF) + 2] != v20 >> 12 )
              v21 = 0;
            else
              v21 = off_1061BE18[4 * (v20 & 0xFFF) + 1];
            sub_100E11A0(v21, &v29);
            v23 = *(_DWORD *)(a1 + 5688);
            if ( v23 == -1 || (v22 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 2] != v23 >> 12) )
              v24 = 0;
            else
              v24 = off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 1];
            sub_10035270(v24, (int)v22, 128);
            v25 = *(_DWORD *)(a1 + 5688);
            if ( v25 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 2] != v25 >> 12 )
              v26 = 0;
            else
              v26 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 1];
            sub_100EAB80(v26, 512);
            v27 = *(_DWORD *)(a1 + 5688);
            if ( v27 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 2] != v27 >> 12 )
            {
              (*(void (**)(void))(MEMORY[0] + 96))();
            }
            else
            {
              v28 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 5688) & 0xFFF) + 1];
              (*(void (__thiscall **)(int))(*(_DWORD *)*v28 + 96))(*v28);
            }
          }
        }
      }
    }
  }
}
