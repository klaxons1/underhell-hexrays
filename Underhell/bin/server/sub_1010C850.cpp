void __thiscall sub_1010C850(_DWORD *this)
{
  int v1; // esi
  void (*v2)(void); // eax
  bool v3; // zf
  unsigned int v4; // eax
  int *v5; // edi
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // eax
  int v10; // ecx
  char *v11; // eax
  unsigned int v12; // eax
  int v13; // edi
  unsigned int v14; // eax
  int v15; // ecx
  const char *v16; // eax
  unsigned int v17; // eax
  int *v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // ebx
  unsigned int v23; // eax
  int v24; // edx
  const char *v25; // eax
  int v26; // edi
  const char *v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  int v30; // ecx
  const char *v31; // eax
  const char *v32; // eax
  int v33; // eax
  int v34; // [esp-18h] [ebp-134h]
  int v35; // [esp-14h] [ebp-130h]
  int v36; // [esp-10h] [ebp-12Ch]
  int v37; // [esp-Ch] [ebp-128h]
  int v38; // [esp-8h] [ebp-124h]
  int v39; // [esp-4h] [ebp-120h]
  char Buffer[256]; // [esp+Ch] [ebp-110h] BYREF
  _DWORD *v41; // [esp+10Ch] [ebp-10h]
  int v42; // [esp+110h] [ebp-Ch]
  int v43; // [esp+114h] [ebp-8h]
  char v44; // [esp+11Bh] [ebp-1h]

  v41 = this;
  if ( !byte_10697279 || dword_1060F304 > 0 )
  {
    v1 = this[12];
    if ( v1 )
    {
      while ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)v1 )
      {
        v2 = *(void (**)(void))(*(_DWORD *)dword_10700AC8 + 100);
        v42 = dword_10700AC8;
        v2();
        v3 = *(_DWORD *)(v1 + 4) == 0;
        v44 = 0;
        if ( !v3 )
        {
          v4 = *(_DWORD *)(v1 + 16);
          v5 = off_1061BE18;
          if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(v1 + 16) & 0xFFF) + 2] != v4 >> 12 )
            v43 = 0;
          else
            v43 = off_1061BE18[4 * (*(_DWORD *)(v1 + 16) & 0xFFF) + 1];
          v6 = 0;
          while ( 1 )
          {
            v7 = *(_DWORD *)(v1 + 16);
            if ( v7 == -1 || v5[4 * (*(_DWORD *)(v1 + 16) & 0xFFF) + 2] != v7 >> 12 )
              v8 = 0;
            else
              v8 = v5[4 * (*(_DWORD *)(v1 + 16) & 0xFFF) + 1];
            v9 = *(_DWORD *)(v1 + 12);
            if ( v9 == -1 || v5[4 * (*(_DWORD *)(v1 + 12) & 0xFFF) + 2] != v9 >> 12 )
              v10 = 0;
            else
              v10 = v5[4 * (*(_DWORD *)(v1 + 12) & 0xFFF) + 1];
            v11 = *(char **)(v1 + 4);
            if ( !v11 )
              v11 = (char *)String;
            v6 = sub_1012BF20(v6, v11, v43, v10, v8, 0);
            if ( !v6 )
              break;
            v12 = *(_DWORD *)(v1 + 16);
            if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(v1 + 16) & 0xFFF) + 2] != v12 >> 12 )
              v13 = 0;
            else
              v13 = off_1061BE18[4 * (*(_DWORD *)(v1 + 16) & 0xFFF) + 1];
            v14 = *(_DWORD *)(v1 + 12);
            if ( v14 == -1 || off_1061BE18[4 * (*(_DWORD *)(v1 + 12) & 0xFFF) + 2] != v14 >> 12 )
              v15 = 0;
            else
              v15 = off_1061BE18[4 * (*(_DWORD *)(v1 + 12) & 0xFFF) + 1];
            v16 = *(const char **)(v1 + 8);
            if ( !v16 )
              v16 = String;
            (*(void (__thiscall **)(int, const char *, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v6 + 148))(
              v6,
              v16,
              v15,
              v13,
              *(_DWORD *)(v1 + 28),
              *(_DWORD *)(v1 + 32),
              *(_DWORD *)(v1 + 36),
              *(_DWORD *)(v1 + 40),
              *(_DWORD *)(v1 + 44),
              *(_DWORD *)(v1 + 20));
            v5 = off_1061BE18;
            v44 = 1;
          }
        }
        v17 = *(_DWORD *)(v1 + 24);
        if ( v17 != -1
          && (v18 = &off_1061BE18[4 * (*(_DWORD *)(v1 + 24) & 0xFFF) + 1],
              v19 = v17 >> 12,
              off_1061BE18[4 * (*(_DWORD *)(v1 + 24) & 0xFFF) + 2] == v19)
          && *v18 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(v1 + 24) & 0xFFF) + 2] == v19 )
            v20 = *v18;
          else
            v20 = 0;
          v21 = *(_DWORD *)(v1 + 16);
          if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(v1 + 16) & 0xFFF) + 2] != v21 >> 12 )
            v22 = 0;
          else
            v22 = off_1061BE18[4 * (*(_DWORD *)(v1 + 16) & 0xFFF) + 1];
          v23 = *(_DWORD *)(v1 + 12);
          if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(v1 + 12) & 0xFFF) + 2] != v23 >> 12 )
            v24 = 0;
          else
            v24 = off_1061BE18[4 * (*(_DWORD *)(v1 + 12) & 0xFFF) + 1];
          v25 = *(const char **)(v1 + 8);
          if ( !v25 )
            v25 = String;
          (*(void (__thiscall **)(int, const char *, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v20 + 148))(
            v20,
            v25,
            v24,
            v22,
            *(_DWORD *)(v1 + 28),
            *(_DWORD *)(v1 + 32),
            *(_DWORD *)(v1 + 36),
            *(_DWORD *)(v1 + 40),
            *(_DWORD *)(v1 + 44),
            *(_DWORD *)(v1 + 20));
        }
        else if ( !v44 )
        {
          if ( !*(_DWORD *)(v1 + 4) )
            goto LABEL_68;
          v26 = 0;
          while ( 1 )
          {
            v27 = *(const char **)(v1 + 4);
            if ( !v27 )
              v27 = String;
            v26 = sub_1012BC90(v26, v27);
            if ( !v26 )
              break;
            v39 = *(_DWORD *)(v1 + 20);
            v35 = *(_DWORD *)(v1 + 32);
            v36 = *(_DWORD *)(v1 + 36);
            v34 = *(_DWORD *)(v1 + 28);
            v37 = *(_DWORD *)(v1 + 40);
            v38 = *(_DWORD *)(v1 + 44);
            v28 = *(_DWORD *)(v1 + 16);
            if ( v28 == -1 || off_1061BE18[4 * (*(_DWORD *)(v1 + 16) & 0xFFF) + 2] != v28 >> 12 )
              v43 = 0;
            else
              v43 = off_1061BE18[4 * (*(_DWORD *)(v1 + 16) & 0xFFF) + 1];
            v29 = *(_DWORD *)(v1 + 12);
            if ( v29 == -1 || off_1061BE18[4 * (*(_DWORD *)(v1 + 12) & 0xFFF) + 2] != v29 >> 12 )
              v30 = 0;
            else
              v30 = off_1061BE18[4 * (*(_DWORD *)(v1 + 12) & 0xFFF) + 1];
            v31 = *(const char **)(v1 + 8);
            if ( !v31 )
              v31 = String;
            (*(void (__thiscall **)(int, const char *, int, int, int, int, int, int, int, int))(*(_DWORD *)v26 + 148))(
              v26,
              v31,
              v30,
              v43,
              v34,
              v35,
              v36,
              v37,
              v38,
              v39);
            v44 = 1;
          }
          if ( !v44 )
          {
LABEL_68:
            v32 = *(const char **)(v1 + 8);
            if ( !v32 )
              v32 = String;
            sub_10429A00(
              Buffer,
              0x100u,
              "unhandled input: (%s) -> (%s), from (%s,%s); target entity not found\n",
              (char)v32);
            DevMsg(2, Buffer);
          }
        }
        *(_DWORD *)(*(_DWORD *)(v1 + 52) + 48) = *(_DWORD *)(v1 + 48);
        v33 = *(_DWORD *)(v1 + 48);
        if ( v33 )
          *(_DWORD *)(v33 + 52) = *(_DWORD *)(v1 + 52);
        sub_1042FBE0(v1);
        if ( byte_10697279 )
        {
          if ( dword_1060F304 <= 0 || (--dword_1060F304, dword_1060F304 <= 0) )
          {
            (*(void (__thiscall **)(int))(*(_DWORD *)v42 + 104))(v42);
            return;
          }
        }
        v1 = v41[12];
        (*(void (__thiscall **)(int))(*(_DWORD *)v42 + 104))(v42);
        if ( !v1 )
          return;
      }
    }
  }
}
