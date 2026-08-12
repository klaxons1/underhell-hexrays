int __thiscall sub_101FF290(int this)
{
  int v1; // ebx
  char *v2; // eax
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  int *v7; // eax
  int v8; // edi
  int v9; // edx
  _DWORD *v10; // ebx
  int v11; // eax
  int *v12; // ecx
  int v13; // ebx
  _DWORD *v14; // edi
  int v15; // ebx
  unsigned __int8 v16; // al
  int *v17; // ecx
  char *v18; // eax
  int v19; // edx
  _DWORD *v20; // edi
  _DWORD *v21; // esi
  int *v22; // ecx
  float v24; // [esp+0h] [ebp-2Ch]
  char *String2; // [esp+14h] [ebp-18h]
  int v26; // [esp+18h] [ebp-14h]
  int v27; // [esp+18h] [ebp-14h]
  _DWORD *v28; // [esp+1Ch] [ebp-10h]
  _DWORD *v29; // [esp+20h] [ebp-Ch]
  int v31; // [esp+28h] [ebp-4h]

  v1 = this;
  v2 = *(char **)(this + 824);
  v31 = 0;
  if ( !v2 )
    v2 = (char *)String;
  v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  v28 = v3;
  if ( v3 )
  {
    v29 = (_DWORD *)(v1 + 800);
    v26 = -800 - v1;
    while ( v31 < 4 )
    {
      v4 = __RTDynamicCast(
             (int)v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CBaseAnimating `RTTI Type Descriptor',
             0);
      v5 = v4;
      if ( v4 )
      {
        if ( __RTDynamicCast(
               v4,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseAnimating `RTTI Type Descriptor',
               (int)&CDynamicProp `RTTI Type Descriptor',
               0) )
        {
          sub_1020D850(0);
        }
        if ( *v29 == -1 || off_1061BE18[4 * (*v29 & 0xFFF) + 2] != *v29 >> 12 )
          v6 = 0;
        else
          v6 = off_1061BE18[4 * (*v29 & 0xFFF) + 1];
        if ( v6 != v5 )
        {
          v7 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
          v8 = *v7;
          v9 = v1 + 800;
          v10 = (_DWORD *)((char *)v29 + v26 + v1 + 800);
          if ( *v10 != *v7 )
          {
            v11 = v9 - 800;
            if ( *(_BYTE *)(v9 - 716) )
            {
              *(_BYTE *)(v11 + 88) |= 1u;
            }
            else
            {
              v12 = *(int **)(v11 + 24);
              if ( v12 )
                sub_100194B0(v12, 4 * v31 + 800);
            }
            *v10 = v8;
          }
          v1 = this;
        }
        String2 = *(char **)(v1 + 828);
        if ( !String2 )
          String2 = (char *)String;
        v13 = dword_10700AC8;
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
        if ( !*(_DWORD *)(v5 + 1100) && sub_100D7240((void *)v5) )
          sub_100BD750((volatile signed __int32 *)v5);
        v14 = *(_DWORD **)(v5 + 1100);
        if ( !v14 || !*v14 )
          v14 = 0;
        (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 104))(v13);
        v15 = sub_100BD5F0((int)v14, String2);
        if ( v15 == -1 )
          v15 = 24;
        v16 = *(_BYTE *)(this + v31 + 816);
        if ( v16 != v15 && (_BYTE)v15 != v16 )
        {
          if ( *(_BYTE *)(this + 84) )
          {
            *(_BYTE *)(this + 88) |= 1u;
          }
          else
          {
            v17 = *(int **)(this + 24);
            if ( v17 )
              sub_100194B0(v17, v31 + 816);
          }
          *(_BYTE *)(this + v31 + 816) = v15;
        }
        ++v29;
        ++v31;
        v3 = v28;
        v1 = this;
      }
      v18 = *(char **)(v1 + 824);
      if ( !v18 )
        v18 = (char *)String;
      v28 = sub_1012BF20(&dword_1069E3E0, (int)v3, v18, 0, 0, 0, 0);
      if ( !v28 )
      {
        if ( v31 >= 4 )
          break;
        goto LABEL_44;
      }
      v3 = v28;
    }
  }
  else
  {
LABEL_44:
    v19 = -800 - v1;
    v20 = (_DWORD *)(v1 + 4 * v31 + 800);
    v27 = -800 - v1;
    do
    {
      if ( *v20 != -1 && off_1061BE18[4 * (*v20 & 0xFFF) + 2] == *v20 >> 12 )
      {
        if ( off_1061BE18[4 * (*v20 & 0xFFF) + 1] )
        {
          v21 = (_DWORD *)((char *)v20 + v19 + v1 + 800);
          if ( *v21 != -1 )
          {
            if ( *(_BYTE *)(v1 + 84) )
            {
              *(_BYTE *)(v1 + 88) |= 1u;
            }
            else
            {
              v22 = *(int **)(v1 + 24);
              if ( v22 )
              {
                sub_100194B0(v22, 4 * v31 + 800);
                v1 = this;
              }
            }
            v19 = v27;
            *v21 = -1;
          }
        }
      }
      ++v20;
      ++v31;
    }
    while ( v31 < 4 );
  }
  v24 = *(float *)(dword_106B31C8 + 12) + 1.0;
  return sub_100EC4A0((int *)v1, v24, 0);
}
