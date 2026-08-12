int __userpurge sub_1004CE70@<eax>(int a1@<ecx>, int a2@<edi>, int a3, int a4)
{
  int v4; // ebx
  int result; // eax
  int v6; // ecx
  unsigned int v7; // edx
  int v8; // esi
  int v9; // ecx
  int v10; // edi
  int *v11; // ecx
  int *v12; // edx
  int v13; // edx
  _DWORD *v14; // esi
  int v15; // edi
  int v16; // edx
  _DWORD *v17; // ecx
  unsigned int v18; // esi
  int v19; // ebx
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // eax

  v4 = a1;
  if ( a3 != *(_DWORD *)((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1) + 20) )
    return sub_100358E0(v4, a3, a4);
  result = a4;
  v6 = *(_DWORD *)(a4 + 20);
  if ( v6 < 8 )
  {
    v14 = *(_DWORD **)(a4 + 28);
    v15 = *(_DWORD *)(a4 + 16);
    v16 = 8 - v6;
    v17 = *(_DWORD **)(a4 + 24);
    if ( v17 == v14 )
    {
      *(_DWORD *)(a4 + 20) = 1;
      *(_DWORD *)(a4 + 16) = 0;
      *(_BYTE *)(a4 + 4) = 1;
    }
    else
    {
      if ( v17 > v14 )
      {
        *(_BYTE *)(a4 + 4) = 1;
        *(_DWORD *)(a4 + 16) = 0;
        goto LABEL_18;
      }
      *(_DWORD *)(a4 + 16) = *v17;
    }
    *(_DWORD *)(a4 + 24) = v17 + 1;
LABEL_18:
    if ( *(_BYTE *)(a4 + 4) )
    {
      v10 = 0;
    }
    else
    {
      v18 = *(_DWORD *)(a4 + 16);
      v19 = (v18 & dword_1039BF80[v16]) << *(_DWORD *)(a4 + 20);
      *(_DWORD *)(a4 + 20) = 32 - v16;
      v10 = v19 | v15;
      v4 = a1;
      *(_DWORD *)(a4 + 16) = v18 >> v16;
    }
    goto LABEL_21;
  }
  v7 = *(_DWORD *)(a4 + 16);
  v8 = (unsigned __int8)v7;
  v9 = v6 - 8;
  *(_DWORD *)(a4 + 20) = v9;
  if ( v9 )
  {
    *(_DWORD *)(a4 + 16) = v7 >> 8;
    v10 = (unsigned __int8)v7;
  }
  else
  {
    v11 = *(int **)(a4 + 24);
    v12 = *(int **)(a4 + 28);
    *(_DWORD *)(a4 + 20) = 32;
    if ( v11 == v12 )
    {
      *(_DWORD *)(a4 + 16) = 0;
      *(_DWORD *)(a4 + 20) = 1;
      *(_DWORD *)(a4 + 24) = v11 + 1;
      v10 = v8;
    }
    else
    {
      if ( v11 <= v12 )
      {
        v13 = *v11;
        *(_DWORD *)(a4 + 24) = v11 + 1;
        *(_DWORD *)(a4 + 16) = v13;
      }
      else
      {
        *(_DWORD *)(a4 + 16) = 0;
        *(_BYTE *)(a4 + 4) = 1;
      }
      v10 = v8;
    }
  }
LABEL_21:
  if ( !v10 )
  {
    result = sub_10229D00(32);
    if ( !result )
      return result;
    result = sub_10229D20("keys");
    v22 = result;
    if ( !result )
      return result;
    v23 = *(_DWORD *)(v4 + 1188);
    if ( v23 == 1 )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 124))(dword_1047C97C);
      if ( result < 80 )
        return result;
      sub_1022ACC0("duration", *(float *)(v4 + 1184));
      sub_1022ACA0("fadeout", 0);
      ((void (__thiscall *)(int (***)(), const char *, int, int))(*off_103E4FC0)[4])(
        off_103E4FC0,
        "episodic_intro",
        v22,
        a2);
    }
    else if ( v23 )
    {
      if ( v23 != 2 )
        return sub_1022AF00(v22);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 124))(dword_1047C97C);
      if ( result < 80 )
        return result;
      sub_1022ACC0("duration", *(float *)(v4 + 1184));
      sub_1022ACA0("fadeout", 0);
      ((void (__thiscall *)(int (***)(), const char *, int, int))(*off_103E4FC0)[4])(
        off_103E4FC0,
        "ep2_groggy",
        v22,
        a2);
    }
    else
    {
      sub_1022ACC0("duration", *(float *)(v4 + 1184));
      ((void (__thiscall *)(int (***)(), const char *, int, int))(*off_103E4FC0)[4])(
        off_103E4FC0,
        "episodic_stun",
        v22,
        a2);
    }
    ((void (__thiscall *)(int (***)()))(*off_103E4FC0)[6])(off_103E4FC0);
    return sub_1022AF00(v22);
  }
  if ( v10 == 1 )
  {
    result = *(_DWORD *)(v4 + 1188);
    if ( result == 1 )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 124))(dword_1047C97C);
      if ( result >= 80 )
      {
        result = sub_10229D00(32);
        if ( result )
        {
          result = sub_10229D20("keys");
          v20 = result;
          if ( result )
          {
            sub_1022ACC0("duration", *(float *)(v4 + 1184));
            sub_1022ACA0("fadeout", 1);
            return ((int (__thiscall *)(int (***)(), const char *, int))(*off_103E4FC0)[4])(
                     off_103E4FC0,
                     "episodic_intro",
                     v20);
          }
        }
      }
    }
    else if ( result )
    {
      if ( result == 2 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 124))(dword_1047C97C);
        if ( result >= 80 )
        {
          result = sub_10229D00(32);
          if ( result )
          {
            result = sub_10229D20("keys");
            v21 = result;
            if ( result )
            {
              sub_1022ACC0("duration", *(float *)(v4 + 1184));
              sub_1022ACA0("fadeout", 1);
              return ((int (__thiscall *)(int (***)(), const char *, int))(*off_103E4FC0)[4])(
                       off_103E4FC0,
                       "ep2_groggy",
                       v21);
            }
          }
        }
      }
    }
    else
    {
      return ((int (__thiscall *)(int (***)(), const char *))(*off_103E4FC0)[8])(off_103E4FC0, "episodic_stun");
    }
  }
  return result;
}
